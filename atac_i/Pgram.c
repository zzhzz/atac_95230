/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 15 "Pgram.y" /* yacc.c:339  */

#ifdef MVS
 #pragma csect (CODE, "pgram$")
#include <mvapts.h>
MODULEID(%M%,%J%/%D%/%T%)
#include <string.h>
#endif /* MVS */

static char Pgram_y[] = 
	"$Header: /u/saul/atac/src/atac_i/RCS/Pgram.y,v 3.6 94/06/01 09:02:58 saul Exp $";
/*
*-----------------------------------------------$Log:	Pgram.y,v $
* Revision 3.6  94/06/01  09:02:58  saul
* fix for ANSI f(...) 
* 
* Revision 3.5  94/04/04  10:11:33  jrh
* Add Release Copyright
* 
* Revision 3.4  94/03/21  08:17:21  saul
* MVS support __offsetof as builtin (not handled by cpp)
* 
* Revision 3.3  93/11/19  12:15:20  saul
* MVS support for _Packed
* 
* Revision 3.2  93/08/04  15:43:17  ewk
* Added MVS and solaris support.  Squelched some ANSI warnings.
* 
* Revision 3.1  93/07/12  08:56:07  saul
* MVS MODULEID
* 
* Revision 3.0  92/11/06  07:44:44  saul
* propagate to version 3.0
* 
* Revision 2.10  92/11/04  15:55:49  saul
* removed access to freed memory in STMT_FOR.  Fixed struct {;};
* 
* Revision 2.9  92/11/02  15:45:21  saul
* changed CHAR to CHAR_KW to make room for CHAR() in portable.h
* 
* Revision 2.8  92/10/30  09:47:24  saul
* include portable.h
* 
* Revision 2.7  92/09/16  07:35:06  saul
* New scan interface.  Get rid of unused keywords.
* 
* Revision 2.6  92/04/07  07:36:57  saul
* added unique prefix stuff
* 
* Revision 2.5  92/03/17  14:22:06  saul
* copyright
* 
* Revision 2.4  91/10/23  13:20:25  saul
* Handle "*const volatile".
* 
* Revision 2.3  91/10/23  12:34:13  saul
* Allow empty declaration list as in "int;"
* 
* Revision 2.2  91/06/13  13:12:15  saul
* Changes for ansi.
* 
* Revision 2.1  91/06/13  12:38:51  saul
* Propagate to version 2.0
* 
* Revision 1.3  91/06/12  21:01:23  saul
* remove percent } from log
* 
* Revision 1.2  91/06/12  20:57:02  saul
* Move rcs id inside %{ %\}
* 
* Revision 1.1  91/06/12  20:25:32  saul
* Aug 1990 baseline
* 
*-----------------------------------------------end of log
*/
#include <stdio.h>
#include "portable.h"
#include "srcpos.h"
#include "scan.h"
#include "tnode.h"
#include "tree.h"

/* forward declarations */
int yyparse();
static void insertTypeNames();
int parse();

static TNODE *tree_root;

static SRCPOS nosrcpos[2] = {{-1,0,0}, {-1,0,0}};

#line 157 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENDFILE = 0,
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR_KW = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RETURN = 278,
    SHORT = 279,
    SIGNED = 280,
    SIZEOF = 281,
    STATIC = 282,
    STRUCT = 283,
    SWITCH = 284,
    TYPEDEF = 285,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    TOK_PACKED = 292,
    OFFSET = 293,
    ASM = 294,
    INLINE = 295,
    ATTRIBUTE = 296,
    TOK_LPAREN = 501,
    TOK_RPAREN = 502,
    TOK_LSQUARE = 503,
    TOK_RSQUARE = 504,
    TOK_LCURLY = 505,
    TOK_RCURLY = 506,
    TOK_COMMA = 507,
    TOK_EQUALS = 508,
    TOK_QMARK = 509,
    TOK_COLON = 510,
    TOK_VERTICAL = 511,
    TOK_CARROT = 512,
    TOK_AMPER = 513,
    TOK_GREATER = 514,
    TOK_LESSER = 515,
    TOK_DASH = 516,
    TOK_PLUS = 517,
    TOK_STAR = 518,
    TOK_PERCENT = 519,
    TOK_SLASH = 520,
    TOK_EXCLAIM = 521,
    TOK_TILDE = 522,
    TOK_PERIOD = 523,
    TOK_SEMICOLON = 524,
    ELLIPSIS = 300,
    ANDAND = 303,
    OROR = 304,
    PLUSPLUS = 309,
    MINUSMINUS = 310,
    STREF = 311,
    PLUS_EQ = 312,
    MINUS_EQ = 313,
    MUL_EQ = 314,
    DIV_EQ = 315,
    MOD_EQ = 316,
    LS_EQ = 317,
    RS_EQ = 318,
    AND_EQ = 319,
    OR_EQ = 320,
    ER_EQ = 321,
    EQUAL = 322,
    BANG_EQUAL = 323,
    GT_EQ = 324,
    LT_EQ = 325,
    LSHIFT = 326,
    RSHIFT = 327,
    NAME = 400,
    T_NAME = 401,
    STRING = 402,
    ICON = 403,
    FCON = 404
  };
#endif
/* Tokens.  */
#define ENDFILE 0
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR_KW 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INT 275
#define LONG 276
#define REGISTER 277
#define RETURN 278
#define SHORT 279
#define SIGNED 280
#define SIZEOF 281
#define STATIC 282
#define STRUCT 283
#define SWITCH 284
#define TYPEDEF 285
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define TOK_PACKED 292
#define OFFSET 293
#define ASM 294
#define INLINE 295
#define ATTRIBUTE 296
#define TOK_LPAREN 501
#define TOK_RPAREN 502
#define TOK_LSQUARE 503
#define TOK_RSQUARE 504
#define TOK_LCURLY 505
#define TOK_RCURLY 506
#define TOK_COMMA 507
#define TOK_EQUALS 508
#define TOK_QMARK 509
#define TOK_COLON 510
#define TOK_VERTICAL 511
#define TOK_CARROT 512
#define TOK_AMPER 513
#define TOK_GREATER 514
#define TOK_LESSER 515
#define TOK_DASH 516
#define TOK_PLUS 517
#define TOK_STAR 518
#define TOK_PERCENT 519
#define TOK_SLASH 520
#define TOK_EXCLAIM 521
#define TOK_TILDE 522
#define TOK_PERIOD 523
#define TOK_SEMICOLON 524
#define ELLIPSIS 300
#define ANDAND 303
#define OROR 304
#define PLUSPLUS 309
#define MINUSMINUS 310
#define STREF 311
#define PLUS_EQ 312
#define MINUS_EQ 313
#define MUL_EQ 314
#define DIV_EQ 315
#define MOD_EQ 316
#define LS_EQ 317
#define RS_EQ 318
#define AND_EQ 319
#define OR_EQ 320
#define ER_EQ 321
#define EQUAL 322
#define BANG_EQUAL 323
#define GT_EQ 324
#define LT_EQ 325
#define LSHIFT 326
#define RSHIFT 327
#define NAME 400
#define T_NAME 401
#define STRING 402
#define ICON 403
#define FCON 404

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 106 "Pgram.y" /* yacc.c:355  */

	TOKENVALUE	token;
	TNODE		*tnode;

#line 384 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 401 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  242
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  445

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   525

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    76,    64,     2,
      40,    42,    74,    72,    52,    70,    84,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    86,
      68,    54,    66,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    46,    62,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,    60,    50,    82,     2,     2,     2,
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
      15,    16,    17,    18,     2,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     2,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,     2,     2,     2,
      88,     2,     2,    89,    90,     2,     2,     2,     2,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     110,   111,   112,   113,   114,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,    71,    73,    75,    77,
      79,    81,    83,    85,    87,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   292,   292,   298,   304,   309,   317,   328,   338,   343,
     349,   361,   367,   373,   379,   385,   391,   397,   403,   410,
     417,   423,   429,   436,   443,   448,   452,   458,   468,   480,
     486,   494,   499,   504,   509,   514,   519,   524,   529,   534,
     539,   544,   549,   554,   559,   564,   569,   574,   579,   584,
     589,   594,   599,   606,   610,   614,   621,   626,   638,   642,
     648,   652,   658,   663,   668,   673,   680,   687,   691,   697,
     701,   707,   713,   719,   725,   731,   737,   743,   749,   757,
     763,   769,   775,   782,   786,   796,   806,   811,   828,   832,
     838,   842,   846,   853,   857,   863,   873,   881,   895,   902,
     906,   912,   922,   930,   937,   941,   947,   952,   958,   983,
     989,  1001,  1005,  1011,  1017,  1023,  1029,  1035,  1041,  1047,
    1053,  1056,  1060,  1066,  1071,  1077,  1085,  1091,  1097,  1106,
    1112,  1118,  1124,  1132,  1134,  1139,  1144,  1148,  1154,  1165,
    1170,  1175,  1191,  1205,  1219,  1232,  1246,  1259,  1272,  1277,
    1282,  1287,  1292,  1297,  1302,  1308,  1313,  1318,  1325,  1329,
    1335,  1341,  1346,  1350,  1357,  1364,  1371,  1378,  1385,  1392,
    1399,  1406,  1413,  1420,  1427,  1434,  1439,  1444,  1451,  1457,
    1463,  1469,  1476,  1483,  1490,  1497,  1504,  1511,  1519,  1524,
    1529,  1535,  1540,  1551,  1556,  1560,  1564,  1568,  1584,  1600,
    1607,  1614,  1618,  1625,  1631,  1640,  1656,  1660,  1665,  1670,
    1675,  1680,  1690,  1700,  1710,  1722,  1723,  1727,  1729,  1732,
    1739,  1745,  1750,  1756,  1760,  1766,  1771,  1776,  1782,  1788,
    1794,  1800,  1806,  1812,  1818,  1824,  1830,  1836,  1842,  1848,
    1853,  1858,  1863
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "ENDFILE", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR_KW",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOAT", "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN",
  "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF",
  "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "TOK_PACKED", "OFFSET",
  "ASM", "INLINE", "ATTRIBUTE", "'('", "TOK_LPAREN", "')'", "TOK_RPAREN",
  "'['", "TOK_LSQUARE", "']'", "TOK_RSQUARE", "'{'", "TOK_LCURLY", "'}'",
  "TOK_RCURLY", "','", "TOK_COMMA", "'='", "TOK_EQUALS", "'?'",
  "TOK_QMARK", "':'", "TOK_COLON", "'|'", "TOK_VERTICAL", "'^'",
  "TOK_CARROT", "'&'", "TOK_AMPER", "'>'", "TOK_GREATER", "'<'",
  "TOK_LESSER", "'-'", "TOK_DASH", "'+'", "TOK_PLUS", "'*'", "TOK_STAR",
  "'%'", "TOK_PERCENT", "'/'", "TOK_SLASH", "'!'", "TOK_EXCLAIM", "'~'",
  "TOK_TILDE", "'.'", "TOK_PERIOD", "';'", "TOK_SEMICOLON", "ELLIPSIS",
  "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS", "STREF", "PLUS_EQ",
  "MINUS_EQ", "MUL_EQ", "DIV_EQ", "MOD_EQ", "LS_EQ", "RS_EQ", "AND_EQ",
  "OR_EQ", "ER_EQ", "EQUAL", "BANG_EQUAL", "GT_EQ", "LT_EQ", "LSHIFT",
  "RSHIFT", "NAME", "T_NAME", "STRING", "ICON", "FCON", "$accept",
  "module", "module_item", "function", "func_spec", "complex_term",
  "ansi_params", "ansi_param", "classtypes", "classtype", "param_dcls",
  "param_dcl", "parameter_defs", "stmt_list", "enum_dcl", "enum_ref",
  "moe_list", "moe", "struct_dcl", "struct_ref", "mem_list", "member",
  "mem_dcls", "mem_dcl", "names", "init_dcl", "indata_dcls", "indata_dcl",
  "data_specs", "data_spec", "data_item", "nfunc_spec", "d_i_term",
  "init_list", "init_item", "initializer", "compstmt", "stmt", "exp_list",
  "expr", "term", "strings", "cast_type", "null_dcl", "mname",
  "tname_or_name", "t_name", "name", "star", "qualifiers", "qualifier",
  "asop", "relop", "equop", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   525,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
      40,   501,    41,   502,    91,   503,    93,   504,   123,   505,
     125,   506,    44,   507,    61,   508,    63,   509,    58,   510,
     124,   511,    94,   512,    38,   513,    62,   514,    60,   515,
      45,   516,    43,   517,    42,   518,    37,   519,    47,   520,
      33,   521,   126,   522,    46,   523,    59,   524,   300,   303,
     304,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     400,   401,   402,   403,   404
};
# endif

