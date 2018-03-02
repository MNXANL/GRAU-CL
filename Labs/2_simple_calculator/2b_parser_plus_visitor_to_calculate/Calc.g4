grammar Calc;

prog:   stat+ ;

// NEED TO INSERT VISIT (# visitname) TO EACH EXPR!! 

stat:   expr NEWLINE                # printExpr
    |   ID '=' expr NEWLINE         # assign
    |   NEWLINE                     # blank
    ;

expr:   expr op=FACT                # fact
    |   (op=ADD|op=SUB) expr        # signe
    |   expr (OP=DIV|op=MUL) expr   # prod
    |   expr (op=ADD|op=SUB) expr   # plus
    |   op=ABS '(' expr ')'         # abs
    |   op=MAX '(' expr_list  ')'   # max
    |   op=SUM '(' expr_list? ')'   # sum
    |   INT                         # int
    |   ID                          # id
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


