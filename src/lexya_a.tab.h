/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CONSTANT_INT = 258,
     CONSTANT_DOUBLE = 259,
     IDENTIFIER = 260,
     VALUE = 261,
     ANNOTATION = 262,
     SEMI = 263,
     COMMA = 264,
     LC = 265,
     RC = 266,
     BREAK = 267,
     CASE = 268,
     CONTINUE = 269,
     DO = 270,
     ELSE = 271,
     FOR = 272,
     GOTO = 273,
     IF = 274,
     RETURN = 275,
     SWITCH = 276,
     VOID = 277,
     WHILE = 278,
     TRUE = 279,
     FALSE = 280,
     FINAL = 281,
     STATIC = 282,
     CONST = 283,
     DEFINE = 284,
     SEMICOLON = 285,
     DEFAULT = 286,
     SUB = 287,
     BINARYOP11 = 288,
     ASSIGNOP = 289,
     TYPE = 290,
     MINUS = 291,
     BINARYOP10 = 292,
     BINARYOP9 = 293,
     BINARYOP8 = 294,
     BINARYOP7 = 295,
     BINARYOP6 = 296,
     BINARYOP5 = 297,
     BINARYOP4 = 298,
     BINARYOP3 = 299,
     BINARYOP2 = 300,
     BINARYOP1 = 301,
     UNARYOP = 302,
     RB = 303,
     LB = 304,
     RP = 305,
     LP = 306
   };
#endif
/* Tokens.  */
#define CONSTANT_INT 258
#define CONSTANT_DOUBLE 259
#define IDENTIFIER 260
#define VALUE 261
#define ANNOTATION 262
#define SEMI 263
#define COMMA 264
#define LC 265
#define RC 266
#define BREAK 267
#define CASE 268
#define CONTINUE 269
#define DO 270
#define ELSE 271
#define FOR 272
#define GOTO 273
#define IF 274
#define RETURN 275
#define SWITCH 276
#define VOID 277
#define WHILE 278
#define TRUE 279
#define FALSE 280
#define FINAL 281
#define STATIC 282
#define CONST 283
#define DEFINE 284
#define SEMICOLON 285
#define DEFAULT 286
#define SUB 287
#define BINARYOP11 288
#define ASSIGNOP 289
#define TYPE 290
#define MINUS 291
#define BINARYOP10 292
#define BINARYOP9 293
#define BINARYOP8 294
#define BINARYOP7 295
#define BINARYOP6 296
#define BINARYOP5 297
#define BINARYOP4 298
#define BINARYOP3 299
#define BINARYOP2 300
#define BINARYOP1 301
#define UNARYOP 302
#define RB 303
#define LB 304
#define RP 305
#define LP 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "lexya_a.y"
{
         struct Node *token_p;
}
/* Line 1529 of yacc.c.  */
#line 155 "lexya_a.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

