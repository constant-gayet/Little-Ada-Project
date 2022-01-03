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
  YYSYMBOL_REVERSE = 3,                    /* REVERSE  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_LETTER = 5,                     /* LETTER  */
  YYSYMBOL_DIGIT = 6,                      /* DIGIT  */
  YYSYMBOL_EXIT = 7,                       /* EXIT  */
  YYSYMBOL_GOTO = 8,                       /* GOTO  */
  YYSYMBOL_RANGE = 9,                      /* RANGE  */
  YYSYMBOL_CONSTANT = 10,                  /* CONSTANT  */
  YYSYMBOL_TYPE = 11,                      /* TYPE  */
  YYSYMBOL_IS_RANGE = 12,                  /* IS_RANGE  */
  YYSYMBOL_SUBTYPE = 13,                   /* SUBTYPE  */
  YYSYMBOL_RENAMES = 14,                   /* RENAMES  */
  YYSYMBOL_PROCEDURE = 15,                 /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 16,                  /* FUNCTION  */
  YYSYMBOL_OUT = 17,                       /* OUT  */
  YYSYMBOL_IN_OUT = 18,                    /* IN_OUT  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_END_CASE = 20,                  /* END_CASE  */
  YYSYMBOL_IS = 21,                        /* IS  */
  YYSYMBOL_WHEN = 22,                      /* WHEN  */
  YYSYMBOL_OTHER = 23,                     /* OTHER  */
  YYSYMBOL_THEN = 24,                      /* THEN  */
  YYSYMBOL_END_IF = 25,                    /* END_IF  */
  YYSYMBOL_IS_NULL = 26,                   /* IS_NULL  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_IN = 29,                        /* IN  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSIF = 31,                     /* ELSIF  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_ID = 33,                        /* ID  */
  YYSYMBOL_POWER = 34,                     /* POWER  */
  YYSYMBOL_NOT = 35,                       /* NOT  */
  YYSYMBOL_ABS = 36,                       /* ABS  */
  YYSYMBOL_MULTIPLY = 37,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 38,                    /* DIVIDE  */
  YYSYMBOL_MOD = 39,                       /* MOD  */
  YYSYMBOL_REM = 40,                       /* REM  */
  YYSYMBOL_ADD = 41,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 42,                  /* SUBTRACT  */
  YYSYMBOL_EQ = 43,                        /* EQ  */
  YYSYMBOL_NE = 44,                        /* NE  */
  YYSYMBOL_LE = 45,                        /* LE  */
  YYSYMBOL_GE = 46,                        /* GE  */
  YYSYMBOL_GT = 47,                        /* GT  */
  YYSYMBOL_LT = 48,                        /* LT  */
  YYSYMBOL_AND = 49,                       /* AND  */
  YYSYMBOL_OR = 50,                        /* OR  */
  YYSYMBOL_XOR = 51,                       /* XOR  */
  YYSYMBOL_AND_THEN = 52,                  /* AND_THEN  */
  YYSYMBOL_OR_ELSE = 53,                   /* OR_ELSE  */
  YYSYMBOL_LOOP = 54,                      /* LOOP  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_END_LOOP = 56,                  /* END_LOOP  */
  YYSYMBOL_BEGAN = 57,                     /* BEGAN  */
  YYSYMBOL_END = 58,                       /* END  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_60___ = 60,                     /* '_'  */
  YYSYMBOL_61_E_ = 61,                     /* 'E'  */
  YYSYMBOL_62_e_ = 62,                     /* 'e'  */
  YYSYMBOL_63_ = 63,                       /* '#'  */
  YYSYMBOL_64_ = 64,                       /* '"'  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* ":="  */
  YYSYMBOL_69_ = 69,                       /* ';'  */
  YYSYMBOL_70_ = 70,                       /* ':'  */
  YYSYMBOL_71_ = 71,                       /* ".."  */
  YYSYMBOL_72_ = 72,                       /* '|'  */
  YYSYMBOL_73_ = 73,                       /* "=>"  */
  YYSYMBOL_74_ = 74,                       /* "<<"  */
  YYSYMBOL_75_ = 75,                       /* ">>"  */
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
#define YYLAST   784

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
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
       2,     2,     2,     2,    64,    63,     2,     2,     2,     2,
      65,    66,     2,     2,    67,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    69,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    61,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    60,     2,     2,     2,     2,
       2,    62,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    72,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    68,    71,    73,    74,    75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    35,    38,    40,    41,    44,    45,    46,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    64,    65,    66,    67,    70,    71,    72,
      73,    74,    77,    78,    79,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    96,    97,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   115,   115,   118,
     121,   122,   126,   127,   129,   130,   132,   133,   135,   136,
     138,   140,   141,   143,   144,   145,   148,   149,   150,   153,
     154,   157,   159,   160,   162,   165,   166,   168,   169,   170,
     173,   175,   177,   178,   182,   183,   184,   185,   186,   187,
     188,   189,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   199,   201,   203,   205,   207,   207,   208,   209,   209,
     210,   210,   210,   210,   213,   216,   217,   217,   218,   218,
     218,   220
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
  "\"end of file\"", "error", "\"invalid token\"", "REVERSE", "CHAR",
  "LETTER", "DIGIT", "EXIT", "GOTO", "RANGE", "CONSTANT", "TYPE",
  "IS_RANGE", "SUBTYPE", "RENAMES", "PROCEDURE", "FUNCTION", "OUT",
  "IN_OUT", "CASE", "END_CASE", "IS", "WHEN", "OTHER", "THEN", "END_IF",
  "IS_NULL", "RETURN", "FOR", "IN", "IF", "ELSIF", "ELSE", "ID", "POWER",
  "NOT", "ABS", "MULTIPLY", "DIVIDE", "MOD", "REM", "ADD", "SUBTRACT",
  "EQ", "NE", "LE", "GE", "GT", "LT", "AND", "OR", "XOR", "AND_THEN",
  "OR_ELSE", "LOOP", "WHILE", "END_LOOP", "BEGAN", "END", "'.'", "'_'",
  "'E'", "'e'", "'#'", "'\"'", "'('", "')'", "','", "\":=\"", "';'", "':'",
  "\"..\"", "'|'", "\"=>\"", "\"<<\"", "\">>\"", "$accept", "file",
  "identifiant", "identifiant_qualifie", "constante", "cte_decimale",
  "integer", "exponent", "cte_base", "based_integer", "cte_string",
  "string", "expression", "symbole", "expression_virgule", "instruction",
  "seq_instructions", "affectation", "appel_proc", "boucle_simple",
  "boucle_tant_que", "boucle_pour_tout_in", "boucle_pour_tout",
  "conditionnelle", "else", "elsif", "choix", "liste_choix", "alternative",
  "liste_alternative", "distinction_cas", "saut", "etiquette", "exit",
  "retour_proc", "retour_fonction", "type", "declaration",
  "declaration_objet", "identifiant_virgule", "constant", "type_ou_null",
  "definition", "declaration_type", "declaration_sous_type", "renommage",
  "specification_procedure", "seq_parametres", "parametres", "parametres1",
  "mode", "specification_fonction", "definition_procedure",
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,    46,
      95,    69,   101,    35,    34,    40,    41,    44,   314,    59,
      58,   315,   124,   316,   317,   318
};
#endif

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-113)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      44,   -26,   -26,    37,  -190,  -190,  -190,   -50,   -50,  -190,
     -26,    14,    59,    28,    31,    32,    36,   259,   259,   -26,
     -26,  -190,    29,   -26,   -26,   -26,   -26,   259,  -190,    48,
    -190,  -190,  -190,  -190,  -190,  -190,    45,  -190,    64,  -190,
    -190,  -190,  -190,  -190,   -26,   113,   109,   -50,   -50,  -190,
      -2,   131,   131,  -190,    90,   174,   -26,     9,    -7,  -190,
      12,   137,   -26,     3,   174,  -190,    21,   -26,   174,   131,
     174,   -26,    46,   122,   131,    96,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,   152,  -190,  -190,  -190,   136,   -26,
    -190,   174,   174,   174,   166,   174,   110,    90,  -190,  -190,
     192,  -190,  -190,   284,   108,  -190,   -26,   174,   -26,  -190,
     111,  -190,    10,   589,  -190,   423,   164,   639,   143,   689,
     125,   -26,   174,   147,   174,   174,  -190,  -190,   -26,   -26,
     -26,  -190,   731,   731,   731,  -190,     0,   609,   174,  -190,
     200,   200,   106,   189,    35,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   174,   174,   174,   174,  -190,    63,   319,    67,
     174,  -190,   174,  -190,   193,  -190,   214,   131,   149,   131,
    -190,   191,   710,   131,   555,   157,   456,    90,   155,   158,
      93,  -190,  -190,  -190,   162,    22,     7,   200,   200,     7,
     200,   200,     7,  -190,  -190,   129,   731,   731,   489,   731,
    -190,   174,  -190,   731,   522,   161,   193,   213,   174,   204,
    -190,   180,   234,   131,   184,   174,   172,  -190,  -190,  -190,
     186,  -190,  -190,     7,     7,     7,     7,  -190,  -190,    35,
      35,    84,  -190,   731,  -190,  -190,   354,   170,   173,  -190,
     176,    -6,   389,   195,  -190,   174,   224,   188,   174,   202,
     -26,  -190,  -190,   -26,    33,     5,  -190,   174,   161,   131,
    -190,   174,   131,   669,   131,   236,  -190,   209,   -26,   196,
     197,    84,   731,  -190,  -190,   731,   220,   131,  -190,   210,
     131,   211,  -190,  -190,  -190,   212,   224,  -190,   222,  -190,
    -190,   204,   -26,  -190,   215,  -190
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     2,     4,   135,   135,     1,
       0,     0,     0,   123,   138,     0,     0,   148,   148,     0,
       0,   136,   140,     0,     0,     0,     0,   148,   114,     0,
     115,   116,   117,   118,   119,   120,     0,   121,     0,   124,
     139,   142,   143,   141,     0,     0,     0,   135,   135,   150,
     125,     0,     0,     6,   137,     0,     0,     0,     0,   126,
     112,     0,   127,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     6,     0,    77,     0,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,    76,     0,     0,
      14,     0,     0,     0,     0,     0,     6,    35,    36,     7,
      10,     8,     9,     0,     0,   134,     0,     0,     0,   128,
     129,   107,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    78,   146,     0,
       0,     5,    39,    38,    37,    33,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    12,    49,    47,    48,    56,
      57,    45,    46,    50,    51,    52,    53,    55,    54,    58,
      59,    60,     0,     0,     0,     0,   132,     0,     0,     0,
       0,   122,     0,   108,     0,   111,     0,     0,     0,     0,
     106,     0,     0,     0,    63,     0,     0,   147,     0,     0,
       0,    34,    32,    44,     0,    11,    16,     0,     0,    17,
       0,     0,    18,    28,    27,     0,    41,    42,     0,    40,
     144,     0,   133,   130,     0,     0,   102,     0,     0,    93,
      82,     0,     0,     0,     0,     0,     0,    79,   145,   105,
       0,    43,    13,    21,    19,    22,    20,    30,    29,     0,
       0,    23,   131,   113,   109,    98,    96,    99,     0,   103,
       0,    35,     0,     0,    87,     0,    91,     0,     0,     0,
       0,    64,    81,   146,     0,    31,    25,     0,     0,     0,
     104,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,    24,    97,   100,   101,    86,     0,     0,    92,     0,
       0,     0,    83,   151,    26,     0,    91,    90,     0,    84,
      88,    93,     0,    95,     0,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,    -1,    25,  -190,  -190,   -32,  -189,  -190,   -67,
    -190,  -190,    49,  -190,  -136,  -190,   -40,  -190,  -190,  -190,
    -190,    11,  -190,  -190,   -14,   -16,  -190,    19,  -190,    74,
    -190,  -190,  -190,  -190,  -190,  -190,    41,  -190,  -190,   104,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,    -3,  -190,   271,
    -190,  -190,   293,    39,    15,   295
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    96,    97,    98,    99,   100,   145,   101,   205,
     102,   136,   184,   165,   185,    74,    75,    76,    77,    78,
      79,   253,    80,    81,   275,   256,   247,   248,   216,   217,
      82,    83,    84,    85,    86,    87,   254,    27,    28,    29,
      62,   110,   171,    30,    31,    32,    33,    11,    15,    16,
      44,    34,    35,   188,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,     8,   194,   107,   191,    12,   232,     6,    59,    13,
     237,   238,    88,   139,    18,    10,    13,    13,    13,    13,
     106,   107,    45,    46,    47,    48,    13,    90,   139,   118,
      17,     6,   172,    38,   127,    17,     6,     9,   237,   238,
     203,   204,    49,    53,    57,    58,    41,    42,  -112,    53,
      72,    72,   266,    89,     6,    53,    91,    92,    43,     1,
       2,    53,   112,    93,   192,   240,   116,   141,    72,    54,
     120,    89,   111,    72,   121,    60,    73,    73,   105,   173,
      18,    60,   141,   142,   143,    94,    95,    60,   131,   261,
     114,    61,   294,   240,    73,    19,   281,   104,    21,    73,
      20,   122,    51,   109,   103,    53,    22,    53,   195,   196,
     199,   202,    90,   113,    14,   115,   123,   117,    50,   119,
     181,    52,    89,    39,    14,    55,    89,    53,   189,    53,
      56,   167,   210,   169,   237,   238,   212,   219,    63,   221,
     132,   133,   134,   224,   137,   142,   143,   197,   198,    89,
      64,   108,    89,   187,   128,   190,   168,    65,    66,    67,
     129,    68,   230,   130,     6,   233,   234,    90,   235,   236,
     135,   182,   264,   265,   186,   138,    72,   166,    72,   170,
      90,    89,    72,   259,   245,    69,    70,   124,   239,   240,
     125,   126,   241,   176,     6,    90,    91,    92,   139,   178,
     180,   183,    73,    93,    73,    71,    90,     6,    73,    91,
      92,   206,   207,   208,   209,   215,    93,   218,   220,   213,
     222,   214,    72,   226,   228,    94,    95,   229,   231,   284,
     200,   201,   286,   250,   288,   255,   257,   258,    94,    95,
     260,   262,   268,   251,   263,   270,   269,   296,    73,   272,
     298,   140,   141,   142,   143,   144,   274,   276,   278,   279,
     243,   289,    53,   290,   246,   292,   293,   252,    72,   277,
      23,    72,    24,    72,    25,    26,   295,   291,   302,   297,
     299,   300,   301,   251,   305,   303,    72,   283,   187,    72,
     249,    40,     6,     4,    73,     5,     0,    73,     0,    73,
       0,   304,   280,     0,   273,     0,     0,   252,     0,     0,
       0,     0,    73,     0,     0,    73,   282,   246,   146,     0,
     285,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,   164,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
     211,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,   267,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,   271,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,     0,   175,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,   227,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,   242,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,   244,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   146,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   146,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,   193,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   287,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   146,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   146,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   179,   146,     0,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   223,   146,     0,     0,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163
};

