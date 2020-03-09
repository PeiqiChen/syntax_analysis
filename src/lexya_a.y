%{
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "lexya_a.tab.h"
#include "lex.yy.c"
#include "Node.h"
#include "Node.c"
struct Node* p;
FILE *fout;
extern FILE *yyin;
int yylex(void);
void yyerror(char *);
%}



%union{
         struct Node *token_p;
}

%type <token_p> program translation_unit external_declaration function_definition declaration init_declarator_list init_declarator declarator compound_statement block_item_list block_item statement  selection_statement iteration_statement jump_statement labeled_statement expression basic_expression value type_specifier op declaration_list para_list
%token <token_p> CONSTANT_INT CONSTANT_DOUBLE IDENTIFIER VALUE ANNOTATION SEMI COMMA LC RC BREAK CASE CONTINUE DO ELSE FOR GOTO IF RETURN SWITCH VOID WHILE TRUE FALSE FINAL STATIC CONST DEFINE SEMICOLON DEFAULT
%left <token_p> SUB
%right <token_p>   MINUS TYPE ASSIGNOP BINARYOP11
%left <token_p>  BINARYOP10
%left <token_p>  BINARYOP9
%left <token_p>  BINARYOP8
%left <token_p>  BINARYOP7
%left <token_p>  BINARYOP6
%left <token_p>  BINARYOP5
%left <token_p>  BINARYOP4
%left <token_p>  BINARYOP3
%left <token_p>  BINARYOP2
%left <token_p>  BINARYOP1
%right <token_p>   UNARYOP 
%left <token_p>  '.' LP RP LB RB '*' 

%%