#define YYPACT_NINF -258

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-258)))

#define YYTABLE_NINF -219

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -258,  1074,  -258,  -258,  -258,  -258,  -258,   -39,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,    14,  -258,    30,  -258,
    -258,  -258,    38,  -258,     9,   149,  -258,  -258,  -258,  -258,
    -258,  2187,   -11,  1902,  -258,  -258,  -258,  -258,  -258,  -258,
     -41,  -258,   -38,   -25,   117,  -258,   126,     9,   -88,   132,
    -258,  -258,  1862,   136,  1862,   137,    84,    94,   167,    43,
    -258,  -258,   149,  -258,   735,   613,  2223,  -258,  -258,  2261,
    1091,  -258,  2187,  -258,   -34,     9,  -258,  2642,  -258,  2655,
    2309,  2081,  -258,   -25,   129,  -258,   202,   -88,  2989,  -258,
    -258,  1971,  1426,  -258,   107,  -258,   152,  1862,  1466,  1862,
    1862,   205,  1862,   206,  -258,  -258,  -258,   138,  2989,   171,
     201,  1314,   220,    51,   221,   277,  3014,   222,   226,   227,
     183,   959,  -258,  2989,  2989,  2989,  2989,  2989,  2568,  2989,
    2989,  -258,  -258,  -258,  2011,  1116,   847,  -258,  -258,  -258,
    3791,   128,   159,   215,   216,   218,  2989,   113,  -258,  -258,
    -258,  -258,  -258,   236,    74,  -258,  2121,  -258,  3541,  -258,
    2223,  -258,  -258,  -258,  2713,  4195,  -258,  3605,  -258,   244,
     145,  -258,   245,   161,   164,  -258,  -258,    -8,  2989,   193,
    4195,   115,  -258,  -258,    18,  -258,  2989,  1535,  -258,  1575,
    1644,  1862,  1684,  1862,  -258,  3849,  -258,  1314,  -258,   255,
    2726,   204,  2989,  -258,  3907,   959,   128,  2989,  2989,    51,
    -258,  2347,   846,   249,   128,   128,   128,   128,   128,  -258,
     128,   128,  -258,   125,  -258,  -258,  -258,  1215,  -258,  2989,
    2989,  2989,  2989,  2989,  2989,  -258,  -258,  2989,  2989,  2989,
    2989,  2989,  -258,  2989,  2989,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  2989,
    2989,  2989,  2989,  2989,  2739,  2989,    51,  -258,  -258,    51,
    -258,  1314,   128,     9,  -258,  -258,  -258,  2436,    19,  -258,
     -10,    19,  -258,  -258,  2713,   199,  -258,  4195,  -258,  -258,
    -258,  2469,  -258,  -258,  2502,  -258,   -88,  -258,  -258,  4195,
    -258,    11,  -258,  -258,  4195,  -258,  -258,  -258,  1753,  -258,
    1793,  1314,  -258,   252,  2797,  3965,  -258,   958,  -258,   251,
    3069,  3137,   242,    35,   -10,    35,  -258,  2989,  -258,  -258,
    4195,  4195,  4023,  3076,  1307,   607,   156,   156,  -258,  -258,
    -258,   377,  4256,   170,   170,  4195,   155,   937,  -258,   165,
    4195,  3669,  -258,  -258,  -258,  -258,   257,  -258,   195,  2403,
    2810,   -10,   200,  -258,  2571,   262,   263,  -258,  -258,  -258,
    -258,  -258,  2989,  2823,  4081,  2881,  1314,  1277,  1314,  1314,
     -88,   128,  2989,  -258,  2989,  -258,  -258,  -258,  -258,   264,
     176,  -258,  3733,  -258,  2584,  -258,  -258,  -258,  -258,  3205,
    1314,  3273,  2906,  2935,  4139,   285,  -258,  -258,   -14,  -258,
    4249,  4195,  -258,  -258,  2535,  -258,  -258,   225,  -258,  1314,
    1314,  3341,  1314,  3409,  2960,  1314,  -258,   -88,   266,  -258,
    -258,  -258,  1314,  -258,  1314,  1314,  3477,  -258,  -258,  -258,
    -258,  -258,  -258,  1314,  -258
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    24,     1,    42,    32,    40,    34,     0,    46,    33,
      31,    35,    43,    36,    38,    44,     0,    47,     0,    37,
      39,    41,     0,    45,    24,   221,    98,   220,   219,     2,
       4,   108,    11,    24,    29,    50,    52,    49,    51,     5,
       0,   104,   107,   109,   111,    48,   112,    24,     0,    66,
     218,   217,    24,    79,    24,    80,     0,     0,     0,     0,
     225,   226,   222,   223,     0,    24,     0,    53,     9,     0,
       0,    96,   108,    30,     0,    24,    97,     0,   106,     0,
       0,     0,    10,   110,     0,    67,    69,     0,     0,    86,
     108,    24,    24,    83,     0,    88,    90,    24,    24,    24,
      24,    81,    24,    82,    15,   116,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,     0,     0,     0,   135,     0,
       0,   204,   199,   200,    24,     0,     0,   100,   136,    61,
       0,   178,   201,     0,    48,   196,     0,     0,    58,    55,
      54,     8,    12,     0,     0,    25,    24,    14,     0,   196,
       0,     7,    95,   105,     0,   126,   115,     0,   113,     0,
       0,    17,     0,     0,     0,    93,    62,     0,     0,     0,
      92,     0,    73,    84,    24,    87,     0,    24,    74,    24,
      24,    24,    24,    24,   152,     0,   153,     0,   135,     0,
       0,     0,     0,   155,     0,     0,   188,     0,     0,     0,
     133,   206,     0,     0,   183,   186,   187,   185,   184,   103,
     181,   182,   102,     0,   130,    60,   131,     0,    99,     0,
       0,     0,     0,     0,     0,   239,   240,     0,     0,     0,
       0,     0,   134,     0,     0,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   241,   242,   237,   238,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   180,     0,
     203,     0,   192,    24,    57,    23,    20,     0,    24,    27,
      28,    24,    13,     6,     0,     0,   121,   123,   114,   119,
     117,     0,    22,    18,     0,    16,     0,    64,    68,    70,
      63,     0,    85,    89,    91,    71,    72,    77,    24,    78,
      24,     0,   151,     0,     0,     0,   156,     0,   154,     0,
       0,     0,     0,   206,   205,   206,   202,     0,   101,   129,
     162,   177,     0,   170,   171,   172,   164,   163,   165,   167,
     166,   173,   174,   168,   169,   176,   160,   161,   198,     0,
     158,     0,   195,   194,   157,    59,     0,    26,     0,     0,
       0,   211,     0,   127,     0,     0,     0,    94,    65,    75,
      76,   150,     0,     0,     0,     0,     0,   190,     0,     0,
       0,   189,     0,   197,     0,   193,    21,   214,   207,     0,
       0,   212,     0,   124,     0,   128,   122,   118,    19,     0,
       0,     0,     0,     0,     0,   138,   149,   139,     0,   215,
     175,   159,   210,   208,     0,   213,   125,     0,   148,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,   140,
     147,   146,     0,   144,     0,     0,     0,   137,   216,   209,
     145,   143,   142,     0,   141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,  -258,  -258,     7,  -258,   -76,  -250,    42,     4,
     240,   -56,  -258,   179,  -258,  -258,   229,  -170,  -258,  -258,
     -18,   -72,   230,   134,  -258,  -258,  -258,  -115,   -21,   254,
       2,   -23,  -258,    36,  -257,  -258,    -6,   -97,  -258,   294,
      23,  -258,   119,  -154,  -258,    32,    87,    -1,   515,  -258,
     265,  -258,  -258,  -258
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    29,    30,    90,    32,   154,   155,    91,    34,
      66,    67,   147,   135,    35,    36,    84,    85,    37,    38,
      92,    93,    94,    95,   174,    39,   136,   137,    40,    41,
      96,    43,    44,   285,   286,    78,   138,   139,   349,   140,
     141,   142,   213,   358,   408,   143,    45,   159,   146,    62,
      63,   261,   262,   263
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    59,   280,    42,   170,   173,    51,   298,    31,    48,
     150,    75,    74,   219,   199,    51,    77,    51,    75,    79,
     183,   228,    27,    46,    83,    68,   183,   357,   426,    69,
     359,    58,    46,    70,   360,    42,    98,    73,   225,    49,
      72,   357,   297,    33,   357,    76,    46,    86,    53,    24,
      55,    46,   162,    46,    82,    51,    51,   324,    24,   278,
     151,   368,    52,   145,    46,    56,   161,   148,    57,    73,
     427,    27,    28,    65,    46,   323,    88,    42,    54,   187,
     175,   189,   190,    25,   192,   105,    86,    79,   101,   103,
      46,    46,    25,    25,    50,    73,    46,    46,    46,    46,
     312,    46,    27,    50,   150,    50,   134,   396,    65,    25,
     145,   156,    51,   223,    65,   183,   276,   183,   183,    27,
     183,    27,   156,   156,    27,    28,   277,   361,    27,    27,
     225,   298,   100,    46,   145,   145,    42,   396,    73,   206,
      27,    28,   102,    50,    50,   201,   214,   215,   216,   217,
     218,   144,   220,   221,   283,    46,    60,    80,   279,   184,
      73,    27,    28,   211,   357,   273,    81,   184,   264,   272,
     134,   361,   265,   308,   354,   310,    86,    75,   134,   176,
      87,   177,    61,    46,    97,    99,    46,   290,    46,    46,
      46,    46,    46,   185,    27,    28,   145,   291,    50,   274,
      50,   302,    65,   293,    27,    28,   295,   383,    51,   104,
     186,   328,   266,   294,   371,    73,   296,   384,   413,   267,
     268,   269,    50,   144,   194,   237,   145,   238,   414,   239,
     239,   240,   240,   241,   241,   359,   183,   387,   183,   360,
     237,   322,   238,   300,   239,   301,   240,   211,   241,   363,
     393,   364,   394,   191,   193,    59,   178,   196,    83,   197,
     200,   202,   207,   259,   260,    51,   208,   209,    51,   210,
     145,   270,    46,   271,  -218,   355,  -217,    46,   275,   405,
      46,   406,   407,   390,    50,    58,   289,   292,    82,   313,
     316,   327,   372,   377,   380,   367,    50,   425,   352,   386,
      86,   353,   116,   418,   397,   398,   412,    46,   439,    46,
     145,   429,   160,   119,    50,   227,   179,   121,   303,   156,
     362,   181,   430,   431,   319,   433,     0,   106,   437,   163,
       0,     0,     0,   156,     0,   440,   156,   441,   442,     0,
       0,   123,     0,     0,     0,     0,   444,   124,     0,   125,
     381,    25,     0,    50,     0,     0,    50,   126,    50,   127,
       0,     0,     0,   203,   158,     0,     0,     0,   129,   130,
       0,   165,     0,   167,     0,   145,     0,   145,   145,   409,
       0,     0,   180,     0,     0,     0,     0,    27,     0,   131,
     132,   133,     0,     0,     0,     0,     0,     0,    50,   145,
     381,   156,   195,     0,     0,     0,     0,     0,     0,   204,
       0,     0,     0,     0,     0,   212,     0,     0,   145,   145,
       0,   145,     0,     0,   145,     0,   438,     0,     0,     0,
       0,   145,     0,   145,   145,     0,     0,   232,     0,   233,
       0,   234,   145,   235,     0,   236,     0,   237,     0,   238,
       0,   239,     0,   240,     0,   241,   156,     0,   287,     0,
       0,     0,     0,    50,     0,    50,    50,     0,     0,     0,
       0,     0,   299,     0,     0,     0,     0,     0,     0,     0,
     304,   255,   256,   257,   258,   259,   260,    50,     0,     0,
       0,     0,     0,     0,   315,     0,   317,     0,     0,   212,
       0,   320,   321,     0,     0,     0,    50,    50,     0,    50,
       0,     0,    50,     0,     0,     0,    47,     0,     0,    50,
       0,    50,    50,   330,   331,   332,   333,   334,   335,     0,
      50,   336,   337,   338,   339,   340,     0,   341,   342,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,   343,   344,   345,   346,   347,   350,   351,
       0,     0,    47,     0,     0,     0,     0,    47,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,   287,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    47,   374,     0,
       0,     0,    47,    47,    47,    47,     3,    47,     0,     4,
       5,     0,     0,     0,     6,     0,     7,     8,     9,     0,
       0,     0,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,    47,
       0,    23,     0,    24,   392,     0,     0,     0,   287,     0,
       0,     0,     0,     0,     0,     0,   399,   401,     0,   404,
       0,   281,     0,   235,     0,   236,   410,   237,   411,   238,
       0,   239,     0,   240,     0,   241,     0,    25,   287,     0,
       0,     0,     0,     0,     0,     0,   421,   423,     0,    47,
       0,     0,    47,     0,    47,    47,    47,    47,    47,     0,
       0,   255,   256,   257,   258,   259,   260,     0,   436,     0,
       0,     0,     0,    27,    28,     0,   325,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,   107,
     108,     4,     5,   109,   110,   111,     6,     0,     7,     8,
       9,   112,   113,   114,    10,    11,    12,   115,    13,    14,
     116,    15,    16,   117,    17,    18,    19,    20,    21,   118,
      22,   119,   120,    23,     0,   121,     0,     0,     0,     0,
       0,     0,     0,    64,     0,   122,     0,     0,    47,     0,
       0,     0,     0,   281,     0,     0,   281,     0,     0,   123,
       0,     0,     0,     0,     0,   124,     0,   125,     0,    25,
       0,     0,     0,     0,     0,   126,     0,   127,     0,     0,
       0,   128,     0,    47,     0,    47,   129,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   325,     0,
     325,     0,     0,     0,     0,    27,    28,   131,   132,   133,
       3,   107,   108,     4,     5,   109,   110,   111,     6,     0,
       7,     8,     9,   112,   113,   114,    10,    11,    12,   115,
      13,    14,   116,    15,    16,   117,    17,    18,    19,    20,
      21,   118,    22,   119,   120,    23,     0,   121,   326,     0,
       0,     0,     0,     0,     0,    64,     0,   226,   229,     0,
     230,     0,   231,     0,     0,     0,   232,     0,   233,     0,
     234,   123,   235,     0,   236,     0,   237,   124,   238,   125,
     239,    25,   240,     0,   241,     0,     0,   126,     0,   127,
       0,     0,     0,   128,     0,   243,   244,     0,   129,   130,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,     0,    27,    28,   131,
     132,   133,     3,     0,     0,     4,     5,     0,     0,     0,
       6,     0,     7,     8,     9,     0,     0,     0,    10,    11,
      12,     0,    13,    14,   116,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,   119,     0,    23,     0,   121,
     376,     0,     0,   235,     0,   236,     0,   237,     0,   238,
     229,   239,   230,   240,   231,   241,     0,     0,   232,     0,
     233,     0,   234,   123,   235,     0,   236,     0,   237,   124,
     238,   125,   239,    25,   240,     0,   241,     0,     0,   126,
       0,   127,     0,   257,   258,   259,   260,   243,   244,     0,
     129,   130,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,    27,
      28,   131,   132,   133,     2,     0,     0,     3,     0,     0,
       4,     5,     0,     0,     0,     6,     0,     7,     8,     9,
       0,     0,     0,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     0,    22,
       0,     0,    23,     0,    24,     0,   116,     0,     0,     0,
     107,   108,     0,     0,   109,   110,   111,   119,     0,     0,
       0,   121,   112,   113,   114,     0,     0,   157,   115,     0,
       0,   116,     0,     0,   117,     0,     0,     0,    25,     0,
     118,     0,   119,   120,     0,   123,   121,     0,     0,     0,
      26,   124,     0,   125,    64,    25,   224,     0,     0,     0,
       0,   126,     0,   127,     0,     0,     0,     0,     0,     0,
     123,     0,   129,   130,    27,    28,   124,     0,   125,     0,
      25,     0,     0,     0,     0,     0,   126,     0,   127,     0,
       0,    27,   198,   131,   132,   133,     0,   129,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,     0,     0,   109,   110,   111,    27,    28,   131,   132,
     133,   112,   113,   114,     0,     0,     0,   115,     0,     0,
     116,     0,     0,   117,     0,     0,     0,     0,     0,   118,
       0,   119,   120,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,    64,     0,   329,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,   124,     0,   125,     0,    25,
       0,     0,     0,     0,     0,   126,     0,   127,     0,     0,
       0,   198,   116,     0,     0,     0,   129,   130,     0,     0,
       0,     0,     0,   119,     0,     0,     0,   121,   107,   108,
       0,     0,   109,   110,   111,    27,    28,   131,   132,   133,
     112,   113,   114,     0,     0,     0,   115,     0,     0,   116,
       0,     0,   117,     0,     0,     0,     0,     0,   118,     0,
     119,   120,     0,     0,   121,     0,     0,   126,     0,   127,
       0,     0,    64,     0,     0,     0,     0,     0,   129,   130,
       0,   234,     0,   235,     0,   236,     0,   237,   123,   238,
       0,   239,     0,   240,   124,   241,   125,    27,    25,   131,
     132,   133,     0,     0,   126,     0,   127,     0,     0,     0,
     198,     0,     0,     0,     0,   129,   130,     0,     0,     0,
       0,   255,   256,   257,   258,   259,   260,     0,     0,     0,
       0,     0,     0,     0,    27,    28,   131,   132,   133,     3,
       0,     0,     4,     5,     0,     0,     0,     6,     0,     7,
       8,     9,     0,     0,     0,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,     0,     0,    23,     0,    24,     0,     0,     3,
       0,     0,     4,     5,     0,     0,   182,     6,     0,     7,
       8,     9,     0,     0,    88,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
      25,    22,     0,     0,    23,     0,    24,     0,     0,     0,
       0,     0,    89,     0,     0,     0,   188,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    28,     3,     0,
      25,     4,     5,     0,     0,     0,     6,     0,     7,     8,
       9,     0,    89,     0,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     0,
      22,     0,     0,    23,     0,    24,    27,    28,     3,     0,
       0,     4,     5,     0,     0,   305,     6,     0,     7,     8,
       9,     0,     0,    88,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,    25,
      22,     0,     0,    23,     0,    24,     0,     0,     0,     0,
       0,    89,     0,     0,     0,   306,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    28,     3,     0,    25,
       4,     5,     0,     0,     0,     6,     0,     7,     8,     9,
       0,    89,     0,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     0,    22,
       0,     0,    23,     0,    24,    27,    28,     3,     0,     0,
       4,     5,     0,     0,   307,     6,     0,     7,     8,     9,
       0,     0,    88,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,    25,    22,
       0,     0,    23,     0,    24,     0,     0,     0,     0,     0,
      89,     0,     0,     0,   309,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,     3,     0,    25,     4,
       5,     0,     0,     0,     6,     0,     7,     8,     9,     0,
      89,     0,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,     0,
       0,    23,     0,    24,    27,    28,     3,     0,     0,     4,
       5,     0,     0,   369,     6,     0,     7,     8,     9,     0,
       0,    88,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,    25,    22,     0,
       0,    23,     0,    24,     0,     0,     0,     0,     0,    89,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,     3,     0,    25,     4,     5,
       0,     0,     0,     6,     0,     7,     8,     9,     0,    89,
       0,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,     0,     0,
      23,     0,    24,    27,    28,     3,     0,     0,     4,     5,
       0,     0,     0,     6,     0,     7,     8,     9,     0,     0,
      88,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,    25,    22,     0,     0,
      23,     0,    24,     0,     0,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,     3,     0,    25,     4,     5,     0,
       0,     0,     6,     0,     7,     8,     9,     0,    71,     0,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,     0,     0,    23,
       0,    24,    27,    28,     3,     0,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     8,     9,     0,     0,    88,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,    25,    22,     0,     0,    23,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,    28,     0,     3,    25,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     8,     9,   222,     0,     0,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,     0,     0,    23,
       0,    27,    28,   171,     3,     0,     0,     4,     5,     0,
       0,     0,     6,     0,     7,     8,     9,     0,     0,     0,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,     0,     0,    23,
       0,   278,     0,     0,     0,     0,     0,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    27,    28,     4,     5,    25,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,     0,     0,    23,     3,     0,     0,     4,
       5,    27,    28,     0,     6,    64,     7,     8,     9,     0,
       0,     0,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,     0,
       0,    23,     0,     0,     3,     0,     0,     4,     5,     0,
       0,    64,     6,   -56,     7,     8,     9,     0,     0,     0,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,     0,    28,    23,
       0,     0,     0,   152,     0,     0,     0,     0,     0,   149,
       0,     0,     3,     0,     0,     4,     5,     0,     0,     0,
       6,     0,     7,     8,     9,     0,     0,     0,    10,    11,
      12,     0,    13,    14,    28,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,     0,     0,    23,     0,   153,
       3,   168,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,     0,
      13,    14,    28,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,     0,     0,    23,     0,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     4,
       5,     0,     0,     0,     6,     0,     7,     8,     9,     0,
      28,    25,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,     3,
       0,    23,     4,     5,     0,   388,     0,     6,     0,     7,
       8,     9,     0,     0,     0,    10,    11,    12,    28,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,     3,     0,    23,     4,     5,     0,     0,     0,
       6,     0,     7,     8,     9,     0,     0,     0,    10,    11,
      12,   389,    13,    14,     0,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,     3,     0,    23,     4,     5,
       0,     0,     0,     6,    28,     7,     8,     9,     0,     0,
       0,    10,    11,    12,   356,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,     3,     0,
      23,     4,     5,     0,     0,     0,     6,    28,     7,     8,
       9,     0,     0,     0,    10,    11,    12,   365,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     0,
      22,     3,     0,    23,     4,     5,     0,     0,     0,     6,
      28,     7,     8,     9,     0,     0,     0,    10,    11,    12,
     366,    13,    14,     0,    15,    16,   116,    17,    18,    19,
      20,    21,     0,    22,     0,     0,    23,   119,     0,   116,
       0,   121,     0,    28,     0,     0,     0,     0,     0,   284,
     119,   395,     0,   428,   121,     0,     0,     0,     0,     0,
       0,     0,   284,     0,   416,   123,     0,     0,     0,     0,
       0,   124,     0,   125,     0,    25,    28,     0,   123,     0,
       0,   126,     0,   127,   124,     0,   125,     0,    25,     0,
       0,     0,   129,   130,   126,     0,   127,   116,     0,     0,
       0,     0,     0,     0,     0,   129,   130,     0,   119,    28,
     116,    27,   121,   131,   132,   133,     0,     0,     0,     0,
     164,   119,     0,     0,    27,   121,   131,   132,   133,     0,
       0,   166,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,   124,     0,   125,     0,    25,     0,     0,   123,
       0,     0,   126,     0,   127,   124,     0,   125,     0,    25,
       0,     0,     0,   129,   130,   126,     0,   127,   116,     0,
       0,     0,     0,     0,     0,     0,   129,   130,     0,   119,
       0,   116,    27,   121,   131,   132,   133,     0,     0,     0,
       0,   284,   119,     0,   116,    27,   121,   131,   132,   133,
       0,     0,     0,     0,     0,   119,     0,   123,     0,   121,
       0,   348,     0,   124,     0,   125,     0,    25,     0,     0,
     123,     0,     0,   126,     0,   127,   124,     0,   125,     0,
      25,     0,     0,   123,   129,   130,   126,     0,   127,   124,
       0,   125,   314,    25,     0,     0,     0,   129,   130,   126,
       0,   127,   116,    27,     0,   131,   132,   133,     0,     0,
     129,   130,     0,   119,     0,   116,    27,   121,   131,   132,
     133,     0,     0,     0,     0,     0,   119,     0,   116,    27,
     121,   131,   132,   133,     0,     0,   391,     0,     0,   119,
       0,   123,     0,   121,     0,   400,     0,   124,     0,   125,
       0,    25,     0,     0,   123,     0,     0,   126,     0,   127,
     124,     0,   125,   373,    25,     0,     0,   123,   129,   130,
     126,     0,   127,   124,     0,   125,     0,    25,     0,     0,
       0,   129,   130,   126,     0,   127,   116,    27,     0,   131,
     132,   133,     0,     0,   129,   130,     0,   119,     0,     0,
      27,   121,   131,   132,   133,     0,     0,     0,     0,     0,
       0,   116,     0,    27,     0,   131,   132,   133,     0,     0,
       0,     0,   119,     0,     0,   123,   121,     0,   420,     0,
       0,   124,     0,   125,     0,    25,     0,     0,     0,     0,
     116,   126,     0,   127,     0,     0,     0,   403,     0,     0,
     123,   119,   129,   130,     0,   121,   124,   422,   125,     0,
      25,     0,     0,     0,     0,   116,   126,     0,   127,     0,
       0,    27,     0,   131,   132,   133,   119,   129,   130,   123,
     121,     0,   435,     0,     0,   124,     0,   125,     0,    25,
       0,     0,     0,     0,   116,   126,    27,   127,   131,   132,
     133,     0,     0,     0,   123,   119,   129,   130,     0,   121,
     124,     0,   125,     0,    25,     0,     0,     0,     0,   116,
     126,     0,   127,     0,     0,    27,     0,   131,   132,   133,
     119,   129,   130,   123,   205,     0,     0,     0,     0,   124,
       0,   125,     0,    25,     0,     0,     0,     0,     0,   126,
      27,   127,   131,   132,   133,     0,     0,     0,   123,     0,
     129,   130,     0,     0,   124,     0,   125,     0,    25,     0,
       0,     0,     0,     0,   126,     0,   127,     0,     0,    27,
       0,   131,   132,   133,     0,   129,   130,     0,     0,     0,
       0,   378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,   230,    27,   231,   131,   132,   133,   232,
       0,   233,     0,   234,     0,   235,     0,   236,   233,   237,
     234,   238,   235,   239,   236,   240,   237,   241,   238,     0,
     239,     0,   240,     0,   241,     0,     0,     0,   243,   244,
       0,     0,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   379,
     255,   256,   257,   258,   259,   260,     0,     0,     0,   229,
       0,   230,     0,   231,     0,     0,     0,   232,     0,   233,
       0,   234,     0,   235,     0,   236,     0,   237,     0,   238,
       0,   239,     0,   240,     0,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   244,     0,     0,
       0,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   417,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   229,     0,   230,
       0,   231,     0,     0,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,   244,     0,     0,     0,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   419,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   229,     0,   230,     0,   231,
       0,     0,     0,   232,     0,   233,     0,   234,     0,   235,
       0,   236,     0,   237,     0,   238,     0,   239,     0,   240,
       0,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,     0,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   432,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,   230,     0,   231,     0,     0,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     243,   244,     0,     0,     0,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   434,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,   230,     0,   231,     0,     0,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,   244,
       0,     0,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   229,
       0,   230,     0,   231,     0,     0,     0,   232,     0,   233,
       0,   234,     0,   235,     0,   236,     0,   237,     0,   238,
       0,   239,     0,   240,     0,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   244,     0,     0,
       0,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   282,     0,     0,
       0,     0,     0,   229,     0,   230,     0,   231,     0,     0,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     243,   244,     0,     0,     0,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   288,     0,     0,     0,     0,     0,   229,     0,   230,
       0,   231,     0,     0,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,   244,     0,     0,     0,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   385,     0,     0,     0,     0,
       0,   229,     0,   230,     0,   231,     0,     0,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,   244,
       0,     0,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   415,
       0,     0,     0,     0,     0,   229,     0,   230,     0,   231,
       0,     0,     0,   232,     0,   233,     0,   234,     0,   235,
       0,   236,     0,   237,     0,   238,     0,   239,     0,   240,
       0,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,     0,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   229,     0,   230,     0,   231,     0,     0,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,     0,     0,
     243,   244,     0,     0,     0,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   229,     0,   230,     0,   231,     0,   311,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,   244,
       0,     0,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   229,
       0,   230,     0,   231,     0,     0,     0,   232,     0,   233,
       0,   234,     0,   235,     0,   236,     0,   237,     0,   238,
       0,   239,     0,   240,     0,   241,     0,     0,     0,     0,
       0,     0,     0,   318,     0,     0,   243,   244,     0,     0,
       0,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   229,     0,   230,
       0,   231,     0,     0,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   375,     0,     0,   243,   244,     0,     0,     0,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   229,     0,   230,     0,   231,
       0,   382,     0,   232,     0,   233,     0,   234,     0,   235,
       0,   236,     0,   237,     0,   238,     0,   239,     0,   240,
       0,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,     0,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   229,     0,   230,     0,   231,     0,     0,
       0,   232,     0,   233,     0,   234,     0,   235,     0,   236,
       0,   237,     0,   238,     0,   239,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   402,     0,     0,
     243,   244,     0,     0,     0,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   229,     0,   230,     0,   231,     0,     0,     0,   232,
       0,   233,     0,   234,     0,   235,     0,   236,     0,   237,
       0,   238,     0,   239,     0,   240,     0,   241,     0,     0,
       0,     0,     0,     0,     0,   424,     0,     0,   243,   244,
       0,     0,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   230,
       0,   231,     0,     0,     0,   232,     0,   233,     0,   234,
       0,   235,     0,   236,     0,   237,     0,   238,     0,   239,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,   244,     0,     0,     0,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   231,     0,     0,     0,   232,
       0,   233,     0,   234,     0,   235,   232,   236,   233,   237,
     234,   238,   235,   239,   236,   240,   237,   241,   238,     0,
     239,     0,   240,     0,   241,     0,     0,     0,   243,   244,
       0,     0,     0,     0,     0,   243,     0,     0,     0,     0,
       0,     0,     0,   255,   256,   257,   258,   259,   260,     0,
     255,   256,   257,   258,   259,   260
};

