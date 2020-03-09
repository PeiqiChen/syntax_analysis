/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "lexya_a.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "lexya_a.y"
{
         struct Node *token_p;
}
/* Line 193 of yacc.c.  */
#line 218 "lexya_a.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 231 "lexya_a.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    49,     2,     2,     2,    48,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    13,    15,    21,
      28,    31,    33,    34,    36,    38,    40,    44,    46,    50,
      53,    58,    62,    67,    69,    73,    75,    79,    81,    85,
      89,    92,    96,    98,   101,   103,   105,   108,   110,   112,
     114,   116,   118,   124,   132,   138,   144,   152,   159,   167,
     176,   185,   195,   204,   214,   224,   235,   239,   242,   245,
     248,   252,   256,   261,   265,   267,   271,   273,   275,   278,
     281,   285,   287,   289,   291,   293,   295,   298,   301,   303,
     305,   307,   311,   314,   317,   321,   324,   326,   328,   330,
     332,   334,   336,   338,   340,   342,   344,   346
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    -1,    57,    -1,    56,    57,
      -1,    58,    -1,    59,    -1,    76,     5,    53,    52,    65,
      -1,    76,     5,    53,    60,    52,    65,    -1,    60,     8,
      -1,     7,    -1,    -1,    75,    -1,     5,    -1,    61,    -1,
      60,     9,    60,    -1,    76,    -1,    29,     5,    75,    -1,
      76,    62,    -1,     5,    53,    60,    52,    -1,     5,    53,
      52,    -1,     5,    53,    62,    52,    -1,    63,    -1,    62,
       9,    62,    -1,    64,    -1,    64,    34,    75,    -1,     5,
      -1,    64,     9,    64,    -1,    64,    53,    52,    -1,    10,
      11,    -1,    10,    66,    11,    -1,    67,    -1,    66,    67,
      -1,    59,    -1,    68,    -1,    73,     8,    -1,    69,    -1,
      70,    -1,    71,    -1,    65,    -1,    72,    -1,    19,    53,
      73,    52,    68,    -1,    19,    53,    73,    52,    68,    16,
      68,    -1,    21,    53,    73,    52,    68,    -1,    23,    53,
      73,    52,    68,    -1,    15,    68,    23,    53,    73,    52,
       8,    -1,    17,    53,     8,     8,    52,    68,    -1,    17,
      53,    62,     8,     8,    52,    68,    -1,    17,    53,    76,
      62,     8,     8,    52,    68,    -1,    17,    53,    62,     8,
      73,     8,    52,    68,    -1,    17,    53,    76,    62,     8,
      73,     8,    52,    68,    -1,    17,    53,    62,     8,     8,
      73,    52,    68,    -1,    17,    53,    76,    62,     8,     8,
      73,    52,    68,    -1,    17,    53,    62,     8,    73,     8,
      73,    52,    68,    -1,    17,    53,    76,    62,     8,    73,
       8,    73,    52,    68,    -1,    18,    75,     8,    -1,    14,
       8,    -1,    12,     8,    -1,    20,     8,    -1,    20,    73,
       8,    -1,     5,    30,    68,    -1,    13,    75,    30,    68,
      -1,    31,    30,    68,    -1,    74,    -1,    73,     9,    74,
      -1,    75,    -1,     5,    -1,    47,    74,    -1,    74,    47,
      -1,    74,    77,    74,    -1,     5,    -1,    24,    -1,    25,
      -1,     3,    -1,     4,    -1,    32,     3,    -1,    32,     4,
      -1,     6,    -1,    35,    -1,    22,    -1,     5,    48,     5,
      -1,    26,    76,    -1,    27,    76,    -1,    26,    27,    76,
      -1,    28,    76,    -1,    46,    -1,    45,    -1,    44,    -1,
      43,    -1,    42,    -1,    41,    -1,    40,    -1,    39,    -1,
      38,    -1,    37,    -1,    33,    -1,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    48,    52,    56,    64,    68,    75,    83,
      96,   101,   107,   108,   112,   116,   120,   130,   134,   139,
     144,   151,   157,   167,   171,   180,   184,   193,   197,   203,
     212,   218,   227,   231,   240,   244,   248,   255,   259,   263,
     267,   271,   278,   286,   297,   308,   316,   326,   335,   344,
     354,   364,   375,   385,   396,   407,   422,   428,   433,   438,
     443,   452,   458,   465,   474,   478,   487,   491,   495,   500,
     505,   515,   519,   523,   527,   531,   535,   539,   543,   550,
     554,   558,   564,   569,   574,   580,   588,   592,   596,   600,
     604,   608,   612,   616,   620,   624,   628,   632
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT_INT", "CONSTANT_DOUBLE",
  "IDENTIFIER", "VALUE", "ANNOTATION", "SEMI", "COMMA", "LC", "RC",
  "BREAK", "CASE", "CONTINUE", "DO", "ELSE", "FOR", "GOTO", "IF", "RETURN",
  "SWITCH", "VOID", "WHILE", "TRUE", "FALSE", "FINAL", "STATIC", "CONST",
  "DEFINE", "SEMICOLON", "DEFAULT", "SUB", "BINARYOP11", "ASSIGNOP",
  "TYPE", "MINUS", "BINARYOP10", "BINARYOP9", "BINARYOP8", "BINARYOP7",
  "BINARYOP6", "BINARYOP5", "BINARYOP4", "BINARYOP3", "BINARYOP2",
  "BINARYOP1", "UNARYOP", "'.'", "'*'", "RB", "LB", "RP", "LP", "$accept",
  "program", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", "para_list", "declaration",
  "init_declarator_list", "init_declarator", "declarator",
  "compound_statement", "block_item_list", "block_item", "statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "labeled_statement", "expression", "basic_expression", "value",
  "type_specifier", "op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    46,    42,
     303,   304,   305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    62,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    68,    68,    68,
      68,    68,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    71,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     5,     6,
       2,     1,     0,     1,     1,     1,     3,     1,     3,     2,
       4,     3,     4,     1,     3,     1,     3,     1,     3,     3,
       2,     3,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     5,     7,     5,     5,     7,     6,     7,     8,
       8,     9,     8,     9,     9,    10,     3,     2,     2,     2,
       3,     3,     4,     3,     1,     3,     1,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     3,     2,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    74,    75,    14,    78,    11,    80,    72,    73,     0,
       0,     0,     0,     0,    79,     0,    12,     4,     6,     7,
       0,    15,    13,    17,     0,    12,     0,     0,    82,    83,
      85,     0,    76,    77,     1,     5,    10,    12,    27,    19,
      23,    25,    81,    14,    21,     0,     0,    17,    83,    71,
      18,    16,    12,     0,     0,     0,     0,    20,    22,    27,
       0,     0,    24,    28,    26,    29,    12,     8,     0,    67,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    40,    12,    32,    35,    37,    38,
      39,    41,     0,    64,    66,     9,     0,    58,     0,    57,
       0,     0,     0,     0,     0,    67,    59,     0,    66,     0,
       0,     0,    68,    31,    33,    36,     0,    96,    97,    95,
      94,    93,    92,    91,    90,    89,    88,    87,    86,    69,
       0,    61,     0,     0,    27,     0,     0,     0,    56,     0,
      60,     0,     0,    63,    65,    70,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      44,    45,     0,    47,     0,     0,     0,     0,     0,     0,
      46,    48,     0,     0,     0,     0,     0,     0,    43,    52,
      50,     0,    49,     0,     0,     0,    54,    53,    51,     0,
      55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    21,    39,    40,
      41,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   108,    47,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -81
