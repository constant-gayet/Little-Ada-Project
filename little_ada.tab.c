/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "little_ada.y"

void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>

#line 78 "little_ada.tab.c"

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

#include "little_ada.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DEFINE = 3,                     /* DEFINE  */
  YYSYMBOL_LEFT_QUOTE = 4,                 /* LEFT_QUOTE  */
  YYSYMBOL_RIGHT_QUOTE = 5,                /* RIGHT_QUOTE  */
  YYSYMBOL_RIGHT_ARROW = 6,                /* RIGHT_ARROW  */
  YYSYMBOL_DOUBLE_POINT = 7,               /* DOUBLE_POINT  */
  YYSYMBOL_REVERSE = 8,                    /* REVERSE  */
  YYSYMBOL_CHAR = 9,                       /* CHAR  */
  YYSYMBOL_LETTER = 10,                    /* LETTER  */
  YYSYMBOL_DIGIT = 11,                     /* DIGIT  */
  YYSYMBOL_EXIT = 12,                      /* EXIT  */
  YYSYMBOL_GOTO = 13,                      /* GOTO  */
  YYSYMBOL_RANGE = 14,                     /* RANGE  */
  YYSYMBOL_CONSTANT = 15,                  /* CONSTANT  */
  YYSYMBOL_TYPE = 16,                      /* TYPE  */
  YYSYMBOL_IS_RANGE = 17,                  /* IS_RANGE  */
  YYSYMBOL_SUBTYPE = 18,                   /* SUBTYPE  */
  YYSYMBOL_RENAMES = 19,                   /* RENAMES  */
  YYSYMBOL_PROCEDURE = 20,                 /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 21,                  /* FUNCTION  */
  YYSYMBOL_OUT = 22,                       /* OUT  */
  YYSYMBOL_IN_OUT = 23,                    /* IN_OUT  */
  YYSYMBOL_CASE = 24,                      /* CASE  */
  YYSYMBOL_END_CASE = 25,                  /* END_CASE  */
  YYSYMBOL_IS = 26,                        /* IS  */
  YYSYMBOL_WHEN = 27,                      /* WHEN  */
  YYSYMBOL_OTHER = 28,                     /* OTHER  */
  YYSYMBOL_THEN = 29,                      /* THEN  */
  YYSYMBOL_END_IF = 30,                    /* END_IF  */
  YYSYMBOL_IS_NULL = 31,                   /* IS_NULL  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_IN = 34,                        /* IN  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_ELSIF = 36,                     /* ELSIF  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_POWER = 39,                     /* POWER  */
  YYSYMBOL_NOT = 40,                       /* NOT  */
  YYSYMBOL_ABS = 41,                       /* ABS  */
  YYSYMBOL_MULTIPLY = 42,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 43,                    /* DIVIDE  */
  YYSYMBOL_MOD = 44,                       /* MOD  */
  YYSYMBOL_REM = 45,                       /* REM  */
  YYSYMBOL_ADD = 46,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 47,                  /* SUBTRACT  */
  YYSYMBOL_EQ = 48,                        /* EQ  */
  YYSYMBOL_NE = 49,                        /* NE  */
  YYSYMBOL_LE = 50,                        /* LE  */
  YYSYMBOL_GE = 51,                        /* GE  */
  YYSYMBOL_GT = 52,                        /* GT  */
  YYSYMBOL_LT = 53,                        /* LT  */
  YYSYMBOL_AND = 54,                       /* AND  */
  YYSYMBOL_OR = 55,                        /* OR  */
  YYSYMBOL_XOR = 56,                       /* XOR  */
  YYSYMBOL_AND_THEN = 57,                  /* AND_THEN  */
  YYSYMBOL_OR_ELSE = 58,                   /* OR_ELSE  */
  YYSYMBOL_LOOP = 59,                      /* LOOP  */
  YYSYMBOL_WHILE = 60,                     /* WHILE  */
  YYSYMBOL_END_LOOP = 61,                  /* END_LOOP  */
  YYSYMBOL_DEPART = 62,                    /* DEPART  */
  YYSYMBOL_END = 63,                       /* END  */
  YYSYMBOL_64_ = 64,                       /* ';'  */
  YYSYMBOL_65_ = 65,                       /* '.'  */
  YYSYMBOL_66___ = 66,                     /* '_'  */
  YYSYMBOL_67_E_ = 67,                     /* 'E'  */
  YYSYMBOL_68_e_ = 68,                     /* 'e'  */
  YYSYMBOL_69_ = 69,                       /* '#'  */
  YYSYMBOL_70_ = 70,                       /* '"'  */
  YYSYMBOL_71_ = 71,                       /* '('  */
  YYSYMBOL_72_ = 72,                       /* ')'  */
  YYSYMBOL_73_ = 73,                       /* ','  */
  YYSYMBOL_74_ = 74,                       /* ':'  */
  YYSYMBOL_75_ = 75,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_file = 77,                      /* file  */
  YYSYMBOL_identifiant = 78,               /* identifiant  */
  YYSYMBOL_identifiant_qualifie = 79,      /* identifiant_qualifie  */
  YYSYMBOL_constante = 80,                 /* constante  */
  YYSYMBOL_cte_decimale = 81,              /* cte_decimale  */
  YYSYMBOL_integer = 82,                   /* integer  */
  YYSYMBOL_exponent = 83,                  /* exponent  */
  YYSYMBOL_cte_base = 84,                  /* cte_base  */
  YYSYMBOL_based_integer = 85,             /* based_integer  */
  YYSYMBOL_cte_string = 86,                /* cte_string  */
  YYSYMBOL_string = 87,                    /* string  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_symbole = 89,                   /* symbole  */
  YYSYMBOL_expression_virgule = 90,        /* expression_virgule  */
  YYSYMBOL_instruction = 91,               /* instruction  */
  YYSYMBOL_seq_instructions = 92,          /* seq_instructions  */
  YYSYMBOL_affectation = 93,               /* affectation  */
  YYSYMBOL_appel_proc = 94,                /* appel_proc  */
  YYSYMBOL_boucle_simple = 95,             /* boucle_simple  */
  YYSYMBOL_boucle_tant_que = 96,           /* boucle_tant_que  */
  YYSYMBOL_boucle_pour_tout_in = 97,       /* boucle_pour_tout_in  */
  YYSYMBOL_boucle_pour_tout = 98,          /* boucle_pour_tout  */
  YYSYMBOL_conditionnelle = 99,            /* conditionnelle  */
  YYSYMBOL_else = 100,                     /* else  */
  YYSYMBOL_elsif = 101,                    /* elsif  */
  YYSYMBOL_choix = 102,                    /* choix  */
  YYSYMBOL_liste_choix = 103,              /* liste_choix  */
  YYSYMBOL_alternative = 104,              /* alternative  */
  YYSYMBOL_liste_alternative = 105,        /* liste_alternative  */
  YYSYMBOL_distinction_cas = 106,          /* distinction_cas  */
  YYSYMBOL_saut = 107,                     /* saut  */
  YYSYMBOL_etiquette = 108,                /* etiquette  */
  YYSYMBOL_exit = 109,                     /* exit  */
  YYSYMBOL_retour_proc = 110,              /* retour_proc  */
  YYSYMBOL_retour_fonction = 111,          /* retour_fonction  */
  YYSYMBOL_type = 112,                     /* type  */
  YYSYMBOL_declaration = 113,              /* declaration  */
  YYSYMBOL_declaration_objet = 114,        /* declaration_objet  */
  YYSYMBOL_identifiant_virgule = 115,      /* identifiant_virgule  */
  YYSYMBOL_constant = 116,                 /* constant  */
  YYSYMBOL_type_ou_null = 117,             /* type_ou_null  */
  YYSYMBOL_definition = 118,               /* definition  */
  YYSYMBOL_declaration_type = 119,         /* declaration_type  */
  YYSYMBOL_declaration_sous_type = 120,    /* declaration_sous_type  */
  YYSYMBOL_renommage = 121,                /* renommage  */
  YYSYMBOL_specification_procedure = 122,  /* specification_procedure  */
  YYSYMBOL_seq_parametres = 123,           /* seq_parametres  */
  YYSYMBOL_parametres = 124,               /* parametres  */
  YYSYMBOL_parametres1 = 125,              /* parametres1  */
  YYSYMBOL_mode = 126,                     /* mode  */
  YYSYMBOL_specification_fonction = 127,   /* specification_fonction  */
  YYSYMBOL_definition_procedure = 128,     /* definition_procedure  */
  YYSYMBOL_identifiant_qualifie_ou_null = 129, /* identifiant_qualifie_ou_null  */
  YYSYMBOL_seq_declarations = 130,         /* seq_declarations  */
  YYSYMBOL_definition_fonction = 131       /* definition_fonction  */
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
typedef yytype_int16 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   727

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
       2,     2,     2,     2,    70,    69,     2,     2,     2,     2,
      71,    72,     2,     2,    73,     2,    65,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,    64,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    67,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    66,     2,     2,     2,     2,
       2,    68,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    75,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    34,    37,    38,    40,    41,    44,    45,
      46,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    64,    65,    66,    67,    70,    71,
      72,    73,    74,    77,    78,    79,    82,    83,    84,    85,
      86,    87,    88,    89,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    94,    95,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   113,   114,   117,   120,
     121,   125,   126,   128,   129,   131,   132,   134,   135,   137,
     139,   140,   142,   143,   146,   147,   148,   151,   152,   155,
     157,   158,   160,   163,   164,   166,   167,   168,   171,   173,
     175,   176,   180,   181,   182,   183,   184,   185,   186,   187,
     190,   192,   193,   195,   196,   198,   199,   201,   202,   206,
     208,   210,   212,   215,   215,   216,   217,   217,   218,   218,
     218,   218,   221,   224,   226,   226,   227,   228,   231
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
  "\"end of file\"", "error", "\"invalid token\"", "DEFINE", "LEFT_QUOTE",
  "RIGHT_QUOTE", "RIGHT_ARROW", "DOUBLE_POINT", "REVERSE", "CHAR",
  "LETTER", "DIGIT", "EXIT", "GOTO", "RANGE", "CONSTANT", "TYPE",
  "IS_RANGE", "SUBTYPE", "RENAMES", "PROCEDURE", "FUNCTION", "OUT",
  "IN_OUT", "CASE", "END_CASE", "IS", "WHEN", "OTHER", "THEN", "END_IF",
  "IS_NULL", "RETURN", "FOR", "IN", "IF", "ELSIF", "ELSE", "ID", "POWER",
  "NOT", "ABS", "MULTIPLY", "DIVIDE", "MOD", "REM", "ADD", "SUBTRACT",
  "EQ", "NE", "LE", "GE", "GT", "LT", "AND", "OR", "XOR", "AND_THEN",
  "OR_ELSE", "LOOP", "WHILE", "END_LOOP", "DEPART", "END", "';'", "'.'",
  "'_'", "'E'", "'e'", "'#'", "'\"'", "'('", "')'", "','", "':'", "'|'",
  "$accept", "file", "identifiant", "identifiant_qualifie", "constante",
  "cte_decimale", "integer", "exponent", "cte_base", "based_integer",
  "cte_string", "string", "expression", "symbole", "expression_virgule",
  "instruction", "seq_instructions", "affectation", "appel_proc",
  "boucle_simple", "boucle_tant_que", "boucle_pour_tout_in",
  "boucle_pour_tout", "conditionnelle", "else", "elsif", "choix",
  "liste_choix", "alternative", "liste_alternative", "distinction_cas",
  "saut", "etiquette", "exit", "retour_proc", "retour_fonction", "type",
  "declaration", "declaration_objet", "identifiant_virgule", "constant",
  "type_ou_null", "definition", "declaration_type",
  "declaration_sous_type", "renommage", "specification_procedure",
  "seq_parametres", "parametres", "parametres1", "mode",
  "specification_fonction", "definition_procedure",
  "identifiant_qualifie_ou_null", "seq_declarations",
  "definition_fonction", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    59,    46,    95,    69,   101,    35,
      34,    40,    41,    44,    58,   124
};
#endif