static const yytype_int16 yycheck[] =
{
       1,    24,   156,     1,    80,    81,     7,   177,     1,    48,
      66,    52,    33,   128,   111,    16,    54,    18,    52,    44,
      92,   136,   110,    24,    47,    31,    98,   277,    42,    40,
      40,    24,    33,    44,    44,    33,    54,    33,   135,     7,
      33,   291,    50,     1,   294,    86,    47,    48,    16,    40,
      18,    52,    86,    54,    47,    56,    57,   211,    40,    40,
      66,    50,    48,    64,    65,    27,    72,    65,    30,    65,
      84,   110,   111,    31,    75,    40,    58,    75,    48,    97,
      81,    99,   100,    74,   102,    42,    87,    44,    56,    57,
      91,    92,    74,    74,     7,    91,    97,    98,    99,   100,
     197,   102,   110,    16,   160,    18,    64,   364,    66,    74,
     111,    69,   113,   134,    72,   187,    42,   189,   190,   110,
     192,   110,    80,    81,   110,   111,    52,   281,   110,   110,
     227,   301,    48,   134,   135,   136,   134,   394,   134,   116,
     110,   111,    48,    56,    57,   113,   123,   124,   125,   126,
     127,    64,   129,   130,   160,   156,     7,    40,   156,    52,
     156,   110,   111,   121,   414,    52,    40,    52,    40,   146,
     128,   325,    44,   191,   271,   193,   177,    52,   136,    50,
      48,    52,    33,   184,    48,    48,   187,    42,   189,   190,
     191,   192,   193,    86,   110,   111,   197,    52,   111,    86,
     113,    86,   160,    42,   110,   111,    42,    42,   209,    42,
      58,    86,    84,    52,   311,   211,    52,    52,    42,    91,
      92,    93,   135,   136,    86,    70,   227,    72,    52,    74,
      74,    76,    76,    78,    78,    40,   308,    42,   310,    44,
      70,   209,    72,    50,    74,    52,    76,   205,    78,    50,
      50,    52,    52,    48,    48,   278,    54,    86,   281,    58,
      40,    40,    40,   108,   109,   266,    40,    40,   269,    86,
     271,   112,   273,    58,    58,   273,    58,   278,    42,   376,
     281,   378,   379,   359,   197,   278,    42,    42,   281,    34,
      86,    42,    40,    42,    52,   296,   209,    12,   266,    42,
     301,   269,    25,   400,    42,    42,    42,   308,    42,   310,
     311,    86,    72,    36,   227,   136,    87,    40,   184,   277,
     284,    91,   419,   420,   205,   422,    -1,    62,   425,    75,
      -1,    -1,    -1,   291,    -1,   432,   294,   434,   435,    -1,
      -1,    64,    -1,    -1,    -1,    -1,   443,    70,    -1,    72,
     327,    74,    -1,   266,    -1,    -1,   269,    80,   271,    82,
      -1,    -1,    -1,    86,    70,    -1,    -1,    -1,    91,    92,
      -1,    77,    -1,    79,    -1,   376,    -1,   378,   379,   380,
      -1,    -1,    88,    -1,    -1,    -1,    -1,   110,    -1,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,   311,   400,
     377,   359,   108,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,   419,   420,
      -1,   422,    -1,    -1,   425,    -1,   427,    -1,    -1,    -1,
      -1,   432,    -1,   434,   435,    -1,    -1,    60,    -1,    62,
      -1,    64,   443,    66,    -1,    68,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    -1,    78,   414,    -1,   164,    -1,
      -1,    -1,    -1,   376,    -1,   378,   379,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,   104,   105,   106,   107,   108,   109,   400,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,   202,    -1,    -1,   205,
      -1,   207,   208,    -1,    -1,    -1,   419,   420,    -1,   422,
      -1,    -1,   425,    -1,    -1,    -1,     1,    -1,    -1,   432,
      -1,   434,   435,   229,   230,   231,   232,   233,   234,    -1,
     443,   237,   238,   239,   240,   241,    -1,   243,   244,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,   259,   260,   261,   262,   263,   264,   265,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,   314,    -1,
      -1,    -1,    97,    98,    99,   100,     3,   102,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,   134,
      -1,    38,    -1,    40,   360,    -1,    -1,    -1,   364,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   372,   373,    -1,   375,
      -1,   156,    -1,    66,    -1,    68,   382,    70,   384,    72,
      -1,    74,    -1,    76,    -1,    78,    -1,    74,   394,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   402,   403,    -1,   184,
      -1,    -1,   187,    -1,   189,   190,   191,   192,   193,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   424,    -1,
      -1,    -1,    -1,   110,   111,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,   273,    -1,
      -1,    -1,    -1,   278,    -1,    -1,   281,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
      -1,    86,    -1,   308,    -1,   310,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
     325,    -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    52,    -1,
      54,    -1,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,
      64,    64,    66,    -1,    68,    -1,    70,    70,    72,    72,
      74,    74,    76,    -1,    78,    -1,    -1,    80,    -1,    82,
      -1,    -1,    -1,    86,    -1,    89,    90,    -1,    91,    92,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   110,   111,   112,
     113,   114,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    35,    36,    -1,    38,    -1,    40,
      42,    -1,    -1,    66,    -1,    68,    -1,    70,    -1,    72,
      52,    74,    54,    76,    56,    78,    -1,    -1,    60,    -1,
      62,    -1,    64,    64,    66,    -1,    68,    -1,    70,    70,
      72,    72,    74,    74,    76,    -1,    78,    -1,    -1,    80,
      -1,    82,    -1,   106,   107,   108,   109,    89,    90,    -1,
      91,    92,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   110,
     111,   112,   113,   114,     0,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    38,    -1,    40,    -1,    25,    -1,    -1,    -1,
       4,     5,    -1,    -1,     8,     9,    10,    36,    -1,    -1,
      -1,    40,    16,    17,    18,    -1,    -1,    46,    22,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    74,    -1,
      34,    -1,    36,    37,    -1,    64,    40,    -1,    -1,    -1,
      86,    70,    -1,    72,    48,    74,    50,    -1,    -1,    -1,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    91,    92,   110,   111,    70,    -1,    72,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,
      -1,   110,    86,   112,   113,   114,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,    -1,     8,     9,    10,   110,   111,   112,   113,
     114,    16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,
      -1,    86,    25,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    40,     4,     5,
      -1,    -1,     8,     9,    10,   110,   111,   112,   113,   114,
      16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    37,    -1,    -1,    40,    -1,    -1,    80,    -1,    82,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    91,    92,
      -1,    64,    -1,    66,    -1,    68,    -1,    70,    64,    72,
      -1,    74,    -1,    76,    70,    78,    72,   110,    74,   112,
     113,   114,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,   112,   113,   114,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      -1,    35,    -1,    -1,    38,    -1,    40,    -1,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    50,    11,    -1,    13,
      14,    15,    -1,    -1,    58,    19,    20,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      74,    35,    -1,    -1,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,   111,     3,    -1,
      74,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    86,    -1,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    38,    -1,    40,   110,   111,     3,    -1,
      -1,     6,     7,    -1,    -1,    50,    11,    -1,    13,    14,
      15,    -1,    -1,    58,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,    74,
      35,    -1,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,     3,    -1,    74,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    86,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    38,    -1,    40,   110,   111,     3,    -1,    -1,
       6,     7,    -1,    -1,    50,    11,    -1,    13,    14,    15,
      -1,    -1,    58,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    74,    35,
      -1,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,     3,    -1,    74,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      86,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    38,    -1,    40,   110,   111,     3,    -1,    -1,     6,
       7,    -1,    -1,    50,    11,    -1,    13,    14,    15,    -1,
      -1,    58,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    74,    35,    -1,
      -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   111,     3,    -1,    74,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    86,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      38,    -1,    40,   110,   111,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      58,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    74,    35,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,     3,    -1,    74,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    86,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,    35,    -1,    -1,    38,
      -1,    40,   110,   111,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    58,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    74,    35,    -1,    -1,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,   111,    -1,     3,    74,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    86,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,    35,    -1,    -1,    38,
      -1,   110,   111,    42,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,   110,   111,     6,     7,    74,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    35,    -1,    -1,    38,     3,    -1,    -1,     6,
       7,   110,   111,    -1,    11,    48,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    38,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    48,    11,    86,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,    35,    -1,   111,    38,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,   111,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    35,    -1,    -1,    38,    -1,    88,
       3,    42,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,   111,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
     111,    74,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,     3,
      -1,    38,     6,     7,    -1,    42,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,   111,    23,
      24,    -1,    26,    27,    -1,    29,    30,    31,    32,    33,
      -1,    35,     3,    -1,    38,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    88,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    35,     3,    -1,    38,     6,     7,
      -1,    -1,    -1,    11,   111,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    88,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    35,     3,    -1,
      38,     6,     7,    -1,    -1,    -1,    11,   111,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    88,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,    -1,
      35,     3,    -1,    38,     6,     7,    -1,    -1,    -1,    11,
     111,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      88,    23,    24,    -1,    26,    27,    25,    29,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    38,    36,    -1,    25,
      -1,    40,    -1,   111,    -1,    -1,    -1,    -1,    -1,    48,
      36,    50,    -1,    88,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    64,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,   111,    -1,    64,    -1,
      -1,    80,    -1,    82,    70,    -1,    72,    -1,    74,    -1,
      -1,    -1,    91,    92,    80,    -1,    82,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    36,   111,
      25,   110,    40,   112,   113,   114,    -1,    -1,    -1,    -1,
      48,    36,    -1,    -1,   110,    40,   112,   113,   114,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,    64,
      -1,    -1,    80,    -1,    82,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    91,    92,    80,    -1,    82,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    36,
      -1,    25,   110,    40,   112,   113,   114,    -1,    -1,    -1,
      -1,    48,    36,    -1,    25,   110,    40,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    64,    -1,    40,
      -1,    42,    -1,    70,    -1,    72,    -1,    74,    -1,    -1,
      64,    -1,    -1,    80,    -1,    82,    70,    -1,    72,    -1,
      74,    -1,    -1,    64,    91,    92,    80,    -1,    82,    70,
      -1,    72,    86,    74,    -1,    -1,    -1,    91,    92,    80,
      -1,    82,    25,   110,    -1,   112,   113,   114,    -1,    -1,
      91,    92,    -1,    36,    -1,    25,   110,    40,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    36,    -1,    25,   110,
      40,   112,   113,   114,    -1,    -1,    46,    -1,    -1,    36,
      -1,    64,    -1,    40,    -1,    42,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    64,    -1,    -1,    80,    -1,    82,
      70,    -1,    72,    86,    74,    -1,    -1,    64,    91,    92,
      80,    -1,    82,    70,    -1,    72,    -1,    74,    -1,    -1,
      -1,    91,    92,    80,    -1,    82,    25,   110,    -1,   112,
     113,   114,    -1,    -1,    91,    92,    -1,    36,    -1,    -1,
     110,    40,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,   110,    -1,   112,   113,   114,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    64,    40,    -1,    42,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      25,    80,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      64,    36,    91,    92,    -1,    40,    70,    42,    72,    -1,
      74,    -1,    -1,    -1,    -1,    25,    80,    -1,    82,    -1,
      -1,   110,    -1,   112,   113,   114,    36,    91,    92,    64,
      40,    -1,    42,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    25,    80,   110,    82,   112,   113,
     114,    -1,    -1,    -1,    64,    36,    91,    92,    -1,    40,
      70,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    25,
      80,    -1,    82,    -1,    -1,   110,    -1,   112,   113,   114,
      36,    91,    92,    64,    40,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,
     110,    82,   112,   113,   114,    -1,    -1,    -1,    64,    -1,
      91,    92,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,   110,
      -1,   112,   113,   114,    -1,    91,    92,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,   110,    56,   112,   113,   114,    60,
      -1,    62,    -1,    64,    -1,    66,    -1,    68,    62,    70,
      64,    72,    66,    74,    68,    76,    70,    78,    72,    -1,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    42,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    52,
      -1,    54,    -1,    56,    -1,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    68,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      -1,    66,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    56,
      -1,    -1,    -1,    60,    -1,    62,    -1,    64,    -1,    66,
      -1,    68,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    60,    -1,    62,    -1,    64,    -1,    66,    -1,    68,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    56,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    -1,    66,    -1,    68,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    56,    -1,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    68,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    60,    -1,    62,    -1,    64,    -1,    66,    -1,    68,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      -1,    66,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    56,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    -1,    66,    -1,    68,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    56,
      -1,    -1,    -1,    60,    -1,    62,    -1,    64,    -1,    66,
      -1,    68,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    60,    -1,    62,    -1,    64,    -1,    66,    -1,    68,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    52,    -1,    54,    -1,    56,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    -1,    66,    -1,    68,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    52,
      -1,    54,    -1,    56,    -1,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    68,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      -1,    66,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    52,    -1,    54,    -1,    56,
      -1,    58,    -1,    60,    -1,    62,    -1,    64,    -1,    66,
      -1,    68,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    52,    -1,    54,    -1,    56,    -1,    -1,
      -1,    60,    -1,    62,    -1,    64,    -1,    66,    -1,    68,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    52,    -1,    54,    -1,    56,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    -1,    66,    -1,    68,    -1,    70,
      -1,    72,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    54,
      -1,    56,    -1,    -1,    -1,    60,    -1,    62,    -1,    64,
      -1,    66,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    56,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    -1,    66,    60,    68,    62,    70,
      64,    72,    66,    74,    68,    76,    70,    78,    72,    -1,
      74,    -1,    76,    -1,    78,    -1,    -1,    -1,    89,    90,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     104,   105,   106,   107,   108,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   116,     0,     3,     6,     7,    11,    13,    14,    15,
      19,    20,    21,    23,    24,    26,    27,    29,    30,    31,
      32,    33,    35,    38,    40,    74,    86,   110,   111,   117,
     118,   119,   120,   123,   124,   129,   130,   133,   134,   140,
     143,   144,   145,   146,   147,   161,   162,   163,    48,   160,
     161,   162,    48,   160,    48,   160,    27,    30,   119,   146,
       7,    33,   164,   165,    48,   123,   125,   126,   151,    40,
      44,    86,   119,   124,   143,    52,    86,    54,   150,    44,
      40,    40,   119,   146,   131,   132,   162,    48,    58,    86,
     119,   123,   135,   136,   137,   138,   145,    48,   135,    48,
      48,   160,    48,   160,    42,    42,   165,     4,     5,     8,
       9,    10,    16,    17,    18,    22,    25,    28,    34,    36,
      37,    40,    50,    64,    70,    72,    80,    82,    86,    91,
      92,   112,   113,   114,   123,   128,   141,   142,   151,   152,
     154,   155,   156,   160,   161,   162,   163,   127,   145,    86,
     126,   151,    42,    88,   121,   122,   123,    46,   154,   162,
     125,   151,    86,   144,    48,   154,    46,   154,    42,    88,
     121,    42,    88,   121,   139,   162,    50,    52,    54,   131,
     154,   137,    50,   136,    52,    86,    58,   135,    50,   135,
     135,    48,   135,    48,    86,   154,    86,    58,    86,   152,
      40,   160,    40,    86,   154,    40,   155,    40,    40,    40,
      86,   123,   154,   157,   155,   155,   155,   155,   155,   142,
     155,   155,    86,   143,    50,   152,    50,   128,   142,    52,
      54,    56,    60,    62,    64,    66,    68,    70,    72,    74,
      76,    78,    86,    89,    90,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   166,   167,   168,    40,    44,    84,    91,    92,    93,
     112,    58,   155,    52,    86,    42,    42,    52,    40,   145,
     158,   163,    46,   151,    48,   148,   149,   154,    46,    42,
      42,    52,    42,    42,    52,    42,    52,    50,   132,   154,
      50,    52,    86,   138,   154,    50,    50,    50,   135,    50,
     135,    58,   152,    34,    86,   154,    86,   154,    86,   157,
     154,   154,   160,    40,   158,   163,    42,    42,    86,    50,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,    42,   153,
     154,   154,   160,   160,   152,   145,    88,   122,   158,    40,
      44,   158,   148,    50,    52,    88,    88,   162,    50,    50,
      50,   152,    40,    86,   154,    86,    42,    42,    42,    42,
      52,   155,    58,    42,    52,    46,    42,    42,    42,    88,
     121,    46,   154,    50,    52,    50,   149,    42,    42,   154,
      42,   154,    86,    86,   154,   152,   152,   152,   159,   162,
     154,   154,    42,    42,    52,    46,    50,    42,   152,    42,
      42,   154,    42,   154,    86,    12,    42,    84,    88,    86,
     152,   152,    42,   152,    42,    42,   154,   152,   162,    42,
     152,   152,   152,    42,   152
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   117,   117,   118,   118,   118,   118,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   125,   125,   125,   126,   127,   127,
     128,   128,   129,   129,   129,   129,   130,   131,   131,   132,
     132,   133,   133,   133,   133,   133,   133,   133,   133,   134,
     134,   134,   134,   135,   135,   136,   136,   136,   137,   137,
     138,   138,   138,   139,   139,   140,   140,   140,   140,   141,
     141,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   148,   149,   149,   149,   150,   150,   150,   151,
     151,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   153,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   156,   157,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   160,   160,   161,
     162,   163,   163,   164,   164,   165,   165,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   167,   167,   167,
     167,   168,   168
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     4,     3,     3,     2,
       2,     1,     3,     4,     3,     3,     4,     3,     4,     6,
       4,     6,     4,     4,     0,     1,     3,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     3,     1,     3,
       2,     1,     4,     5,     5,     6,     2,     1,     3,     1,
       3,     5,     5,     4,     4,     6,     6,     5,     5,     2,
       2,     3,     3,     1,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     1,     3,     3,     2,     2,     1,     2,
       1,     3,     2,     2,     1,     3,     2,     1,     1,     1,
       2,     1,     1,     3,     4,     3,     3,     4,     6,     4,
       0,     1,     3,     1,     3,     4,     2,     4,     5,     4,
       3,     3,     2,     2,     2,     1,     1,     7,     5,     5,
       7,     9,     8,     8,     7,     8,     7,     7,     6,     5,
       4,     3,     2,     2,     3,     2,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     3,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     6,     2,     4,     3,     3,     1,     4,     3,     1,
       1,     1,     3,     2,     1,     2,     0,     3,     4,     6,
       4,     2,     3,     4,     3,     1,     3,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 293 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = (yyvsp[-1].tnode);
				if ((yyvsp[0].tnode)) tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 298 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MODULE, 0, 0, 0);
				tree_root = (yyval.tnode);
			}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 305 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MODULE_ITEM, FUNCTION_ITEM,
					(yyvsp[0].tnode), 0);
			}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 310 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)) (yyval.tnode) = tmknode(GEN_MODULE_ITEM, DCL_ITEM,
					(yyvsp[0].tnode), 0);
				else (yyval.tnode) = NULL;
			}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 318 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-3].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-3].tnode)->srcpos,
						"typedef function definition");
					(yyvsp[-3].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_TFPC, (yyvsp[-3].tnode), (yyvsp[-2].tnode));
				tlist_add((yyval.tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 329 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-2].tnode)->srcpos,
						"typedef function definition");
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_TFC, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 339 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_FPC, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 344 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNCTION, FUNC_FC, (yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 350 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == FUNC_STARS_SPEC) {
					tlist_ladd((yyvsp[0].tnode)->down->over, (yyvsp[-1].tnode));
					(yyval.tnode) = (yyvsp[0].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_FUNC_SPEC,
						FUNC_STARS_SPEC,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
				}
			}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 362 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 368 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_NFCALL,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 374 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC,
					FUNC_SPEC_ARRAY_EXPR, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 380 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ARRAY,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 386 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_INHERIT,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 392 "Pgram.y" /* yacc.c:1646  */
    {
				(yyvsp[-3].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_NAMES, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 398 "Pgram.y" /* yacc.c:1646  */
    {
				(yyvsp[-2].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 404 "Pgram.y" /* yacc.c:1646  */
    {
				(yyvsp[-3].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_ANSI,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 411 "Pgram.y" /* yacc.c:1646  */
    {
				(yyvsp[-5].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_ANSI_E,
					(yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 418 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ANSI,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 424 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_ANSI_E,
					(yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 430 "Pgram.y" /* yacc.c:1646  */
    {
				(yyvsp[-3].tnode)->genus = GEN_FNAME;	/* fix leaf type */
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_FCALL_E_ANSI,
					(yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 437 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_FUNC_SPEC, FUNC_SPEC_E_ANSI,
					(yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 2839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 443 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = NULL;
			}
#line 2847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 449 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_ANSI_PARAMS, 0, (yyvsp[0].tnode), 0);
			}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 453 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 459 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-1].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_ANSI_PARAM, ANSI_DATA_ITEM,
					(yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 469 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-1].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_ANSI_PARAM, ANSI_NULL_DCL,
					(yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 481 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPES, 0, (yyvsp[0].tnode), 0);
				if ((yyvsp[0].tnode)->species == CLASSTYPE_TYPEDEF)
					(yyval.tnode)->species = CLASSTYPES_TYPEDEF;
			}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 487 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
				if ((yyvsp[0].tnode)->species == CLASSTYPE_TYPEDEF)
					(yyval.tnode)->species = CLASSTYPES_TYPEDEF;
			}
#line 2911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 495 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INT,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 500 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_CHAR,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 505 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_FLOAT,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 510 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_DOUBLE,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 515 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_LONG,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 520 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_SHORT,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 525 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_UNSIGNED,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 530 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_SIGNED,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 535 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_VOID,
					(yyvsp[0].token).srcpos, 0);
			}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 540 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_CONST,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 545 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_VOLATILE,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 550 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_AUTO,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 555 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_REGISTER,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 560 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_STATIC,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 565 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INLINE,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 570 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_EXTERN,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 575 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_CLASSTYPE, CLASSTYPE_TYPEDEF,
					(yyvsp[0].token).srcpos, 0);
			}
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 580 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_TNAME,
					(yyvsp[0].tnode), 0);
			}
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 585 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_STRUCT_D,
					(yyvsp[0].tnode), 0);
			}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 590 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_ENUM_D,
					(yyvsp[0].tnode), 0);
			}
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 595 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_STRUCT_R,
					(yyvsp[0].tnode), 0);
			}