static const yytype_int16 yycheck[] =
{
       1,     2,   138,     9,     4,     8,   195,    33,    10,    10,
       5,     6,    52,     6,    21,    65,    17,    18,    19,    20,
      27,     9,    23,    24,    25,    26,    27,     6,     6,    69,
      21,    33,    22,    18,    74,    21,    33,     0,     5,     6,
       5,     6,    27,    44,    47,    48,    17,    18,    54,    50,
      51,    52,   241,    59,    33,    56,    35,    36,    29,    15,
      16,    62,    63,    42,    64,    60,    67,    60,    69,    44,
      71,    59,    69,    74,    28,    50,    51,    52,    69,    69,
      21,    56,    60,    61,    62,    64,    65,    62,    89,   225,
      69,    50,   281,    60,    69,    67,    63,    56,    66,    74,
      69,    55,    57,    62,    55,   106,    70,   108,   140,   141,
     142,   143,     6,    64,    10,    66,    70,    68,    70,    70,
     121,    57,    59,    19,    20,    12,    59,   128,   129,   130,
      21,   106,    69,   108,     5,     6,    69,   177,     7,   179,
      91,    92,    93,   183,    95,    61,    62,    41,    42,    59,
      19,    14,    59,   128,    58,   130,   107,    26,    27,    28,
       8,    30,    69,    27,    33,   197,   198,     6,   200,   201,
       4,   122,   239,   240,   125,    65,   177,    69,   179,    68,
       6,    59,   183,   223,    23,    54,    55,    65,    59,    60,
      68,    69,    63,    29,    33,     6,    35,    36,     6,    56,
      75,    54,   177,    42,   179,    74,     6,    33,   183,    35,
      36,   162,   163,   164,   165,    22,    42,     3,    69,   170,
      29,   172,   223,    66,    69,    64,    65,    69,    66,   269,
      41,    42,   272,    20,   274,    31,    56,     3,    64,    65,
      56,    69,    72,   218,    58,    69,    73,   287,   223,    54,
     290,    59,    60,    61,    62,    63,    32,    69,    56,   260,
     211,    25,   263,    54,   215,    69,    69,   218,   269,   258,
      11,   272,    13,   274,    15,    16,    56,   278,    56,    69,
      69,    69,   296,   258,    69,   301,   287,   268,   263,   290,
     216,    20,    33,     0,   269,     0,    -1,   272,    -1,   274,
      -1,   302,   263,    -1,   255,    -1,    -1,   258,    -1,    -1,
      -1,    -1,   287,    -1,    -1,   290,   267,   268,    34,    -1,
     271,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    71,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      71,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    71,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    70,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    69,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    69,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    69,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    69,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    34,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    34,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    66,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    34,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    34,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    34,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    16,    77,   128,   131,    33,    78,    78,     0,
      65,   123,   123,    78,   115,   124,   125,    21,    21,    67,
      69,    66,    70,    11,    13,    15,    16,   113,   114,   115,
     119,   120,   121,   122,   127,   128,   130,   131,   130,   115,
     125,    17,    18,    29,   126,    78,    78,    78,    78,   130,
      70,    57,    57,    78,    79,    12,    21,   123,   123,    10,
      79,   112,   116,     7,    19,    26,    27,    28,    30,    54,
      55,    74,    78,    79,    91,    92,    93,    94,    95,    96,
      98,    99,   106,   107,   108,   109,   110,   111,    92,    59,
       6,    35,    36,    42,    64,    65,    78,    79,    80,    81,
      82,    84,    86,    88,   112,    69,    27,     9,    14,   112,
     117,    69,    78,    88,    69,    88,    78,    88,    92,    88,
      78,    28,    55,    70,    65,    68,    69,    92,    58,     8,
      27,    78,    88,    88,    88,     4,    87,    88,    65,     6,
      59,    60,    61,    62,    63,    83,    34,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    71,    89,    69,    79,    88,    79,
      68,   118,    22,    69,    21,    69,    29,    24,    56,    54,
      75,    78,    88,    54,    88,    90,    88,    79,   129,    78,
      79,     4,    64,    66,    90,    82,    82,    41,    42,    82,
      41,    42,    82,     5,     6,    85,    88,    88,    88,    88,
      69,    71,    69,    88,    88,    22,   104,   105,     3,    92,
      69,    92,    29,    54,    92,    67,    66,    69,    69,    69,
      69,    66,    83,    82,    82,    82,    82,     5,     6,    59,
      60,    63,    69,    88,    69,    23,    88,   102,   103,   105,
      20,    79,    88,    97,   112,    31,   101,    56,     3,    92,
      56,    90,    69,    58,    85,    85,    83,    71,    72,    73,
      69,    70,    54,    88,    32,   100,    69,    97,    56,    78,
     129,    63,    88,   103,    92,    88,    92,    24,    92,    25,
      54,    78,    69,    69,    83,    56,    92,    69,    92,    69,
      69,   100,    56,   101,    78,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    78,    79,    79,    80,    80,    80,
      81,    81,    81,    81,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    86,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      99,   100,   100,   101,   101,   101,   102,   102,   102,   103,
     103,   104,   105,   105,   106,   107,   108,   109,   109,   109,
     110,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   120,   121,   122,   123,   123,   124,   125,   125,
     126,   126,   126,   126,   127,   128,   129,   129,   130,   130,
     130,   131
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     3,     2,     4,     1,     2,     3,     2,     2,     3,
       3,     3,     3,     4,     6,     5,     7,     1,     1,     2,
       2,     3,     3,     1,     2,     1,     1,     2,     2,     2,
       3,     3,     3,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       2,     5,     4,     7,     8,     6,     3,     1,     9,    11,
       8,     0,     2,     0,     5,     6,     1,     3,     1,     1,
       3,     4,     1,     2,     6,     4,     3,     2,     3,     5,
       2,     3,     1,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     0,     1,     0,     1,     0,
       2,     7,     5,     6,     4,     0,     3,     4,     1,     3,
       0,     1,     1,     1,     6,    10,     0,     1,     0,     1,
       2,    13
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
  case 5: /* identifiant_qualifie: identifiant_qualifie '.' identifiant  */
#line 40 "little_ada.y"
                                                                {}
#line 1525 "little_ada.tab.c"
    break;


#line 1529 "little_ada.tab.c"

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

#line 222 "little_ada.y"