#define YYPACT_NINF (-189)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-111)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     131,   -26,   -26,    22,  -189,  -189,   -50,   -37,   -37,  -189,
    -189,   -26,    11,    20,   -14,   -10,    37,    49,   176,   176,
     -26,   -26,  -189,   166,   -26,   -26,   -26,   -26,   176,  -189,
      62,  -189,  -189,  -189,  -189,  -189,  -189,    32,  -189,    34,
    -189,  -189,  -189,  -189,  -189,   -26,   121,    85,   -37,   -37,
    -189,    -2,   178,   178,  -189,    80,    44,   -26,   -19,   117,
    -189,    18,   140,   -26,   -26,   -29,    44,  -189,    94,   -26,
      44,   178,    44,    28,     1,   178,   108,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,   180,  -189,  -189,  -189,   159,
     -26,  -189,    44,    44,    44,   186,    44,   133,    80,  -189,
    -189,   101,  -189,  -189,   284,   148,  -189,   -26,    44,   -26,
    -189,   212,   214,  -189,   -25,   455,  -189,   535,   187,   485,
     165,   627,   -26,    44,   170,    44,  -189,    44,  -189,   -26,
     -26,   -26,  -189,   669,   669,   669,  -189,    -3,   421,    44,
    -189,   220,   220,   114,   129,   174,  -189,    44,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,    44,  -189,   134,   306,
     142,    44,   169,  -189,    44,  -189,   209,  -189,   231,   178,
     177,   178,   206,   648,   178,   558,   389,   171,    80,   182,
     185,   153,  -189,  -189,  -189,   172,   106,    -6,   220,   220,
      -6,   220,   220,    -6,  -189,  -189,    38,   581,   669,  -189,
      44,  -189,   669,  -189,   604,   116,   209,   225,    44,   215,
    -189,   191,   245,   178,   193,  -189,    44,   192,  -189,  -189,
     194,  -189,  -189,    -6,    -6,    -6,    -6,  -189,  -189,   174,
     174,   156,  -189,   669,  -189,  -189,   336,   183,   249,  -189,
     196,    14,   356,   202,  -189,    44,   226,   201,    44,   205,
     -26,  -189,  -189,   -26,    47,     5,  -189,    44,   116,   178,
    -189,    44,   178,   515,   178,   237,  -189,   211,   -26,   210,
     216,   156,   669,  -189,  -189,   669,   217,   178,  -189,   219,
     178,   221,  -189,  -189,  -189,   224,   226,  -189,   218,  -189,
    -189,   215,   -26,  -189,   228,  -189
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     2,     4,   133,   133,     1,
       5,     0,     0,     0,   121,   136,     0,     0,   146,   146,
       0,     0,   134,   138,     0,     0,     0,     0,   146,   112,
       0,   113,   114,   115,   116,   117,   118,     0,   119,     0,
     122,   137,   140,   141,   139,     0,     0,     0,   133,   133,
     147,   123,     0,     0,     7,   135,     0,     0,     0,     0,
     124,   110,     0,   125,     0,     0,     0,    64,     0,     0,
       0,     0,     0,     7,     0,    76,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    74,    75,     0,
       0,    15,     0,     0,     0,     0,     0,     7,    36,    37,
       8,    11,     9,    10,     0,     0,   132,     0,     0,     0,
     126,   127,     0,   105,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,    77,   144,
       0,     0,     6,    40,    39,    38,    34,     0,     0,     0,
      16,     0,     0,     0,     0,     0,    13,     0,    48,    46,
      47,    55,    56,    44,    45,    49,    50,    51,    52,    54,
      53,    57,    58,    59,    60,    61,     0,   130,     0,     0,
       0,     0,     0,   104,     0,   106,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,   145,     0,
       0,     0,    35,    33,    43,     0,    12,    17,     0,     0,
      18,     0,     0,    19,    29,    28,     0,     0,    41,   142,
       0,   131,   128,   120,     0,     0,   100,     0,     0,    92,
      81,     0,     0,     0,     0,    78,     0,     0,   143,   103,
       0,    42,    14,    22,    20,    23,    21,    31,    30,     0,
       0,    24,   129,   111,   107,    96,    94,    97,     0,   101,
       0,    36,     0,     0,    86,     0,    90,     0,     0,     0,
       0,    63,    80,   144,     0,    32,    26,     0,     0,     0,
     102,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,    25,    95,    98,    99,    85,     0,     0,    91,     0,
       0,     0,    82,   148,    27,     0,    90,    89,     0,    83,
      87,    92,     0,    93,     0,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,  -189,    -1,    24,  -189,  -189,  -101,  -188,  -189,    -5,
    -189,  -189,    54,  -189,  -136,  -189,   -42,  -189,  -189,  -189,
    -189,    17,  -189,  -189,   -20,   -17,  -189,    13,  -189,    74,
    -189,  -189,  -189,  -189,  -189,  -189,    29,  -189,  -189,    10,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,    70,  -189,   273,
    -189,  -189,   295,    36,    19,   297
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    97,    98,    99,   100,   101,   146,   102,   206,
     103,   137,   186,   166,   187,    75,    76,    77,    78,    79,
      80,   253,    81,    82,   275,   256,   247,   248,   216,   217,
      83,    84,    85,    86,    87,    88,   254,    28,    29,    30,
      63,   111,   172,    31,    32,    33,    34,    12,    16,    17,
      45,    35,    36,   189,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,     8,   174,   195,   125,   140,   192,    18,   232,     6,
      14,    89,     6,    60,    10,   237,   238,    14,    14,    14,
      14,    15,     9,    46,    47,    48,    49,    14,   108,   120,
      40,    15,   108,   128,    11,   113,     6,    18,    39,   175,
     196,   197,   200,   203,    54,   106,    19,    50,   237,   238,
      54,    73,    73,   266,    21,    91,    54,   237,   238,    20,
     142,   122,    54,   112,   114,   126,    90,   193,   118,    55,
      73,   240,   127,  -110,    73,    61,    74,    74,    13,    90,
      62,    61,     6,    90,    92,    93,   105,    61,   123,   132,
     261,    94,   110,   294,    52,    74,    53,   233,   234,    74,
     235,   236,   124,   239,   240,    91,    54,   241,    54,    22,
     104,    57,   140,   240,    95,    96,   281,   140,    58,    59,
     115,   182,   117,    23,   119,    91,   121,    91,    54,   190,
      54,   168,     6,   170,    92,    93,    51,   219,    56,   221,
      91,    94,   224,    19,   245,    90,   133,   134,   135,   107,
     138,     1,     2,   188,     6,   191,    92,    93,   116,   109,
     198,   199,   169,    94,    95,    96,   141,   142,   143,   144,
     145,   129,   142,   143,   144,   201,   202,   183,    73,   185,
      73,   259,    64,    73,   204,   205,    95,    96,    42,    43,
      65,   131,    24,   130,    25,   136,    26,    27,   209,    90,
      44,   207,    66,    74,   139,    74,   211,    90,    74,    67,
      68,    69,   167,    70,     6,   171,     6,   230,    90,   173,
     208,   178,    73,   143,   144,   212,   180,   284,   214,   184,
     286,    91,   288,   213,   264,   265,   215,    71,    72,   218,
     222,   220,   251,   227,   231,   296,   228,    74,   298,   229,
     250,   255,   257,   258,   260,   269,   262,   263,   268,   279,
     270,   272,    54,   274,   243,   276,   278,   289,    73,   246,
     290,    73,   252,    73,   292,   277,   301,   291,   295,   302,
     293,   283,   251,   297,   303,   299,    73,   188,   300,    73,
     249,   147,   305,    74,    41,     4,    74,     5,    74,   280,
       0,   304,     0,     0,     0,     0,     0,     0,     0,   273,
       0,    74,   252,   210,    74,     0,     0,     0,     0,     0,
       0,   282,   246,   148,     0,   285,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   267,     0,   148,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   148,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   148,     0,
     271,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,   226,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   194,   148,     0,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   148,     0,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   148,     0,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   148,     0,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,     0,     0,     0,   148,     0,   177,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,     0,     0,     0,
     148,     0,   225,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
       0,     0,     0,   148,     0,   242,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,     0,     0,     0,   148,     0,   244,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   181,   148,     0,     0,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   223,   148,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165
};