static const yytype_int16 yypact[] =
{
     337,   -81,   -81,   -10,   -81,   -81,   -81,   -81,   -81,   232,
     407,   407,     8,    84,   -81,    16,   349,   -81,   -81,   -81,
      85,   -81,   -81,    22,    35,   120,     7,   407,   -81,   -81,
     -81,   419,   -81,   -81,   -81,   -81,   -81,   382,    -7,    51,
     -81,    -2,   -81,   139,   -81,    -3,     5,    61,   -81,   -81,
     -81,    60,   132,    61,    61,   419,    40,   -81,   -81,   -81,
      86,     9,    51,    -6,   -81,   -81,   221,   -81,    86,     0,
     -81,    92,   419,    94,   435,    68,   419,    76,   175,   100,
     129,    89,   298,   -81,   -81,   259,   -81,   -81,   -81,   -81,
     -81,   -81,   131,   430,   142,   -81,   435,   -81,   103,   -81,
     158,   168,   393,   190,   298,   -81,   -81,   154,   -81,   298,
     298,   435,   159,   -81,   -81,   -81,   298,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     298,   -81,   435,   151,     7,   197,   157,    61,   -81,    10,
     -81,    12,    45,   -81,   430,   430,   -81,   298,   156,   292,
     177,   435,   435,   435,    54,   435,    20,   185,   304,   194,
     -81,   -81,   201,   -81,   435,    56,    80,   165,   193,   435,
     -81,   -81,   435,   435,    62,   435,    66,   171,   -81,   -81,
     -81,   435,   -81,   435,   435,    82,   -81,   -81,   -81,   435,
     -81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   195,   -81,   -51,    91,   -81,   -20,   -81,
     160,   -29,   -81,   128,   -74,   -81,   -81,   -81,   -81,   -36,
     -80,     4,     1,   -81
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -28
static const yytype_int16 yytable[] =
{
     101,    23,   112,    54,    22,    46,    37,    54,   -14,   -14,
      28,    29,    30,    31,    53,    83,    34,    23,    37,   116,
      22,   116,   131,     1,     2,   105,     4,    38,    48,    22,
      96,    67,    55,    62,    83,    50,   144,   143,    24,    95,
      42,    22,   107,    25,     7,     8,    52,    56,    24,    57,
     145,    56,    13,    25,   116,    24,    22,    58,   146,    64,
      53,    68,   151,   116,   152,   116,    59,    82,   139,    37,
      94,   116,   164,   141,   142,   116,    98,   159,   160,   161,
     103,   163,   136,     1,     2,   105,     4,    32,    33,    94,
     171,   116,    65,    36,    37,   178,    66,   153,   179,   180,
      97,   182,    99,   137,     7,     8,   162,   186,   172,   187,
     188,   154,    13,   157,   181,   190,    45,   150,   183,   111,
     165,   102,   168,     1,     2,    43,     4,    82,    51,   104,
     174,   176,   173,   132,   189,     1,     2,     3,     4,   115,
     116,   185,     6,    61,     7,     8,     9,    10,    11,    12,
     -13,   -13,    13,   109,     6,    14,     7,     8,     9,    10,
      11,    12,   140,   116,    13,   149,    53,    14,     1,     2,
     105,     4,    44,   -27,     1,     2,   105,     4,     1,     2,
     105,     4,   110,   106,    60,   158,    53,    24,    96,     7,
       8,   133,    25,   166,   116,     7,     8,    13,   138,     7,
       8,   177,   116,    13,   147,   148,   129,    13,   155,   170,
     169,    35,    82,   114,    63,     0,     0,   175,    82,     0,
       0,     0,    82,   184,     1,     2,    69,     4,     5,     0,
       0,    66,    70,    71,    72,    73,    74,    26,    75,    76,
      77,    78,    79,     6,    80,     7,     8,     9,    10,    11,
      12,     0,    81,    13,     6,     0,    14,     0,     9,    27,
      11,     0,     1,     2,    69,     4,     5,    14,    82,    66,
     113,    71,    72,    73,    74,     0,    75,    76,    77,    78,
      79,     6,    80,     7,     8,     9,    10,    11,    12,     0,
      81,    13,     0,     0,    14,     1,     2,   105,     4,     0,
     156,     1,     2,   105,     4,     0,    82,     1,     2,   105,
       4,     0,   167,     0,     0,     0,     7,     8,     0,     0,
       0,     0,     7,     8,    13,     0,     0,     0,     7,     8,
      13,     0,     0,     0,     0,     0,    13,    -3,     0,    82,
       1,     2,     3,     4,     5,    82,     0,     0,     0,    -2,
       0,    82,     1,     2,     3,     4,     5,     0,     0,     6,
       0,     7,     8,     9,    10,    11,    12,     0,     0,    13,
       0,     6,    14,     7,     8,     9,    10,    11,    12,     0,
       0,    13,     0,     0,    14,     1,     2,     3,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,   135,     0,     0,     6,     0,     7,     8,     9,    10,
      11,    12,    26,     0,    13,     6,     0,    14,     0,     9,
      10,    11,     1,     2,    49,     4,     0,     0,    14,     6,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
     100,     0,    14,     7,     8,    66,     0,    71,    72,    73,
      74,    13,    75,    76,    77,    78,    79,     0,    80,     0,
       0,     0,     0,   117,   118,     0,    81,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129
};

static const yytype_int16 yycheck[] =
{
      74,     0,    82,     9,     0,    25,     9,     9,     8,     9,
       9,    10,    11,     5,     9,    66,     0,    16,     9,     9,
      16,     9,    96,     3,     4,     5,     6,     5,    27,    25,
      30,    60,    34,    53,    85,    31,   116,   111,    48,    68,
       5,    37,    78,    53,    24,    25,    53,    53,    48,    52,
     130,    53,    32,    53,     9,    48,    52,    52,   132,    55,
       9,    52,    52,     9,    52,     9,     5,    47,   104,     9,
      66,     9,    52,   109,   110,     9,    72,   151,   152,   153,
      76,   155,   102,     3,     4,     5,     6,     3,     4,    85,
     164,     9,    52,     8,     9,   169,    10,    52,   172,   173,
       8,   175,     8,   102,    24,    25,    52,   181,    52,   183,
     184,   147,    32,   149,    52,   189,    25,   137,    52,    30,
     156,    53,   158,     3,     4,     5,     6,    47,    37,    53,
     166,   167,    52,    30,    52,     3,     4,     5,     6,     8,
       9,   177,    22,    52,    24,    25,    26,    27,    28,    29,
       8,     9,    32,    53,    22,    35,    24,    25,    26,    27,
      28,    29,     8,     9,    32,     8,     9,    35,     3,     4,
       5,     6,    52,    34,     3,     4,     5,     6,     3,     4,
       5,     6,    53,     8,    52,     8,     9,    48,    30,    24,
      25,    23,    53,     8,     9,    24,    25,    32,     8,    24,
      25,     8,     9,    32,    53,     8,    47,    32,    52,     8,
      16,    16,    47,    85,    54,    -1,    -1,    52,    47,    -1,
      -1,    -1,    47,    52,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,     5,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    22,    -1,    35,    -1,    26,    27,
      28,    -1,     3,     4,     5,     6,     7,    35,    47,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    -1,    35,     3,     4,     5,     6,    -1,
       8,     3,     4,     5,     6,    -1,    47,     3,     4,     5,
       6,    -1,     8,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    24,    25,    32,    -1,    -1,    -1,    24,    25,
      32,    -1,    -1,    -1,    -1,    -1,    32,     0,    -1,    47,
       3,     4,     5,     6,     7,    47,    -1,    -1,    -1,     0,
      -1,    47,     3,     4,     5,     6,     7,    -1,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    22,    35,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    -1,    -1,    35,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
      -1,     8,    -1,    -1,    22,    -1,    24,    25,    26,    27,
      28,    29,     5,    -1,    32,    22,    -1,    35,    -1,    26,
      27,    28,     3,     4,     5,     6,    -1,    -1,    35,    22,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
       5,    -1,    35,    24,    25,    10,    -1,    12,    13,    14,
      15,    32,    17,    18,    19,    20,    21,    -1,    23,    -1,
      -1,    -1,    -1,    33,    34,    -1,    31,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    22,    24,    25,    26,
      27,    28,    29,    32,    35,    55,    56,    57,    58,    59,
      60,    61,    75,    76,    48,    53,     5,    27,    76,    76,
      76,     5,     3,     4,     0,    57,     8,     9,     5,    62,
      63,    64,     5,     5,    52,    60,    62,    76,    76,     5,
      75,    60,    53,     9,     9,    34,    53,    52,    52,     5,
      52,    60,    62,    64,    75,    52,    10,    65,    52,     5,
      11,    12,    13,    14,    15,    17,    18,    19,    20,    21,
      23,    31,    47,    59,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    65,    30,     8,    75,     8,
       5,    68,    53,    75,    53,     5,     8,    73,    75,    53,
      53,    30,    74,    11,    67,     8,     9,    33,    34,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      77,    68,    30,    23,     5,     8,    62,    76,     8,    73,
       8,    73,    73,    68,    74,    74,    68,    53,     8,     8,
      62,    52,    52,    52,    73,    52,     8,    73,     8,    68,
      68,    68,    52,    68,    52,    73,     8,     8,    73,    16,
       8,    68,    52,    52,    73,    52,    73,     8,    68,    68,
      68,    52,    68,    52,    52,    73,    68,    68,    68,    52,
      68
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 44 "lexya_a.y"
    { 
    p=newNode("program",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 4:
#line 52 "lexya_a.y"
    {
    p=newNode("translation_unit",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 5:
#line 56 "lexya_a.y"
    {
    p=newNode("translation_unit",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 6:
#line 64 "lexya_a.y"
    {
    p=newNode("external_declaration",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 7:
#line 68 "lexya_a.y"
    {
    p=newNode("external_declaration",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 8:
#line 75 "lexya_a.y"
    {
    p=newNode("function_definition",(yyvsp[(1) - (5)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (5)].token_p));
    insert(p,(yyvsp[(2) - (5)].token_p));
    insert(p,(yyvsp[(3) - (5)].token_p));
    insert(p,(yyvsp[(4) - (5)].token_p));
    insert(p,(yyvsp[(5) - (5)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 9:
#line 83 "lexya_a.y"
    {
    p=newNode("function_definition",(yyvsp[(1) - (6)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (6)].token_p));
    insert(p,(yyvsp[(2) - (6)].token_p));
    insert(p,(yyvsp[(3) - (6)].token_p));
    insert(p,(yyvsp[(4) - (6)].token_p));
    insert(p,(yyvsp[(5) - (6)].token_p));
    insert(p,(yyvsp[(6) - (6)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 10:
#line 96 "lexya_a.y"
    {
    p=newNode("declaration_list",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 11:
#line 101 "lexya_a.y"
    {
    p=newNode("declaration_list",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 13:
#line 108 "lexya_a.y"
    {
    p=newNode("para_list",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 14:
#line 112 "lexya_a.y"
    {
    p=newNode("para_list",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 15:
#line 116 "lexya_a.y"
    {
    p=newNode("para_list",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 16:
#line 120 "lexya_a.y"
    {
    p=newNode("para_list",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 17:
#line 130 "lexya_a.y"
    {
    p=newNode("declaration",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 18:
#line 134 "lexya_a.y"
    {
    p=newNode("declaration",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 19:
#line 139 "lexya_a.y"
    {
    p=newNode("declaration",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 20:
#line 144 "lexya_a.y"
    {
    p=newNode("function_definition",(yyvsp[(1) - (4)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (4)].token_p));
    insert(p,(yyvsp[(2) - (4)].token_p));
    insert(p,(yyvsp[(3) - (4)].token_p));
    insert(p,(yyvsp[(4) - (4)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 21:
#line 151 "lexya_a.y"
    {
    p=newNode("function_definition",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 22:
#line 157 "lexya_a.y"
    {
    p=newNode("function_definition",(yyvsp[(1) - (4)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (4)].token_p));
    insert(p,(yyvsp[(2) - (4)].token_p));
    insert(p,(yyvsp[(3) - (4)].token_p));
    insert(p,(yyvsp[(4) - (4)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 23:
#line 167 "lexya_a.y"
    {
    p=newNode("init_declarator_list",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 24:
#line 171 "lexya_a.y"
    {
    p=newNode("init_declarator_list",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 25:
#line 180 "lexya_a.y"
    {
    p=newNode("init_declarator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 26:
#line 184 "lexya_a.y"
    {
    p=newNode("init_declarator",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 27:
#line 193 "lexya_a.y"
    {
    p=newNode("declarator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 28:
#line 197 "lexya_a.y"
    {
    p=newNode("declarator",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 29:
#line 203 "lexya_a.y"
    {
    p=newNode("declarator",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p)=p;;}
    break;

  case 30:
#line 212 "lexya_a.y"
    {
    p=newNode("compound_statement",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 31:
#line 218 "lexya_a.y"
    {
    p=newNode("compound_statement",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 32:
#line 227 "lexya_a.y"
    {
    p=newNode("block_item_list",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 33:
#line 231 "lexya_a.y"
    {
    p=newNode("block_item_list",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 34:
#line 240 "lexya_a.y"
    {
    p=newNode("block_item",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 35:
#line 244 "lexya_a.y"
    {
    p=newNode("block_item",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 36:
#line 248 "lexya_a.y"
    {
    p=newNode("block_item",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 37:
#line 255 "lexya_a.y"
    {
    p=newNode("statement",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 38:
#line 259 "lexya_a.y"
    {
    p=newNode("statement",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 39:
#line 263 "lexya_a.y"
    {
    p=newNode("statement",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 40:
#line 267 "lexya_a.y"
    {
    p=newNode("statement",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 41:
#line 271 "lexya_a.y"
    {
    p=newNode("statement",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 42:
#line 278 "lexya_a.y"
    {
    p=newNode("selection_statement",(yyvsp[(1) - (5)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (5)].token_p));
    insert(p,(yyvsp[(2) - (5)].token_p));
    insert(p,(yyvsp[(3) - (5)].token_p));
    insert(p,(yyvsp[(4) - (5)].token_p));
    insert(p,(yyvsp[(5) - (5)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 43:
#line 286 "lexya_a.y"
    {
    p=newNode("selection_statement",(yyvsp[(1) - (7)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (7)].token_p));
    insert(p,(yyvsp[(2) - (7)].token_p));
    insert(p,(yyvsp[(3) - (7)].token_p));
    insert(p,(yyvsp[(4) - (7)].token_p));
    insert(p,(yyvsp[(5) - (7)].token_p));
    insert(p,(yyvsp[(6) - (7)].token_p));
    insert(p,(yyvsp[(7) - (7)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 44:
#line 297 "lexya_a.y"
    {
    p=newNode("selection_statement",(yyvsp[(1) - (5)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (5)].token_p));
    insert(p,(yyvsp[(2) - (5)].token_p));
    insert(p,(yyvsp[(3) - (5)].token_p));
    insert(p,(yyvsp[(4) - (5)].token_p));
    insert(p,(yyvsp[(5) - (5)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 45:
#line 308 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (5)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (5)].token_p));
    insert(p,(yyvsp[(2) - (5)].token_p));
    insert(p,(yyvsp[(3) - (5)].token_p));
    insert(p,(yyvsp[(4) - (5)].token_p));
    insert(p,(yyvsp[(5) - (5)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 46:
#line 316 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (7)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (7)].token_p));
    insert(p,(yyvsp[(2) - (7)].token_p));
    insert(p,(yyvsp[(3) - (7)].token_p));
    insert(p,(yyvsp[(4) - (7)].token_p));
    insert(p,(yyvsp[(5) - (7)].token_p));
    insert(p,(yyvsp[(6) - (7)].token_p));
    insert(p,(yyvsp[(7) - (7)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 47:
#line 326 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (6)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (6)].token_p));
    insert(p,(yyvsp[(2) - (6)].token_p));
    insert(p,(yyvsp[(3) - (6)].token_p));
    insert(p,(yyvsp[(4) - (6)].token_p));
    insert(p,(yyvsp[(5) - (6)].token_p));
    insert(p,(yyvsp[(6) - (6)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 48:
#line 335 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (7)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (7)].token_p));
    insert(p,(yyvsp[(2) - (7)].token_p));
    insert(p,(yyvsp[(3) - (7)].token_p));
    insert(p,(yyvsp[(4) - (7)].token_p));
    insert(p,(yyvsp[(5) - (7)].token_p));
    insert(p,(yyvsp[(6) - (7)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 49:
#line 344 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (8)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (8)].token_p));
    insert(p,(yyvsp[(2) - (8)].token_p));
    insert(p,(yyvsp[(3) - (8)].token_p));
    insert(p,(yyvsp[(4) - (8)].token_p));
    insert(p,(yyvsp[(5) - (8)].token_p));
    insert(p,(yyvsp[(6) - (8)].token_p));
    insert(p,(yyvsp[(7) - (8)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 50:
#line 354 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (8)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (8)].token_p));
    insert(p,(yyvsp[(2) - (8)].token_p));
    insert(p,(yyvsp[(3) - (8)].token_p));
    insert(p,(yyvsp[(4) - (8)].token_p));
    insert(p,(yyvsp[(5) - (8)].token_p));
    insert(p,(yyvsp[(6) - (8)].token_p));
    insert(p,(yyvsp[(7) - (8)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 51:
#line 364 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (9)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (9)].token_p));
    insert(p,(yyvsp[(2) - (9)].token_p));
    insert(p,(yyvsp[(3) - (9)].token_p));
    insert(p,(yyvsp[(4) - (9)].token_p));
    insert(p,(yyvsp[(5) - (9)].token_p));
    insert(p,(yyvsp[(6) - (9)].token_p));
    insert(p,(yyvsp[(7) - (9)].token_p));
    insert(p,(yyvsp[(8) - (9)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 52:
#line 375 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (8)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (8)].token_p));
    insert(p,(yyvsp[(2) - (8)].token_p));
    insert(p,(yyvsp[(3) - (8)].token_p));
    insert(p,(yyvsp[(4) - (8)].token_p));
    insert(p,(yyvsp[(5) - (8)].token_p));
    insert(p,(yyvsp[(6) - (8)].token_p));
    insert(p,(yyvsp[(7) - (8)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 53:
#line 385 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (9)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (9)].token_p));
    insert(p,(yyvsp[(2) - (9)].token_p));
    insert(p,(yyvsp[(3) - (9)].token_p));
    insert(p,(yyvsp[(4) - (9)].token_p));
    insert(p,(yyvsp[(5) - (9)].token_p));
    insert(p,(yyvsp[(6) - (9)].token_p));
    insert(p,(yyvsp[(7) - (9)].token_p));
    insert(p,(yyvsp[(8) - (9)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 54:
#line 396 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (9)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (9)].token_p));
    insert(p,(yyvsp[(2) - (9)].token_p));
    insert(p,(yyvsp[(3) - (9)].token_p));
    insert(p,(yyvsp[(4) - (9)].token_p));
    insert(p,(yyvsp[(5) - (9)].token_p));
    insert(p,(yyvsp[(6) - (9)].token_p));
    insert(p,(yyvsp[(7) - (9)].token_p));
    insert(p,(yyvsp[(8) - (9)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 55:
#line 407 "lexya_a.y"
    {
    p=newNode("iteration_statement",(yyvsp[(1) - (10)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (10)].token_p));
    insert(p,(yyvsp[(2) - (10)].token_p));
    insert(p,(yyvsp[(3) - (10)].token_p));
    insert(p,(yyvsp[(4) - (10)].token_p));
    insert(p,(yyvsp[(5) - (10)].token_p));
    insert(p,(yyvsp[(6) - (10)].token_p));
    insert(p,(yyvsp[(7) - (10)].token_p));
    insert(p,(yyvsp[(8) - (10)].token_p));
    insert(p,(yyvsp[(9) - (10)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 56:
#line 422 "lexya_a.y"
    {
    p=newNode("jump_statement",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 57:
#line 428 "lexya_a.y"
    {
    p=newNode("jump_statement",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 58:
#line 433 "lexya_a.y"
    {
    p=newNode("jump_statement",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 59:
#line 438 "lexya_a.y"
    {
    p=newNode("jump_statement",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 60:
#line 443 "lexya_a.y"
    {
    p=newNode("jump_statement",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 61:
#line 452 "lexya_a.y"
    {
    p=newNode("labeled_statement",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 62:
#line 458 "lexya_a.y"
    {
    p=newNode("labeled_statement",(yyvsp[(1) - (4)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (4)].token_p));
    insert(p,(yyvsp[(2) - (4)].token_p));
    insert(p,(yyvsp[(3) - (4)].token_p));
    insert(p,(yyvsp[(4) - (4)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 63:
#line 465 "lexya_a.y"
    {
    p=newNode("labeled_statement",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 64:
#line 474 "lexya_a.y"
    {
    p=newNode("expression",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 65:
#line 478 "lexya_a.y"
    {
    p=newNode("expression",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 66:
#line 487 "lexya_a.y"
    {
    p=newNode("basic_expression",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 67:
#line 491 "lexya_a.y"
    {
    p=newNode("basic_expression",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 68:
#line 495 "lexya_a.y"
    {
    p=newNode("basic_expression",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 69:
#line 500 "lexya_a.y"
    {
    p=newNode("basic_expression",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 70:
#line 505 "lexya_a.y"
    {
    p=newNode("basic_expression",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 71:
#line 515 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 72:
#line 519 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 73:
#line 523 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 74:
#line 527 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 75:
#line 531 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 76:
#line 535 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 77:
#line 539 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 78:
#line 543 "lexya_a.y"
    {
    p=newNode("value",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 79:
#line 550 "lexya_a.y"
    {
    p=newNode("type",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 80:
#line 554 "lexya_a.y"
    {
    p=newNode("type",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 81:
#line 558 "lexya_a.y"
    {
    p=newNode("type",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 82:
#line 564 "lexya_a.y"
    {
    p=newNode("type",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 83:
#line 569 "lexya_a.y"
    {
    p=newNode("type",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 84:
#line 574 "lexya_a.y"
    {
    p=newNode("type",(yyvsp[(1) - (3)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (3)].token_p));
    insert(p,(yyvsp[(2) - (3)].token_p));
    insert(p,(yyvsp[(3) - (3)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 85:
#line 580 "lexya_a.y"
    {
    p=newNode("type",(yyvsp[(1) - (2)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (2)].token_p));
    insert(p,(yyvsp[(2) - (2)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 86:
#line 588 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 87:
#line 592 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 88:
#line 596 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 89:
#line 600 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 90:
#line 604 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 91:
#line 608 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 92:
#line 612 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 93:
#line 616 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 94:
#line 620 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 95:
#line 624 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 96:
#line 628 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;

  case 97:
#line 632 "lexya_a.y"
    {
    p=newNode("operator",(yyvsp[(1) - (1)].token_p)->No_Line);
    insert(p,(yyvsp[(1) - (1)].token_p));
    (yyval.token_p) =p;;}
    break;


/* Line 1267 of yacc.c.  */
#line 2553 "lexya_a.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 644 "lexya_a.y"

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
