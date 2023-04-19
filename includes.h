#ifndef INCLUDES_H
#define INCLUDES_H

node *opr(int oper, int nops, ...);
node *id(int i);
node *conFloat(float value);
node *conInteger(int value);
void freeNode(node *p);
int ex(node *p);
int yylex(void);
void yyerror(char *s);

#endif