static const yytype_int16 yycheck[] =
{
       1,     2,    27,   139,     3,    11,     9,    26,   196,    38,
      11,    53,    38,    15,    64,    10,    11,    18,    19,    20,
      21,    11,     0,    24,    25,    26,    27,    28,    14,    71,
      20,    21,    14,    75,    71,    64,    38,    26,    19,    64,
     141,   142,   143,   144,    45,    64,    26,    28,    10,    11,
      51,    52,    53,   241,    64,    11,    57,    10,    11,    73,
      66,    33,    63,    64,    65,    64,    65,    70,    69,    45,
      71,    66,    71,    59,    75,    51,    52,    53,     8,    65,
      51,    57,    38,    65,    40,    41,    57,    63,    60,    90,
     226,    47,    63,   281,    62,    71,    62,   198,   199,    75,
     201,   202,    74,    65,    66,    11,   107,    69,   109,    72,
      56,    26,    11,    66,    70,    71,    69,    11,    48,    49,
      66,   122,    68,    74,    70,    11,    72,    11,   129,   130,
     131,   107,    38,   109,    40,    41,    74,   179,    17,   181,
      11,    47,   184,    26,    28,    65,    92,    93,    94,    32,
      96,    20,    21,   129,    38,   131,    40,    41,    64,    19,
      46,    47,   108,    47,    70,    71,    65,    66,    67,    68,
      69,    63,    66,    67,    68,    46,    47,   123,   179,   125,
     181,   223,     4,   184,    10,    11,    70,    71,    22,    23,
      12,    32,    16,    13,    18,     9,    20,    21,    64,    65,
      34,   147,    24,   179,    71,   181,    64,    65,   184,    31,
      32,    33,    64,    35,    38,     3,    38,    64,    65,     5,
     166,    34,   223,    67,    68,   171,    61,   269,   174,    59,
     272,    11,   274,    64,   239,   240,    27,    59,    60,     8,
      34,    64,   218,    72,    72,   287,    64,   223,   290,    64,
      25,    36,    61,     8,    61,     6,    64,    63,    75,   260,
      64,    59,   263,    37,   210,    64,    61,    30,   269,   215,
      59,   272,   218,   274,    64,   258,   296,   278,    61,    61,
      64,   268,   258,    64,   301,    64,   287,   263,    64,   290,
     216,     7,    64,   269,    21,     0,   272,     0,   274,   263,
      -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,   287,   258,     7,   290,    -1,    -1,    -1,    -1,    -1,
      -1,   267,   268,    39,    -1,   271,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     7,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      74,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    73,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    39,    -1,    64,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      39,    -1,    64,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    39,    -1,    64,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    39,    -1,    64,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    21,    77,   128,   131,    38,    78,    78,     0,
      64,    71,   123,   123,    78,   115,   124,   125,    26,    26,
      73,    64,    72,    74,    16,    18,    20,    21,   113,   114,
     115,   119,   120,   121,   122,   127,   128,   130,   131,   130,
     115,   125,    22,    23,    34,   126,    78,    78,    78,    78,
     130,    74,    62,    62,    78,    79,    17,    26,   123,   123,
      15,    79,   112,   116,     4,    12,    24,    31,    32,    33,
      35,    59,    60,    78,    79,    91,    92,    93,    94,    95,
      96,    98,    99,   106,   107,   108,   109,   110,   111,    92,
      65,    11,    40,    41,    47,    70,    71,    78,    79,    80,
      81,    82,    84,    86,    88,   112,    64,    32,    14,    19,
     112,   117,    78,    64,    78,    88,    64,    88,    78,    88,
      92,    88,    33,    60,    74,     3,    64,    71,    92,    63,
      13,    32,    78,    88,    88,    88,     9,    87,    88,    71,
      11,    65,    66,    67,    68,    69,    83,     7,    39,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    89,    64,    79,    88,
      79,     3,   118,     5,    27,    64,    26,    64,    34,    29,
      61,    59,    78,    88,    59,    88,    88,    90,    79,   129,
      78,    79,     9,    70,    72,    90,    82,    82,    46,    47,
      82,    46,    47,    82,    10,    11,    85,    88,    88,    64,
       7,    64,    88,    64,    88,    27,   104,   105,     8,    92,
      64,    92,    34,    59,    92,    64,    73,    72,    64,    64,
      64,    72,    83,    82,    82,    82,    82,    10,    11,    65,
      66,    69,    64,    88,    64,    28,    88,   102,   103,   105,
      25,    79,    88,    97,   112,    36,   101,    61,     8,    92,
      61,    90,    64,    63,    85,    85,    83,     7,    75,     6,
      64,    74,    59,    88,    37,   100,    64,    97,    61,    78,
     129,    69,    88,   103,    92,    88,    92,    29,    92,    30,
      59,    78,    64,    64,    83,    61,    92,    64,    92,    64,
      64,   100,    61,   101,    78,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      80,    81,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    86,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
     100,   100,   101,   101,   102,   102,   102,   103,   103,   104,
     105,   105,   106,   107,   108,   109,   109,   109,   110,   111,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     120,   121,   122,   123,   123,   124,   125,   125,   126,   126,
     126,   126,   127,   128,   129,   129,   130,   130,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     3,     2,     4,     1,     2,     3,     2,     2,
       3,     3,     3,     3,     4,     6,     5,     7,     1,     1,
       2,     2,     3,     3,     1,     2,     1,     1,     2,     2,
       2,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     2,
       5,     4,     7,     8,     6,     3,     1,     9,    11,     8,
       0,     2,     0,     6,     1,     3,     1,     1,     3,     4,
       1,     2,     6,     4,     3,     2,     3,     5,     2,     3,
       1,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     1,     3,     0,     1,     0,     1,     0,     2,     7,
       5,     6,     4,     0,     3,     4,     1,     3,     0,     1,
       1,     1,     6,    10,     0,     1,     0,     2,    13
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* file: definition_fonction  */
#line 33 "little_ada.y"
                                   {printf("Analisis started successfully");}
#line 1511 "little_ada.tab.c"
    break;

  case 3: /* file: definition_procedure  */
#line 34 "little_ada.y"
                                   {printf("Analisis started successfully");}
#line 1517 "little_ada.tab.c"
    break;

  case 4: /* identifiant: ID  */
#line 37 "little_ada.y"
                        {printf("coucou je suis passé par là");}
#line 1523 "little_ada.tab.c"
    break;

  case 5: /* identifiant: ID ';'  */
#line 38 "little_ada.y"
                         {printf("coucou je suis passé par là");}
#line 1529 "little_ada.tab.c"
    break;

  case 123: /* constant: %empty  */
#line 195 "little_ada.y"
                    {printf("Empty constant");}
#line 1535 "little_ada.tab.c"
    break;

  case 125: /* type_ou_null: %empty  */
#line 198 "little_ada.y"
                     {printf("Empty type");}
#line 1541 "little_ada.tab.c"
    break;

  case 127: /* definition: %empty  */
#line 201 "little_ada.y"
                    {printf("Empty declaration");}
#line 1547 "little_ada.tab.c"
    break;

  case 132: /* specification_procedure: PROCEDURE identifiant seq_parametres ';'  */
#line 212 "little_ada.y"
                                                                              {printf("blalala");}
#line 1553 "little_ada.tab.c"
    break;

  case 143: /* definition_procedure: PROCEDURE identifiant seq_parametres IS seq_declarations DEPART seq_instructions END identifiant_qualifie_ou_null ';'  */
#line 224 "little_ada.y"
                                                                                                                                           {printf("definition_procedure");}
#line 1559 "little_ada.tab.c"
    break;


#line 1563 "little_ada.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 233 "little_ada.y"

extern int countn;

int main() {
    yyparse(); //lancer l'analyse syntaxique
}


void yyerror(char* s) {
    fprintf(stderr, "On line %d : %s on object \n %s", countn, s, yylval.nd_obj.name); 
}
