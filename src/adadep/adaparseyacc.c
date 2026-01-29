/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 45 "adaparseyacc.y"

char labelstr[50];
/*
 * For procedures or functions it is not known in advance if it is a
 * body or specification, so information is back-patched.
 * All output is kept in an array and written out after the end of each
 * library unit has been seen.
 */
char outbuf[10000] = {0}, t_out[50];
int back_patch = 0, globalf = 1, begin_unit = 1;
extern char identstr[50];

#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    SEM_COL = 259,                 /* SEM_COL  */
    COLON = 260,                   /* COLON  */
    COMMA = 261,                   /* COMMA  */
    WITH = 262,                    /* WITH  */
    USE = 263,                     /* USE  */
    PROCEDURE = 264,               /* PROCEDURE  */
    FUNCTION = 265,                /* FUNCTION  */
    RETURN = 266,                  /* RETURN  */
    PACKAGE = 267,                 /* PACKAGE  */
    BODY = 268,                    /* BODY  */
    TASK = 269,                    /* TASK  */
    IS = 270,                      /* IS  */
    ISNEW = 271,                   /* ISNEW  */
    LRP = 272,                     /* LRP  */
    RP = 273,                      /* RP  */
    SEPARATE = 274,                /* SEPARATE  */
    SEP_LP = 275,                  /* SEP_LP  */
    DOT = 276,                     /* DOT  */
    DECLARE = 277,                 /* DECLARE  */
    BEGN = 278,                    /* BEGN  */
    END = 279,                     /* END  */
    TYPE = 280,                    /* TYPE  */
    RENAMES = 281,                 /* RENAMES  */
    GENERIC = 282,                 /* GENERIC  */
    RECORD = 283,                  /* RECORD  */
    CASE = 284,                    /* CASE  */
    IF = 285,                      /* IF  */
    LOOP = 286,                    /* LOOP  */
    SELECT = 287,                  /* SELECT  */
    DO = 288                       /* DO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENT 258
#define SEM_COL 259
#define COLON 260
#define COMMA 261
#define WITH 262
#define USE 263
#define PROCEDURE 264
#define FUNCTION 265
#define RETURN 266
#define PACKAGE 267
#define BODY 268
#define TASK 269
#define IS 270
#define ISNEW 271
#define LRP 272
#define RP 273
#define SEPARATE 274
#define SEP_LP 275
#define DOT 276
#define DECLARE 277
#define BEGN 278
#define END 279
#define TYPE 280
#define RENAMES 281
#define GENERIC 282
#define RECORD 283
#define CASE 284
#define IF 285
#define LOOP 286
#define SELECT 287
#define DO 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENT = 3,                      /* IDENT  */
  YYSYMBOL_SEM_COL = 4,                    /* SEM_COL  */
  YYSYMBOL_COLON = 5,                      /* COLON  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_WITH = 7,                       /* WITH  */
  YYSYMBOL_USE = 8,                        /* USE  */
  YYSYMBOL_PROCEDURE = 9,                  /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 10,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_PACKAGE = 12,                   /* PACKAGE  */
  YYSYMBOL_BODY = 13,                      /* BODY  */
  YYSYMBOL_TASK = 14,                      /* TASK  */
  YYSYMBOL_IS = 15,                        /* IS  */
  YYSYMBOL_ISNEW = 16,                     /* ISNEW  */
  YYSYMBOL_LRP = 17,                       /* LRP  */
  YYSYMBOL_RP = 18,                        /* RP  */
  YYSYMBOL_SEPARATE = 19,                  /* SEPARATE  */
  YYSYMBOL_SEP_LP = 20,                    /* SEP_LP  */
  YYSYMBOL_DOT = 21,                       /* DOT  */
  YYSYMBOL_DECLARE = 22,                   /* DECLARE  */
  YYSYMBOL_BEGN = 23,                      /* BEGN  */
  YYSYMBOL_END = 24,                       /* END  */
  YYSYMBOL_TYPE = 25,                      /* TYPE  */
  YYSYMBOL_RENAMES = 26,                   /* RENAMES  */
  YYSYMBOL_GENERIC = 27,                   /* GENERIC  */
  YYSYMBOL_RECORD = 28,                    /* RECORD  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_LOOP = 31,                      /* LOOP  */
  YYSYMBOL_SELECT = 32,                    /* SELECT  */
  YYSYMBOL_DO = 33,                        /* DO  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_Compilation = 35,               /* Compilation  */
  YYSYMBOL_CompilationUnit = 36,           /* CompilationUnit  */
  YYSYMBOL_Unit = 37,                      /* Unit  */
  YYSYMBOL_ContextClause = 38,             /* ContextClause  */
  YYSYMBOL_WithUseList = 39,               /* WithUseList  */
  YYSYMBOL_WithUse = 40,                   /* WithUse  */
  YYSYMBOL_WithClause = 41,                /* WithClause  */
  YYSYMBOL_UseClause = 42,                 /* UseClause  */
  YYSYMBOL_LibraryUnit = 43,               /* LibraryUnit  */
  YYSYMBOL_LibraryUnitBody = 44,           /* LibraryUnitBody  */
  YYSYMBOL_Subunit = 45,                   /* Subunit  */
  YYSYMBOL_PSTBody = 46,                   /* PSTBody  */
  YYSYMBOL_par_path = 47,                  /* par_path  */
  YYSYMBOL_SubprName = 48,                 /* SubprName  */
  YYSYMBOL_SubprSpec = 49,                 /* SubprSpec  */
  YYSYMBOL_SubprBody = 50,                 /* SubprBody  */
  YYSYMBOL_Block = 51,                     /* Block  */
  YYSYMBOL_EndId = 52,                     /* EndId  */
  YYSYMBOL_PackIdent = 53,                 /* PackIdent  */
  YYSYMBOL_PackBodyIdent = 54,             /* PackBodyIdent  */
  YYSYMBOL_PackageSpec = 55,               /* PackageSpec  */
  YYSYMBOL_PackageBody = 56,               /* PackageBody  */
  YYSYMBOL_GenericInstan = 57,             /* GenericInstan  */
  YYSYMBOL_SelCompName = 58,               /* SelCompName  */
  YYSYMBOL_Generic = 59,                   /* Generic  */
  YYSYMBOL_GenericSpec = 60,               /* GenericSpec  */
  YYSYMBOL_TaskIdent = 61,                 /* TaskIdent  */
  YYSYMBOL_TaskSpec = 62,                  /* TaskSpec  */
  YYSYMBOL_TaskBodyIdent = 63,             /* TaskBodyIdent  */
  YYSYMBOL_TaskBody = 64,                  /* TaskBody  */
  YYSYMBOL_DecltivePart = 65,              /* DecltivePart  */
  YYSYMBOL_BasDeclItems = 66,              /* BasDeclItems  */
  YYSYMBOL_BasDeclItem = 67,               /* BasDeclItem  */
  YYSYMBOL_Body = 68,                      /* Body  */
  YYSYMBOL_Stub = 69,                      /* Stub  */
  YYSYMBOL_GenJunk = 70,                   /* GenJunk  */
  YYSYMBOL_BasJunk = 71,                   /* BasJunk  */
  YYSYMBOL_SeqOfStmts = 72,                /* SeqOfStmts  */
  YYSYMBOL_Declare = 73,                   /* Declare  */
  YYSYMBOL_sJunk = 74                      /* sJunk  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   416

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    59,    62,    69,    70,    71,    75,    79,
      82,    83,    86,    87,    90,    95,   102,   103,   106,   118,
     125,   132,   139,   154,   163,   166,   173,   185,   194,   199,
     206,   217,   230,   231,   232,   233,   236,   239,   242,   243,
     246,   257,   268,   271,   272,   275,   276,   279,   280,   283,
     294,   295,   298,   306,   316,   317,   320,   331,   334,   335,
     338,   339,   342,   350,   358,   366,   374,   382,   383,   384,
     392,   400,   403,   411,   419,   427,   435,   443,   453,   459,
     460,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   481,   482,   483,   487,   488,   491,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENT", "SEM_COL",
  "COLON", "COMMA", "WITH", "USE", "PROCEDURE", "FUNCTION", "RETURN",
  "PACKAGE", "BODY", "TASK", "IS", "ISNEW", "LRP", "RP", "SEPARATE",
  "SEP_LP", "DOT", "DECLARE", "BEGN", "END", "TYPE", "RENAMES", "GENERIC",
  "RECORD", "CASE", "IF", "LOOP", "SELECT", "DO", "$accept", "Compilation",
  "CompilationUnit", "Unit", "ContextClause", "WithUseList", "WithUse",
  "WithClause", "UseClause", "LibraryUnit", "LibraryUnitBody", "Subunit",
  "PSTBody", "par_path", "SubprName", "SubprSpec", "SubprBody", "Block",
  "EndId", "PackIdent", "PackBodyIdent", "PackageSpec", "PackageBody",
  "GenericInstan", "SelCompName", "Generic", "GenericSpec", "TaskIdent",
  "TaskSpec", "TaskBodyIdent", "TaskBody", "DecltivePart", "BasDeclItems",
  "BasDeclItem", "Body", "Stub", "GenJunk", "BasJunk", "SeqOfStmts",
  "Declare", "sJunk", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     104,    11,    29,    46,   -95,   383,   104,    33,    52,    74,
     -95,   -95,   -95,   -95,    57,    89,    18,   115,   -95,   -95,
     -95,   -95,   -95,    80,    14,   -95,   110,    68,   123,   -95,
     -95,   381,   127,   140,   -95,   155,   157,   -95,   -95,   -95,
     158,   -95,    -6,   159,   163,   156,   -95,   329,   329,   163,
     329,   -95,   -95,   -95,   -95,   -95,   120,   -95,   -95,   -95,
     -95,   -95,   -95,   272,   355,   -95,   -95,   -95,   -95,   -95,
     -95,    93,   165,   -95,   -95,    87,   172,    54,   111,    51,
     -95,    12,   173,   183,   -95,   -95,   185,   176,   188,   178,
     -95,   174,   329,   -95,   -95,   -95,   175,    92,   113,   -95,
     195,   -95,   -95,   272,   272,   272,   272,   272,   272,   -95,
     -95,    19,   329,   -95,   203,    82,   -95,   204,   -95,   -95,
     205,   207,   -95,   208,   -95,   -95,   209,   -95,   -95,   218,
     225,   -95,   -95,   226,   227,   -95,   -95,   303,   -95,   -95,
     -95,   303,   -95,   -95,   -95,   329,   -95,   303,   -95,   -95,
     -95,   234,   -95,   245,   -95,   246,    84,   117,   148,   179,
     210,   241,   117,   223,   -95,   174,   329,   -95,   -95,   -95,
     -95,   249,   175,   174,   -95,   -95,   -95,   251,   244,   255,
     231,   238,   230,   248,   277,   278,   -95,   -95,   -95,   -95,
     280,   282,   -95,   286,   287,   153,   288,   -95,   -95,   -95,
     292,   -95,   -95,   295,   -95,   -95,   -95,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,     8,     2,     0,     9,     0,    12,    13,
      14,    16,     1,     3,     0,     0,     0,     0,    49,     4,
       5,     6,     7,    32,     0,    22,     0,     0,     0,    23,
      21,     0,     0,     0,    10,     0,     0,    30,    31,    40,
       0,    28,     0,     0,     0,    33,    18,    59,    59,     0,
      59,    19,    89,    90,    91,    92,     0,    94,    86,    87,
      93,    82,    81,     0,     0,    79,    20,    11,    15,    17,
      41,     0,     0,    34,    47,     0,     0,     0,     0,     0,
      73,     0,     0,     0,    72,    65,     0,    55,     0,     0,
      74,     0,    58,    60,    68,    71,     0,     0,     0,    83,
       0,    99,    97,     0,     0,     0,     0,     0,     0,   107,
      98,     0,    59,    95,     0,    32,    50,     0,    51,    80,
       0,     0,    24,     0,    26,    25,     0,    27,    29,     0,
       0,    35,    52,     0,     0,    67,    62,    59,    70,    77,
      69,    59,    75,    64,    66,    59,    63,    59,    76,    36,
      61,    38,    42,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,    59,    45,    48,    56,
      53,     0,     0,     0,    39,    46,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,    78,    54,    57,
       0,     0,    37,     0,     0,     0,     0,   106,    88,    84,
       0,   101,   102,     0,   103,   105,    85,   104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   283,   -95,   -95,   -95,   310,   -95,    56,   -95,
     -95,   -95,   -95,   -95,   -51,     0,     1,   -89,   -94,     5,
       2,     6,     3,   309,   274,   -95,   316,   -95,   -95,   254,
     256,   -47,   -95,   250,   -95,    -7,   -95,   -31,   308,   -95,
     -72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    19,     5,     6,     7,     8,    78,    20,
      21,    22,   122,    42,    23,    79,    80,   109,   152,    81,
      82,    83,    84,    85,    75,    31,    86,    87,    88,    89,
      90,    91,    92,    93,    94,   139,    64,   110,   111,   112,
     113
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      65,    96,   149,    98,   155,    24,    25,    27,    29,   154,
      26,    28,    71,   115,    10,    72,    95,    95,    46,    95,
     115,    39,    52,    53,    54,    55,    56,    48,    49,    47,
     101,    40,    11,   119,    57,    58,    59,    34,   140,   164,
      60,   102,   103,   163,    61,    62,    12,    63,   104,   105,
     106,   107,   108,     1,     2,   136,     9,   132,    35,     9,
      37,    95,     9,   179,   116,   165,   137,   133,   184,   117,
     118,   123,   124,    27,   125,   142,   186,   138,   188,   134,
      36,    95,   148,    50,   189,   164,   164,   164,   164,   164,
     164,    43,    38,    43,    98,   177,    44,    45,   172,    45,
     173,   178,    14,    15,   129,   120,    95,   121,   130,   153,
      95,     1,     2,   130,    95,   135,    95,    36,    41,   173,
      52,    53,    54,    55,    56,    48,    49,    51,   101,    99,
     100,    66,    57,    58,    59,    95,   103,   151,    60,   102,
     103,   151,    61,    62,    67,    63,   104,   105,   106,   107,
     108,    52,    53,    54,    55,    56,   203,   204,    68,   101,
      69,    70,    73,    57,    58,    59,    74,    76,   128,    60,
     102,   103,   180,    61,    62,   131,    63,   104,   105,   106,
     107,   108,    52,    53,    54,    55,    56,   143,   141,   144,
     101,   145,   146,   147,    57,    58,    59,   103,   156,   151,
      60,   102,   103,   181,    61,    62,    39,    63,   104,   105,
     106,   107,   108,    52,    53,    54,    55,    56,    40,    48,
     133,   101,   167,    47,   166,    57,    58,    59,   168,   169,
     170,    60,   102,   103,   182,    61,    62,   174,    63,   104,
     105,   106,   107,   108,    52,    53,    54,    55,    56,   175,
     176,   185,   101,   187,   190,   191,    57,    58,    59,   192,
     193,   195,    60,   102,   103,   183,    61,    62,   194,    63,
     104,   105,   106,   107,   108,    52,    53,    54,    55,    56,
     196,   197,   198,   101,   199,   200,    13,    57,    58,    59,
     201,   202,   205,    60,   102,   103,   206,    61,    62,   207,
      63,   104,   105,   106,   107,   108,    52,    53,    54,    55,
      56,     2,    14,    15,    30,    16,    33,    77,    57,    58,
      59,    32,   171,    97,    60,   126,     0,   127,    61,    62,
      18,    63,    52,    53,    54,    55,    56,     2,    14,    15,
       0,    16,   150,    77,    57,    58,    59,     0,     0,     0,
      60,     0,     0,     0,    61,    62,    18,    63,    52,    53,
      54,    55,    56,     0,    14,    15,     0,   114,     0,     0,
      57,    58,    59,     0,     0,     0,    60,     0,     0,     0,
      61,    62,     0,    63,    52,    53,    54,    55,    56,     0,
       0,     0,    14,    15,     0,    16,    57,    58,    59,     0,
       0,     0,    60,    17,     0,     0,    61,    62,     0,    63,
      18,   157,   158,   159,   160,   161,   162
};

static const yytype_int16 yycheck[] =
{
      31,    48,    91,    50,    98,     5,     5,     5,     5,    98,
       5,     5,    18,    64,     3,    21,    47,    48,     4,    50,
      71,     3,     3,     4,     5,     6,     7,    15,    16,    15,
      11,    13,     3,    64,    15,    16,    17,     4,    26,   111,
      21,    22,    23,    24,    25,    26,     0,    28,    29,    30,
      31,    32,    33,     7,     8,     4,     0,     3,     6,     3,
       3,    92,     6,   157,    64,   112,    15,    13,   162,    64,
      64,    71,    71,    71,    71,    82,   165,    26,   172,    25,
       6,   112,    89,    15,   173,   157,   158,   159,   160,   161,
     162,    11,     3,    11,   141,    11,    16,    17,   145,    17,
     147,    17,     9,    10,    17,    12,   137,    14,    21,    17,
     141,     7,     8,    21,   145,     4,   147,     6,     3,   166,
       3,     4,     5,     6,     7,    15,    16,     4,    11,     9,
      10,     4,    15,    16,    17,   166,    23,    24,    21,    22,
      23,    24,    25,    26,     4,    28,    29,    30,    31,    32,
      33,     3,     4,     5,     6,     7,     3,     4,     3,    11,
       3,     3,     3,    15,    16,    17,     3,    11,     3,    21,
      22,    23,    24,    25,    26,     3,    28,    29,    30,    31,
      32,    33,     3,     4,     5,     6,     7,     4,    15,     4,
      11,    15,     4,    15,    15,    16,    17,    23,     3,    24,
      21,    22,    23,    24,    25,    26,     3,    28,    29,    30,
      31,    32,    33,     3,     4,     5,     6,     7,    13,    15,
      13,    11,     4,    15,    15,    15,    16,    17,     3,     3,
       3,    21,    22,    23,    24,    25,    26,     3,    28,    29,
      30,    31,    32,    33,     3,     4,     5,     6,     7,     4,
       4,    28,    11,     4,     3,    11,    15,    16,    17,     4,
      29,    31,    21,    22,    23,    24,    25,    26,    30,    28,
      29,    30,    31,    32,    33,     3,     4,     5,     6,     7,
      32,     4,     4,    11,     4,     3,     3,    15,    16,    17,
       4,     4,     4,    21,    22,    23,     4,    25,    26,     4,
      28,    29,    30,    31,    32,    33,     3,     4,     5,     6,
       7,     8,     9,    10,     5,    12,     6,    14,    15,    16,
      17,     5,    19,    49,    21,    71,    -1,    71,    25,    26,
      27,    28,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    92,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    12,    -1,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      25,    26,    -1,    28,     3,     4,     5,     6,     7,    -1,
      -1,    -1,     9,    10,    -1,    12,    15,    16,    17,    -1,
      -1,    -1,    21,    20,    -1,    -1,    25,    26,    -1,    28,
      27,   103,   104,   105,   106,   107,   108
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,    35,    36,    38,    39,    40,    41,    42,
       3,     3,     0,    36,     9,    10,    12,    20,    27,    37,
      43,    44,    45,    48,    49,    50,    53,    54,    55,    56,
      57,    59,    60,    40,     4,     6,     6,     3,     3,     3,
      13,     3,    47,    11,    16,    17,     4,    15,    15,    16,
      15,     4,     3,     4,     5,     6,     7,    15,    16,    17,
      21,    25,    26,    28,    70,    71,     4,     4,     3,     3,
       3,    18,    21,     3,     3,    58,    11,    14,    42,    49,
      50,    53,    54,    55,    56,    57,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    71,    65,    58,    65,     9,
      10,    11,    22,    23,    29,    30,    31,    32,    33,    51,
      71,    72,    73,    74,    12,    48,    49,    53,    55,    71,
      12,    14,    46,    49,    50,    56,    63,    64,     3,    17,
      21,     3,     3,    13,    25,     4,     4,    15,    26,    69,
      26,    15,    69,     4,     4,    15,     4,    15,    69,    51,
      67,    24,    52,    17,    51,    52,     3,    72,    72,    72,
      72,    72,    72,    24,    74,    65,    15,     4,     3,     3,
       3,    19,    65,    65,     3,     4,     4,    11,    17,    52,
      24,    24,    24,    24,    52,    28,    51,     4,    52,    51,
       3,    11,     4,    29,    30,    31,    32,     4,     4,     4,
       3,     4,     4,     3,     4,     4,     4,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    35,    36,    37,    37,    37,    38,    38,
      39,    39,    40,    40,    41,    41,    42,    42,    43,    43,
      43,    43,    43,    44,    45,    46,    46,    46,    47,    47,
      48,    48,    49,    49,    49,    49,    50,    51,    52,    52,
      53,    54,    55,    56,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    64,    65,    65,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    68,    69,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     0,     1,
       2,     3,     1,     1,     2,     3,     2,     3,     2,     2,
       2,     1,     1,     1,     4,     1,     1,     1,     1,     3,
       2,     2,     1,     2,     3,     4,     4,     4,     1,     2,
       2,     3,     4,     4,     5,     5,     5,     1,     3,     1,
       3,     3,     2,     3,     4,     1,     3,     4,     1,     0,
       1,     2,     2,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     1,     1,     1,     2,     2,     2,     3,     1,
       2,     1,     1,     2,     6,     7,     1,     1,     5,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     5,     5,     5,     6,     5,     4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 4: /* CompilationUnit: ContextClause Unit  */