program:
 translation_unit{ 
    p=newNode("program",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|
;

translation_unit:
  external_declaration{
    p=newNode("translation_unit",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| translation_unit external_declaration{
    p=newNode("translation_unit",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
;

external_declaration:  
  function_definition{
    p=newNode("external_declaration",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| declaration_list{
    p=newNode("external_declaration",$1->No_Line);
    insert(p,$1);
    $$ =p;}
;

function_definition:
  type_specifier IDENTIFIER LP RP compound_statement{
    p=newNode("function_definition",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    $$=p;}
|  type_specifier IDENTIFIER LP para_list RP compound_statement{
    p=newNode("function_definition",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    $$=p;}

;

declaration_list:
   para_list SEMI{
    p=newNode("declaration_list",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
|   ANNOTATION{
    p=newNode("declaration_list",$1->No_Line);
    insert(p,$1);
    $$ =p;}
;

para_list:
|   value {
    p=newNode("para_list",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|   IDENTIFIER {
    p=newNode("para_list",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|   declaration {
    p=newNode("para_list",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|   para_list COMMA para_list{
    p=newNode("para_list",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
;


declaration:
  type_specifier{
    p=newNode("declaration",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|  DEFINE IDENTIFIER value {
    p=newNode("declaration",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
|  type_specifier init_declarator_list{
    p=newNode("declaration",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$=p;}
|   IDENTIFIER LP para_list RP {
    p=newNode("function_definition",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    $$=p;}
|   IDENTIFIER LP RP {
    p=newNode("function_definition",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$=p;}
|   IDENTIFIER LP init_declarator_list RP {
    p=newNode("function_definition",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    $$=p;}
;

init_declarator_list:
  init_declarator{
    p=newNode("init_declarator_list",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| init_declarator_list COMMA init_declarator_list{
    p=newNode("init_declarator_list",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$=p;}
;

init_declarator:
  declarator{
    p=newNode("init_declarator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| declarator ASSIGNOP value{
    p=newNode("init_declarator",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$=p;}
;

declarator:
  IDENTIFIER{
    p=newNode("declarator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| declarator COMMA declarator{
    p=newNode("declarator",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$=p;}
| declarator LP RP{
    p=newNode("declarator",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$=p;}
;

compound_statement:
  LC RC{
    p=newNode("compound_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}

| LC block_item_list RC{
    p=newNode("compound_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
;

block_item_list:
  block_item{
    p=newNode("block_item_list",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|  block_item_list block_item{
    p=newNode("block_item_list",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
;


block_item:
  declaration_list{
    p=newNode("block_item",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| statement{
    p=newNode("block_item",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|   expression SEMI{
    p=newNode("block_item",$1->No_Line);
    insert(p,$1);
    $$ =p;}
;

statement:
  selection_statement{
    p=newNode("statement",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| iteration_statement{
    p=newNode("statement",$1->No_Line);
    insert(p,$1);
    $$ =p;} 
| jump_statement{
    p=newNode("statement",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| compound_statement{
    p=newNode("statement",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|   labeled_statement{
    p=newNode("statement",$1->No_Line);
    insert(p,$1);
    $$ =p;}
;

selection_statement:
  IF LP expression RP statement{
    p=newNode("selection_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    $$ =p;} 
|  IF LP expression RP statement  ELSE statement{
    p=newNode("selection_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    $$ =p;}

|  SWITCH LP expression RP statement{
    p=newNode("selection_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    $$ =p;}
;

iteration_statement:
  WHILE  LP expression RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    $$ =p;}
|  DO statement WHILE LP expression RP SEMI{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    $$ =p;}
| FOR LP SEMI SEMI RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    $$ =p;}
| FOR LP init_declarator_list SEMI SEMI RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    $$ =p;}
| FOR LP type_specifier init_declarator_list SEMI SEMI RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    $$ =p;}
| FOR LP init_declarator_list SEMI expression SEMI RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    $$ =p;}
| FOR LP type_specifier init_declarator_list SEMI expression SEMI RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    insert(p,$8);
    $$ =p;}
| FOR LP init_declarator_list SEMI SEMI expression RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    $$ =p;}
| FOR LP type_specifier init_declarator_list SEMI SEMI expression RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    insert(p,$8);
    $$ =p;}
| FOR LP init_declarator_list SEMI expression SEMI expression RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    insert(p,$8);
    $$ =p;}
| FOR LP type_specifier init_declarator_list SEMI expression SEMI expression RP statement{
    p=newNode("iteration_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    insert(p,$5);
    insert(p,$6);
    insert(p,$7);
    insert(p,$8);
    insert(p,$9);
    $$ =p;}
;

jump_statement:
  GOTO value SEMI{
    p=newNode("jump_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
| CONTINUE SEMI{
    p=newNode("jump_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
| BREAK SEMI{
    p=newNode("jump_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
| RETURN SEMI{
    p=newNode("jump_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
| RETURN expression SEMI{
    p=newNode("jump_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
;

labeled_statement:
    IDENTIFIER SEMICOLON statement {
    p=newNode("labeled_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
|   CASE value SEMICOLON statement{
    p=newNode("labeled_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    insert(p,$4);
    $$ =p;}
|   DEFAULT SEMICOLON statement{
    p=newNode("labeled_statement",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
;

expression:
  basic_expression{
    p=newNode("expression",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| expression COMMA basic_expression{
    p=newNode("expression",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
;

basic_expression:
  value{
    p=newNode("basic_expression",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|  IDENTIFIER{
    p=newNode("basic_expression",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| UNARYOP basic_expression{
    p=newNode("basic_expression",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
| basic_expression UNARYOP{
    p=newNode("basic_expression",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}  
| basic_expression op basic_expression{
    p=newNode("basic_expression",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
;


value:
  IDENTIFIER{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| TRUE{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| FALSE{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| CONSTANT_INT{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| CONSTANT_DOUBLE{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| SUB CONSTANT_INT{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| SUB CONSTANT_DOUBLE{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| VALUE{
    p=newNode("value",$1->No_Line);
    insert(p,$1);
    $$ =p;}
;

type_specifier:
  TYPE{
    p=newNode("type",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|   VOID{
    p=newNode("type",$1->No_Line);
    insert(p,$1);
    $$ =p;}
|   IDENTIFIER '.' IDENTIFIER{
    p=newNode("type",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
|   FINAL type_specifier{
    p=newNode("type",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
|   STATIC type_specifier{
    p=newNode("type",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
|   FINAL STATIC type_specifier{
    p=newNode("type",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    insert(p,$3);
    $$ =p;}
|   CONST type_specifier{
    p=newNode("type",$1->No_Line);
    insert(p,$1);
    insert(p,$2);
    $$ =p;}
;

op:
  BINARYOP1{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP2{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP3{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP4{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP5{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP6{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP7{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP8{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP9{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP10{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| BINARYOP11{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
| ASSIGNOP{
    p=newNode("operator",$1->No_Line);
    insert(p,$1);
    $$ =p;}
;







   %%
void yyerror(char* s)
{    
     FILE* errdir=NULL;
     errdir=fopen("stderr","w");
     if(fout!=NULL)
     printf("Error.");
     printf("line %d error.\n",No_Line);
     fprintf(fout,"Error.");
     fprintf(errdir,"line %d error.\n",No_Line);
     fclose(fout);
     fclose(errdir);
     exit(1);
}

int main(int argc,char* argv[])
{   
    FILE* fin=NULL;
     extern FILE* yyin;
     fin=fopen(argv[1],"r"); 
     fout=fopen("out","w");

    if (argc > 1) {
       if (!(yyin = fopen(argv[1], "r"))) {   
           perror(argv[1]);
           return 1;
       }
   } 
   yyparse();
   printTree(p,fout);
   fclose(fin);
     fclose(fout);
   return 0;
}