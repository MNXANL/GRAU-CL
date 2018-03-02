grammar Calc;

prog:   stat+ ;

stat:   expr NEWLINE                # printExpr
    |   ID '=' expr NEWLINE         # antlrassign
    |   NEWLINE                     # blank
    ;

expr:   expr FACT                       #fact
    |   (ADD|SUB) expr                  #sign
    |   expr (DIV|MUL) expr             #muldiv
    |   expr (ADD|SUB) expr             #muldiv
    |   ABS '(' expr ')'                #abs
    |   (MAX|MIN)  '('  expr_list  ')'  #minmax
    |   (SUM|PROD) '('  expr_list ')'   #sum
    |   INT                             #integer
    |   ID                              #identifier
    ;

expr_list: expr (COMMA expr)*   #exprlist
    ;
    
    
COMMA: ',';
ABS : 'abs';
MAX : 'max';
MIN : 'min';
SUM : 'sum';
PROD: 'prod';
    
FACT: '!';
DIV: '/';
MUL: '*';
SUB: '-';
ADD: '+';

ID  :   [a-zA-Z]+ ;      // match identifiers
INT :   [0-9]+ ;         // match integers
NEWLINE:'\r'? '\n' ;     // return newlines to parser (is end-statement signal)
WS  :   [ \t]+ -> skip ; // toss out whitespace
