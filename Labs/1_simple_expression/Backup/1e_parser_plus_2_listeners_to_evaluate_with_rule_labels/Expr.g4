grammar Expr;

s : e ;
e : Min L_PAR e COMMA e (L_PAR COMMA e)* R_PAR	# maxmin
  | MAX L_PAR e COMMA e (L_PAR COMMA e)* R_PAR	# maxmin
  | L_PAR e R_PAR   			# parenthesis
  | e (op=NOT) e     			# nope
  | e (op=AND|op=OR) e          # andor
  | op=SUB e       				# neg
  | e (op=MULT|op=DIV) e    	# multdiv
  | e (op=ADD |op=SUB) e    	# plusminus
  | INT        					# value
  ;

MIN : 'min' ; // Simple commas for strings!
MAX : 'max' ; 
L_PAR: '(' ;
R_PAR: ')' ;
AND : '&&';
OR : '||';
NOT : '!' ;
MULT: '*' ;
DIV : '/' ;
SUB : '-' ;
ADD : '+' ;
COMMA : ',' ;

INT : [0-9]+ ;
WS : [ \t\n]+ -> skip ;
