grammar Expr;

s : e ;
e : (op=MAX|o=MIN) L_PAR e COMMA e (COMMA e)* R_PAR  # maxmin
  | L_PAR e R_PAR         # pars
  | op=SUB e              # neg
  | e (op=MULT|op=DIV) e  # proddiv
  | e (op=ADD|op=SUB) e   # plusminus
  | INT         # value
  ;



MIN : 'min' ; // Simple commas for strings!
MAX : 'max' ; 

L_PAR: '(' ;
R_PAR: ')' ;

AND : '&';
OR : 'v';
NOT : '!' ;

MULT: '*' ;
DIV: '/' ;
SUB : '-' ;
ADD : '+' ;

INT : [0-9]+ ;
WS : [ \t\n]+ -> skip ;