#line 3100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 600 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_CLASSTYPE, CLASSTYPE_ENUM_R,
					(yyvsp[0].tnode), 0);
			}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 607 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_PARAM_DCLS, 0, (yyvsp[0].tnode), 0);
			}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 611 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 615 "Pgram.y" /* yacc.c:1646  */
    {
				/* extra ';' not allowed before 1st param_dcl */
				(yyval.tnode) = (yyvsp[-1].tnode);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 621 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = NULL;
			}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 627 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-2].tnode)->srcpos,
						"typedef parameters");
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_PARAM_DCL, 0, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 639 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_PARAM_DEFS, 0, (yyvsp[0].tnode), 0);
			}
#line 3165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 643 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 649 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 653 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 659 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_NOTAG, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 664 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_TAG, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 669 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_NOTAG, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 674 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_ENUM_DCL, sENUM_TAG, (yyvsp[-4].tnode), (yyvsp[-2].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 681 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_ENUM_REF, 0, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 688 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MOE_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 692 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 698 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MOE, MOE_NOVAL, (yyvsp[0].tnode), 0);
			}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 702 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MOE, MOE_VAL, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 708 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_STRUCT_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 714 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_UNION_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 720 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_STRUCT_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 726 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_UNION_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 732 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PSTRUCT_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 738 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PUNION_TAG,
					(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 744 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PSTRUCT_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 750 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_DCL, DCL_PUNION_NOTAG,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 758 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_STRUCT,
					(yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 764 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_UNION, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 770 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_PSTRUCT,
					(yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, NULL);
			}
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 776 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRUCT_REF, REF_PUNION, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, NULL);
			}