#line 63 "adaparseyacc.y"
                        {
			    back_patch = 0;
                            begin_unit = 1;
			}
#line 1431 "y.tab.c"
    break;

  case 8: /* ContextClause: %empty  */
#line 75 "adaparseyacc.y"
                        {
			    sprintf (t_out,"NC:\n");
			    strcat (outbuf, t_out);
			}
#line 1440 "y.tab.c"
    break;

  case 14: /* WithClause: WITH IDENT  */
#line 91 "adaparseyacc.y"
                        {
			    sprintf (t_out,"W: %s\n", identstr);
			    strcat (outbuf, t_out);
			}
#line 1449 "y.tab.c"
    break;

  case 15: /* WithClause: WithClause COMMA IDENT  */
#line 96 "adaparseyacc.y"
                        {
			    sprintf (t_out,"W: %s\n", identstr);
			    strcat (outbuf, t_out);
			}
#line 1458 "y.tab.c"
    break;

  case 18: /* LibraryUnit: SubprSpec SEM_COL  */
#line 107 "adaparseyacc.y"
                        {
			    if (back_patch)
			    {
			        outbuf [back_patch] = 'S';
			        back_patch = 0;
			    }    	
			    sprintf (t_out,"U: SS:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1474 "y.tab.c"
    break;

  case 19: /* LibraryUnit: PackageSpec SEM_COL  */
#line 119 "adaparseyacc.y"
                        {
			    sprintf (t_out,"U: PS:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1485 "y.tab.c"
    break;

  case 20: /* LibraryUnit: GenericSpec SEM_COL  */
#line 126 "adaparseyacc.y"
                        {
			    sprintf (t_out,"U: GS:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1496 "y.tab.c"
    break;

  case 21: /* LibraryUnit: GenericInstan  */
#line 133 "adaparseyacc.y"
                        {
			    sprintf (t_out,"U: GI:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1507 "y.tab.c"
    break;

  case 22: /* LibraryUnit: SubprBody  */
#line 140 "adaparseyacc.y"
                        {
			    if (back_patch)
			    {
			        outbuf [back_patch] = 'B';
			        back_patch = 0;
			    }
			    sprintf (t_out,"U: SB:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1523 "y.tab.c"
    break;

  case 23: /* LibraryUnitBody: PackageBody  */
#line 155 "adaparseyacc.y"
                        {
			    sprintf (t_out,"U: PB:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1534 "y.tab.c"
    break;

  case 25: /* PSTBody: PackageBody  */
#line 167 "adaparseyacc.y"
                        {
			    sprintf (t_out,"SU: PB:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1545 "y.tab.c"
    break;

  case 26: /* PSTBody: SubprBody  */
#line 174 "adaparseyacc.y"
                        {
			    if (back_patch)
			    {
			        outbuf [back_patch] = 'B';
			        back_patch = 0;
			    }
			    sprintf (t_out,"SU: SB:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
 			}
#line 1561 "y.tab.c"
    break;

  case 27: /* PSTBody: TaskBody  */
#line 186 "adaparseyacc.y"
                        {
			    sprintf (t_out,"SU: TB:\n");
			    strcat (outbuf, t_out);
			    printf (outbuf);
			    outbuf[0] = 0;
			}
#line 1572 "y.tab.c"
    break;

  case 28: /* par_path: IDENT  */
#line 195 "adaparseyacc.y"
                        {
			    sprintf (t_out,"SN: %s\n", identstr);
			    strcat (outbuf, t_out);
			}
#line 1581 "y.tab.c"
    break;

  case 29: /* par_path: par_path DOT IDENT  */
#line 200 "adaparseyacc.y"
                        {
			    sprintf (t_out,"SN: %s\n", identstr);
			    strcat (outbuf, t_out);
			}
#line 1590 "y.tab.c"
    break;

  case 30: /* SubprName: PROCEDURE IDENT  */
#line 207 "adaparseyacc.y"
                        {
			    if (begin_unit || !globalf)
			    {
			        if (back_patch == 0)
			            back_patch = strlen (outbuf) + 1;
			        sprintf (t_out,"S : %s\n", identstr);
			        strcat (outbuf, t_out);
			        begin_unit = 0;
			    }
			}
#line 1605 "y.tab.c"
    break;

  case 31: /* SubprName: FUNCTION IDENT  */
#line 218 "adaparseyacc.y"
                        {
			    if (begin_unit || !globalf)
			    {
			        if (back_patch == 0)
			            back_patch = strlen (outbuf) + 1;
			        sprintf (t_out,"F : %s\n", identstr);
			        strcat (outbuf, t_out);
			        begin_unit = 0;
			    }
			}
#line 1620 "y.tab.c"
    break;

  case 40: /* PackIdent: PACKAGE IDENT  */
#line 247 "adaparseyacc.y"
                        {
			    if (begin_unit || !globalf)
			    {
			        sprintf (t_out,"PS: %s\n", identstr);
			        strcat (outbuf, t_out);
			        begin_unit = 0;
			    }
			}
#line 1633 "y.tab.c"
    break;

  case 41: /* PackBodyIdent: PACKAGE BODY IDENT  */
#line 258 "adaparseyacc.y"
                        {
			    if (begin_unit || !globalf)
			    {
			        sprintf (t_out,"PB: %s\n", identstr);
			        strcat (outbuf, t_out);
			        begin_unit = 0;
			    }
			}
#line 1646 "y.tab.c"
    break;

  case 49: /* Generic: GENERIC  */
#line 284 "adaparseyacc.y"
                        {
			    if (begin_unit || !globalf)
			    {
			        sprintf (t_out,"GN:");
			        strcat (outbuf, t_out);
				/* begin_unit hier NIET 0 zetten er volgt meer */
			    }
			}
#line 1659 "y.tab.c"
    break;

  case 52: /* TaskIdent: TASK IDENT  */
#line 299 "adaparseyacc.y"
                        {
                            if (!globalf)
                            {
			        sprintf (t_out,"TS: %s\n", identstr);
			        strcat (outbuf, t_out);
			    }
			}
#line 1671 "y.tab.c"
    break;

  case 53: /* TaskIdent: TASK TYPE IDENT  */
#line 307 "adaparseyacc.y"
                        {
                            if (!globalf)
                            {
			        sprintf (t_out,"TS: %s\n", identstr);
			        strcat (outbuf, t_out);
			    }
			}
#line 1683 "y.tab.c"
    break;

  case 56: /* TaskBodyIdent: TASK BODY IDENT  */
#line 321 "adaparseyacc.y"
                        {
                            if (!globalf || begin_unit)
                            {
			        sprintf (t_out,"TB: %s\n", identstr);
			        strcat (outbuf, t_out);
			        begin_unit = 0;
			    }
			}
#line 1696 "y.tab.c"
    break;

  case 62: /* BasDeclItem: SubprSpec SEM_COL  */
#line 343 "adaparseyacc.y"
                        {
                            if (!globalf)
                            {
			        sprintf (t_out,"L: SS:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1708 "y.tab.c"
    break;

  case 63: /* BasDeclItem: TaskSpec SEM_COL  */
#line 351 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: TS:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1720 "y.tab.c"
    break;

  case 64: /* BasDeclItem: PackageSpec SEM_COL  */
#line 359 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: PS:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1732 "y.tab.c"
    break;

  case 65: /* BasDeclItem: GenericInstan  */
#line 367 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: GI:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1744 "y.tab.c"
    break;

  case 66: /* BasDeclItem: GenericSpec SEM_COL  */
#line 375 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: GS:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1756 "y.tab.c"
    break;

  case 69: /* BasDeclItem: PackIdent RENAMES  */
#line 385 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"R:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1768 "y.tab.c"
    break;

  case 70: /* BasDeclItem: SubprSpec RENAMES  */
#line 393 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"R:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1780 "y.tab.c"
    break;

  case 72: /* Body: PackageBody  */
#line 404 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: PB:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1792 "y.tab.c"
    break;

  case 73: /* Body: SubprBody  */
#line 412 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: SB:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1804 "y.tab.c"
    break;

  case 74: /* Body: TaskBody  */
#line 420 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: TB:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1816 "y.tab.c"
    break;

  case 75: /* Body: PackBodyIdent Stub  */
#line 428 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: PB: ST:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1828 "y.tab.c"
    break;

  case 76: /* Body: TaskBodyIdent Stub  */
#line 436 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: TB: ST:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1840 "y.tab.c"
    break;

  case 77: /* Body: SubprSpec Stub  */
#line 444 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"L: SB: ST:\n");
			        strcat (outbuf, t_out);
			    }
			}
#line 1852 "y.tab.c"
    break;

  case 91: /* BasJunk: COLON  */
#line 474 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        /* bewaar laaste IDENT , kan declare label zijn */
			        strcpy (labelstr, identstr);
			    }
			}
#line 1864 "y.tab.c"
    break;

  case 97: /* Declare: DECLARE  */
#line 492 "adaparseyacc.y"
                        {
			    if (!globalf)
			    {
			        sprintf (t_out,"D: ");
			        strcat (outbuf, t_out);
			        if (strcmp (identstr, labelstr) == 0)
			        {
				    sprintf (t_out,"%s\n", labelstr);
				    strcat (outbuf, t_out);
			        }
			        else
			        {
				    sprintf (t_out,"\n");
				    strcat (outbuf, t_out);
			        }
			    }
			}
#line 1886 "y.tab.c"
    break;


#line 1890 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 523 "adaparseyacc.y"

#include "adaparselex.c"
