%{
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "lexya_a.tab.h"
void yyerror(char *s);
int No_Line=1;
int yywrap();
struct Node* newNode(char* nameIn,int line);
%}
D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			(Ee?{D}+)
P           (Pp?{D}+)
FS			(f|F|l|L)
IS          ((u|U)|(u|U)?(l|L|ll|LL)|(l|L|ll|LL)(u|U))
type (byte|int|float|double|char|string|bool)
value   ["][a-zA-Z_0-9]*["]
SHIFT   [\n]
annotation [/][*]|([/][/][^\n]* )
mulexplain [/][*][^*]*[*]+([^*/][^*]*[*]+)*[/] 
explain   ([/][/][^\n]*)
identifier {L}({L}|{D})*
double ({D}+{E}{FS}?)|({D}*"."{D}+{E}?{FS}?)|({D}+"."{D}*{E}?{FS}?)
int (0[xX]{H}+{IS}?)|(0[0-7]*{IS}?)|([1-9]{D}*{IS}?)



%%
{SHIFT}              { No_Line++;}
final     { yylval.token_p= newNode(yytext,No_Line); return FINAL; }
static    { yylval.token_p= newNode(yytext,No_Line); return STATIC; }
const     { yylval.token_p= newNode(yytext,No_Line); return CONST; }
#define    { yylval.token_p= newNode(yytext,No_Line); return DEFINE; }
default    { yylval.token_p= newNode(yytext,No_Line); return DEFAULT; }
break			{ yylval.token_p= newNode(yytext,No_Line); return BREAK; }
case			{ yylval.token_p= newNode(yytext,No_Line); return(CASE); }
continue		{ yylval.token_p= newNode(yytext,No_Line);return(CONTINUE); }
do			{ yylval.token_p= newNode(yytext,No_Line); return(DO); }
else			{ yylval.token_p= newNode(yytext,No_Line); return(ELSE); }
for			{ yylval.token_p= newNode(yytext,No_Line);return(FOR); }
goto			{ yylval.token_p= newNode(yytext,No_Line);return(GOTO); }
if			{ yylval.token_p= newNode(yytext,No_Line);return(IF); }
return		{ yylval.token_p= newNode(yytext,No_Line);return(RETURN); }
switch		{ yylval.token_p= newNode(yytext,No_Line);return(SWITCH); }
void			{ yylval.token_p= newNode(yytext,No_Line);return(VOID); }
while			{ yylval.token_p= newNode(yytext,No_Line);return(WHILE); }
true			{ yylval.token_p= newNode(yytext,No_Line);return(TRUE); }
false	        { yylval.token_p= newNode(yytext,No_Line); return(FALSE); }
{int}			{ yylval.token_p= newNode(yytext,No_Line);return (CONSTANT_INT);}
{double}		{ yylval.token_p= newNode(yytext,No_Line);return(CONSTANT_DOUBLE); }
{type} 			{ yylval.token_p= newNode(yytext,No_Line); return (TYPE);}
{value}			{ yylval.token_p= newNode(yytext,No_Line);return (VALUE); }
{mulexplain} 		{yylval.token_p= newNode(yytext,No_Line);
          return ANNOTATION;}
{explain}  		{yylval.token_p= newNode(yytext,No_Line);
          return ANNOTATION;}
{identifier} { yylval.token_p= newNode(yytext,No_Line); 
          return IDENTIFIER;}
[;]				{yylval.token_p= newNode(yytext,No_Line);
          return SEMI;}
[:]       {yylval.token_p= newNode(yytext,No_Line);
          return SEMICOLON;}
[,]              {yylval.token_p= newNode(yytext,No_Line);return COMMA;}
(!)|(\+\+)|(\-\-)|(~)   {yylval.token_p= newNode(yytext,No_Line);return UNARYOP;}
[-]              	{yylval.token_p = newNode(yytext, No_Line);
	                return (SUB);}
(\*)|(\/)|(%)         {yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP1;
                       }
(\+)                  {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP2;
                       }
(<<)|(>>)             {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP3;
                       }
(>)|(>=)|(<)|(<=)     {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP4;
                       }
(==)|(!=)             {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP5;
                       }
[&]                   {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP6;
                       }
"^"                   {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP7;
                       }
(\|)                    {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP8;
                       }
(&&)                     {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP9;
                       }
(\|\|)                  {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP10;
                       }
(\+=)|(-=)|(\*=)|(\/=)|(&=)|(^=)|(\|=)|(<<=)|(>>=)    {
                       yylval.token_p= newNode(yytext,No_Line);
                       return BINARYOP11;
                       }
[=]                     { yylval.token_p= newNode(yytext,No_Line);
                        return ASSIGNOP;}
[(]                     { yylval.token_p= newNode(yytext,No_Line);
                          return LP;  }
[)]                     { yylval.token_p= newNode(yytext,No_Line);
                          return RP;  }
[[]                     { yylval.token_p= newNode(yytext,No_Line);
                          return LB;  }
[]]                     { yylval.token_p= newNode(yytext,No_Line);
                          return RB;  }
[{]                     { yylval.token_p= newNode(yytext,No_Line);
                          return LC;  }
[}]                     { yylval.token_p= newNode(yytext,No_Line);
                          return RC;  }
[ \t]+                  ;
.                       yyerror("Error:invalid input.\n");
%%
struct Node* newNode (char* node_name,int line)
{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	if (p==NULL)
	{
		printf("Error:out of memory.\n");
		exit(1);
	}
    strncpy(p->name,node_name,20);
    p->brother=NULL;
    p->child=NULL;
    p->No_Line=line;
    p->No_Child=0;
    p->col=0;
    p->IsBegin=0;
    return p;
}

int yywrap(void) {
return 1;
}