#line 3384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 783 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MEM_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 787 "Pgram.y" /* yacc.c:1646  */
    {	
			        if ((yyvsp[0].tnode) != NULL) {
				    (yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
				} else {
				    (yyval.tnode) = (yyvsp[-1].tnode);
				}
			}
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 797 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-2].tnode)->srcpos,
						"typedef struct/union member");
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_MEMBER, 0, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 807 "Pgram.y" /* yacc.c:1646  */
    {
			        (yyval.tnode) = NULL; 
			}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 812 "Pgram.y" /* yacc.c:1646  */
    {
				/*
				* This rule is not in the internal grammar
				* so we have to fake it.
				*/
				(yyval.tnode) = tmknode(GEN_MEMBER, 0,
				  tmknode(GEN_CLASSTYPES, CLASSTYPES_NORMAL,
				    tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INT,
					nosrcpos, 0),
				  0),
				(yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 829 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCLS, 0, (yyvsp[0].tnode), 0);
			}
#line 3452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 833 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 839 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_DCL, (yyvsp[0].tnode), 0);
			}
#line 3468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 843 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_DCL_BIT, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 847 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_MEM_DCL, MEM_BIT, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 854 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_NAMES, 0, (yyvsp[0].tnode), 0);
			}
#line 3493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 858 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 864 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					insertTypeNames((yyvsp[-1].tnode));
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_SPEC,
					(yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 874 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF)
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_NOSPEC,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 882 "Pgram.y" /* yacc.c:1646  */
    {
				/*
				* This rule is not in the internal grammar
				* so we have to fake it.
				*/
				(yyval.tnode) = tmknode(GEN_INIT_DCL, INIT_DCL_SPEC,
				  tmknode(GEN_CLASSTYPES, CLASSTYPES_NORMAL,
				    tmkleaf(GEN_CLASSTYPE, CLASSTYPE_INT,
					nosrcpos, 0),
				  0),
				(yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 896 "Pgram.y" /* yacc.c:1646  */
    {
				/* Never generate corresponding species. */
				(yyval.tnode) = NULL;
			}
#line 3554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 903 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 907 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_INDATA_DCLS, 0, (yyvsp[0].tnode), 0);
			}
#line 3570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 913 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].tnode)->species == CLASSTYPES_TYPEDEF) {
					insertTypeNames((yyvsp[-1].tnode));
					(yyvsp[-2].tnode)->species = CLASSTYPES_NORMAL;
				}
				(yyval.tnode) = tmknode(GEN_INDATA_DCL, INIT_DCL_SPEC,
					(yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 923 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF)
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				(yyval.tnode) = tmknode(GEN_INDATA_DCL, INIT_DCL_NOSPEC,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 931 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = (yyvsp[0].tnode);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 938 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_SPECS, 0, (yyvsp[0].tnode), 0);
			}
#line 3613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 942 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 948 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_SPEC, DATA_SPEC_INIT,
					(yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 3630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 953 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_SPEC, DATA_SPEC, (yyvsp[0].tnode), 0);
			}
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 959 "Pgram.y" /* yacc.c:1646  */
    {
				/*
				* Change all FUNC_SPEC to DATA_ITEM in tree from
				* $1.  Assume at most one FUNC_SPEC child at
				* each node and FUNC_SPEC always a child of
				* FUNC_SPEC.
				*/
				TNODE *p;
				TNODE *first;

				first = (yyvsp[0].tnode);
				p = first;
				while (p) {
					if (p->genus == GEN_FUNC_SPEC) {
						p->genus = GEN_DATA_ITEM;
						first = p->down;
						p = first;
					} else {
						p = p->over;
						if (p == first) break;
					}
				}
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 984 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 990 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == FUNC_STARS_SPEC) {
					tlist_ladd((yyvsp[0].tnode)->down->over, (yyvsp[-1].tnode));
					(yyval.tnode) = (yyvsp[0].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_DATA_ITEM,
						FUNC_STARS_SPEC,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
				}
			}
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1002 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1006 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM, DATA_NAME, (yyvsp[0].tnode), 0);
			}
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1012 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_NFCALL, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1018 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ARRAY_EXPR, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1024 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ARRAY, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1030 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_INHERIT, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1036 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ANSI, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1042 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_ANSI_E, (yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1048 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_DATA_ITEM,
					FUNC_SPEC_E_ANSI, (yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1053 "Pgram.y" /* yacc.c:1646  */
    { (yyval.tnode) = NULL;}
#line 3783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1057 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_INIT_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1061 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1067 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_EXPR,
					(yyvsp[0].tnode), 0);
			}
