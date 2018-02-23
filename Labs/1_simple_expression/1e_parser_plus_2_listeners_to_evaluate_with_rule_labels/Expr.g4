grammar Expr;

s : e ;
e : 
  | MAX L_PAR e (L_PAR COMMA e)* R_PAR # max
  | L_PAR e R_PAR   # parenthesis
  | SUB e       # neg
  | e (MULT|DIV) e     # multdiv
  | e (ADD|SUB) e     # plusminus
  | INT         # value
  ;

MAX : 'max' ; // Simple commas
L_PAR: '(' ;
R_PAR: ')' ;
MULT: '*' ;
DIV : '/' ;
SUB : '-' ;
ADD : '+' ;
COMMA : ',' ;

INT : [0-9]+ ;
WS : [ \t\n]+ -> skip ;
