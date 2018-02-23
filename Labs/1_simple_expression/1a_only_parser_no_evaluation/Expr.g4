grammar Expr;



s : e ;
e : '(' e ')'
  | MINUS e
  | e (MULT|DIV) e
  | e (PLUS|MINUS) e
  | INT
  ;

MULT = '*';
DIV = '/';
PLUS = '+';
MINUS = '-';

INT : [0-9]+ ;
WS : [ \t\n]+ -> skip ;