#line 3808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1072 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_LIST,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1078 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_INIT_ITEM, INIT_LIST,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1086 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_EXPR,
					(yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 3838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1092 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_LIST,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1098 "Pgram.y" /* yacc.c:1646  */
    {
				/* Ignore extra comma! */
				(yyval.tnode) = tmknode(GEN_INITIALIZER, INITIALIZER_LIST,
					(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1107 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_DCL_STMTS,
					(yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1113 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_STMTS,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1119 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_DCL,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1125 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_COMPSTMT, COMPSTMT_EMPTY,
					0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1135 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EXPR, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1140 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_EMPTY, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[0].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1145 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_COMPSTMT, (yyvsp[0].tnode), 0);
			}
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1149 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_IF_ELSE, (yyvsp[-4].tnode), (yyvsp[-2].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, NULL);
			}
#line 3935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1161 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_IF, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, NULL);
			}
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1166 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_WHILE, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, NULL);
			}
#line 3953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1171 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_DO, (yyvsp[-5].tnode), (yyvsp[-2].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1176 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EEE_,
						(yyvsp[-6].tnode), (yyvsp[-4].tnode));
					tlist_add((yyval.tnode), (yyvsp[-2].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-8].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EEES,
						(yyvsp[-6].tnode), (yyvsp[-4].tnode));
					tlist_add((yyval.tnode), (yyvsp[-2].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-8].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 3982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1192 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EE__,
						(yyvsp[-5].tnode), (yyvsp[-3].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_EE_S,
						(yyvsp[-5].tnode), (yyvsp[-3].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1206 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E_E_,
						(yyvsp[-5].tnode), (yyvsp[-2].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E_ES,
						(yyvsp[-5].tnode), (yyvsp[-2].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1220 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E___,
						(yyvsp[-4].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR_E__S,
						     (yyvsp[-4].tnode), (yyvsp[0].tnode));
				        tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 4035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1233 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__EE_,
						(yyvsp[-4].tnode), (yyvsp[-2].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__EES,
						(yyvsp[-4].tnode), (yyvsp[-2].tnode));
					tlist_add((yyval.tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-7].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 4053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1247 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__E__,
						(yyvsp[-3].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR__E_S,
						(yyvsp[-3].tnode), (yyvsp[0].tnode));
				        tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1260 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == STMT_EMPTY) {
					(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR___E_,
						(yyvsp[-2].tnode), 0);
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
					tfreenode((yyvsp[0].tnode));
				} else {
				        (yyval.tnode) = tmknode(GEN_STMT, STMT_FOR___ES,
						(yyvsp[-2].tnode), (yyvsp[0].tnode));
					tsrc_pos((yyval.tnode), (yyvsp[-6].token).srcpos, (yyvsp[0].tnode)->srcpos);
				}
			}
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1273 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_FOR____S, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, NULL);
			}
#line 4096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1278 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_SWITCH, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-4].token).srcpos, NULL);
			}
#line 4105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1283 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_CASE, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, NULL);
			}
#line 4114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1288 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_DEFAULT, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, NULL);
			}
#line 4123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1293 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_BREAK, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1298 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_CONTINUE, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1303 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_RETURN_EXPR,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1309 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_RETURN, 0, 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1314 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_GOTO, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1319 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STMT, STMT_LABEL, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1326 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXP_LIST, 0, (yyvsp[0].tnode), 0);
			}
#line 4185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1330 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1336 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1342 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1347 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_COMMA, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1351 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_PLUS,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1358 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_MINUS,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1365 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_MUL, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1372 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_DIV, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1379 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_MOD, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1386 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_LS, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1393 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_RS, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1400 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_OR, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1407 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_ER, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1414 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_AND, (yyvsp[-1].token).srcpos,
						0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1421 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_ANDAND,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1428 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_OROR,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1435 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_QCOLON, (yyvsp[-4].tnode), (yyvsp[-2].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1440 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode), (yyvsp[-1].tnode));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1445 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_BINOP, (yyvsp[-2].tnode),
					tmkleaf(GEN_BINOP, BINOP_ASGN,
						(yyvsp[-1].token).srcpos, 0));
				tlist_add((yyval.tnode), (yyvsp[0].tnode));
			}
#line 4380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1452 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 4388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1458 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INCOP, (yyvsp[-1].tnode),
					tmkleaf(GEN_INCOP, INCOP_INC, (yyvsp[0].token).srcpos,
						0));
			}
#line 4398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1464 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INCOP, (yyvsp[-1].tnode),
					tmkleaf(GEN_INCOP, INCOP_DEC, (yyvsp[0].token).srcpos,
						0));
			}
#line 4408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1470 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_INC, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1477 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_DEC, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1484 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_AND, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1491 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_COMPL, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1498 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_NOT, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1505 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_UNOP,
					tmkleaf(GEN_UNOP, UNOP_MINUS, (yyvsp[-1].token).srcpos,
						0),
					(yyvsp[0].tnode));
			}
#line 4474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1512 "Pgram.y" /* yacc.c:1646  */
    {
				/*
				* This rule is not in the internal grammar
				* so we have to fake it.
				*/
				(yyval.tnode) = (yyvsp[0].tnode);
			}
#line 4486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1520 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_SIZEOF, (yyvsp[0].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-1].token).srcpos, NULL);
			}
#line 4495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1525 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_CAST, (yyvsp[-2].tnode), (yyvsp[0].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, NULL);
			}
#line 4504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1530 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_SIZEOF_TYPE,
					(yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-3].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1536 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_OFFSET, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), (yyvsp[-5].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1541 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode)->species == EXPR_LSTAR) {
					tlist_ladd((yyvsp[0].tnode)->down->over, (yyvsp[-1].tnode));
					(yyval.tnode) = (yyvsp[0].tnode);
				} else {
					(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LSTAR,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
				}
			}
#line 4538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1552 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LARRAY, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1557 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LARROW, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1561 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LDOT, (yyvsp[-2].tnode), (yyvsp[0].tnode));
			}
#line 4563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1565 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LNAME, (yyvsp[0].tnode), 0);
			}
#line 4571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1569 "Pgram.y" /* yacc.c:1646  */
    {
				TNODE *p;

				if ((yyvsp[-3].tnode)->species == EXPR_LNAME) {
					(yyvsp[-3].tnode)->genus = GEN_FUNC_LP;
					(yyvsp[-3].tnode)->species = FUNC_NAME_LP;
					(yyvsp[-3].tnode)->down->genus = GEN_FNAME;
					p = (yyvsp[-3].tnode);
				} else {
					p = tmknode(GEN_FUNC_LP, FUNC_EXPR_LP,
						(yyvsp[-3].tnode), 0);
				}
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LFCALL1, p, (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1585 "Pgram.y" /* yacc.c:1646  */
    {
				TNODE *p;

				if ((yyvsp[-2].tnode)->species == EXPR_LNAME) {
					(yyvsp[-2].tnode)->genus = GEN_FUNC_LP;
					(yyvsp[-2].tnode)->species = FUNC_NAME_LP;
					(yyvsp[-2].tnode)->down->genus = GEN_FNAME;
					p = (yyvsp[-2].tnode);
				} else {
					p = tmknode(GEN_FUNC_LP, FUNC_EXPR_LP,
						(yyvsp[-2].tnode), 0);
				}
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_LFCALL0, p, 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1601 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_ICON, 
					tmkleaf(GEN_ICON, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text),
					0);
			}
#line 4622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1608 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_FCON,
					tmkleaf(GEN_FCON, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text),
					0);
			}
#line 4633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1615 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_STRING, (yyvsp[0].tnode), 0);
			}
#line 4641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1619 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_EXPR, EXPR_INHERIT, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1626 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), 
					tmkleaf(GEN_STRING, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text));
			}
#line 4660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1632 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STRINGS, 0, 
					tmkleaf(GEN_STRING, 0,
						(yyvsp[0].token).srcpos, (yyvsp[0].token).text),
					0);
			}
#line 4671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1641 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].tnode)->species == CLASSTYPES_TYPEDEF) {
					parse_error((yyvsp[-1].tnode)->srcpos,
						"typedef in cast");
					(yyvsp[-1].tnode)->species = CLASSTYPES_NORMAL;
				}
				if ((yyvsp[0].tnode))
					(yyval.tnode) = tmknode(GEN_CAST_TYPE, CAST_TYPE,
						(yyvsp[-1].tnode), (yyvsp[0].tnode));
				else 
					(yyval.tnode) = tmknode(GEN_CAST_TYPE,
						CAST_TYPE_NULL, (yyvsp[-1].tnode), NULL);
			}
#line 4689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1657 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = NULL;
			}
#line 4697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1661 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_N_FUNC, (yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1666 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_ANSI, (yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1671 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_ANSI_E, (yyvsp[-5].tnode), (yyvsp[-3].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1676 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_E_ANSI, (yyvsp[-3].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1681 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_STAR,
						(yyvsp[-1].tnode), 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_STAR_N,
						tmknode(GEN_STARS, 0, (yyvsp[-1].tnode), 0),
						(yyvsp[0].tnode));
			}
#line 4747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1691 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_SUB,
						0, 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_N_SUB,
						(yyvsp[-2].tnode), 0);
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1701 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-3].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL, NULL_SUB_E,
						(yyvsp[-1].tnode), 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL,NULL_N_SUB_E,
						(yyvsp[-3].tnode), (yyvsp[-1].tnode));
				tsrc_pos((yyval.tnode), NULL, (yyvsp[0].token).srcpos);
			}
#line 4775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1711 "Pgram.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].tnode) == NULL)
					(yyval.tnode) = tmknode(GEN_NULL_DCL,
						NULL_INHERIT, 0, 0);
				else 
					(yyval.tnode) = tmknode(GEN_NULL_DCL,
						NULL_INHERIT_N, (yyvsp[-1].tnode), 0);
				tsrc_pos((yyval.tnode), (yyvsp[-2].token).srcpos, (yyvsp[0].token).srcpos);
			}
#line 4789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1733 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_TNAME, 0,
					(yyvsp[0].token).srcpos, (yyvsp[0].token).text);
			}
#line 4798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1740 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_NAME, 0, (yyvsp[0].token).srcpos, (yyvsp[0].token).text);
			}
#line 4806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1746 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_STAR, STAR_NORMAL, (yyvsp[0].token).srcpos, 0);
			}
#line 4814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1751 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_STAR, STAR_QUALS, (yyvsp[0].tnode), 0);
			}
#line 4822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1757 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmknode(GEN_QUALS, 0, (yyvsp[0].tnode), 0);
			}
#line 4830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1761 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tlist_add((yyvsp[-1].tnode), (yyvsp[0].tnode));
			}
#line 4838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1767 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_QUAL, QUAL_CONST, (yyvsp[0].token).srcpos, 0);
			}
#line 4846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1772 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_QUAL, QUAL_VOLATILE, (yyvsp[0].token).srcpos, 0);
			}
#line 4854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1777 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_APLUS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1783 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMINUS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1789 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMUL,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1795 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ADIV,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1801 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AMOD,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1807 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ALS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1813 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_ARS,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1819 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AAND,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1825 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AOR,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1831 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_AER,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1837 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_GTEQ,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1843 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_LTEQ,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1849 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_GT, (yyvsp[0].token).srcpos, 0);
			}
#line 4970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1854 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_LT, (yyvsp[0].token).srcpos, 0);
			}
#line 4978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1859 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_EQ, (yyvsp[0].token).srcpos, 0);
			}
#line 4986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1864 "Pgram.y" /* yacc.c:1646  */
    {
				(yyval.tnode) = tmkleaf(GEN_BINOP, BINOP_NEQ,
					(yyvsp[0].token).srcpos, 0);
			}
#line 4995 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4999 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 1869 "Pgram.y" /* yacc.c:1906  */

#define CHECK_MALLOC(p) ((p)?1:internal_error(NULL, "Out of memory\n"))

int
parse(srcfile, tree, uprefix)
FILE	*srcfile;
TNODE	**tree;
char	**uprefix;
{
	extern	intcmp();
	int	status;

	scan_init(srcfile);

	status = yyparse();

	scan_end(uprefix);

	*tree = tree_root;

	return status;
}

static void
insertTypeNames(node)
TNODE	*node;
{
	TNODE	*p;
	TNODE	*item;

	if (node->genus != GEN_DATA_SPECS) {
		internal_error(node->srcpos, "Unexpected genus: %d",
			node->genus);
	}

	for (p = CHILD0(node); p != NULL; p = TNEXT(p)) {
		item = CHILD0(p);
		while (item->genus == GEN_DATA_ITEM) {
			if (item->species == FUNC_STARS_SPEC)
				item = CHILD1(item);
			else item = CHILD0(item);
		}
		scan_setType(item->text);
	}
}

