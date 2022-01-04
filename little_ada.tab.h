/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LITTLE_ADA_TAB_H_INCLUDED
# define YY_YY_LITTLE_ADA_TAB_H_INCLUDED
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
    DEFINE = 258,                  /* DEFINE  */
    LEFT_QUOTE = 259,              /* LEFT_QUOTE  */
    RIGHT_QUOTE = 260,             /* RIGHT_QUOTE  */
    RIGHT_ARROW = 261,             /* RIGHT_ARROW  */
    DOUBLE_POINT = 262,            /* DOUBLE_POINT  */
    REVERSE = 263,                 /* REVERSE  */
    CHAR = 264,                    /* CHAR  */
    LETTER = 265,                  /* LETTER  */
    DIGIT = 266,                   /* DIGIT  */
    EXIT = 267,                    /* EXIT  */
    GOTO = 268,                    /* GOTO  */
    RANGE = 269,                   /* RANGE  */
    CONSTANT = 270,                /* CONSTANT  */
    TYPE = 271,                    /* TYPE  */
    IS_RANGE = 272,                /* IS_RANGE  */
    SUBTYPE = 273,                 /* SUBTYPE  */
    RENAMES = 274,                 /* RENAMES  */
    PROCEDURE = 275,               /* PROCEDURE  */
    FUNCTION = 276,                /* FUNCTION  */
    OUT = 277,                     /* OUT  */
    IN_OUT = 278,                  /* IN_OUT  */
    CASE = 279,                    /* CASE  */
    END_CASE = 280,                /* END_CASE  */
    IS = 281,                      /* IS  */
    WHEN = 282,                    /* WHEN  */
    OTHER = 283,                   /* OTHER  */
    THEN = 284,                    /* THEN  */
    END_IF = 285,                  /* END_IF  */
    IS_NULL = 286,                 /* IS_NULL  */
    RETURN = 287,                  /* RETURN  */
    FOR = 288,                     /* FOR  */
    IN = 289,                      /* IN  */
    IF = 290,                      /* IF  */
    ELSIF = 291,                   /* ELSIF  */
    ELSE = 292,                    /* ELSE  */
    ID = 293,                      /* ID  */
    POWER = 294,                   /* POWER  */
    NOT = 295,                     /* NOT  */
    ABS = 296,                     /* ABS  */
    MULTIPLY = 297,                /* MULTIPLY  */
    DIVIDE = 298,                  /* DIVIDE  */
    MOD = 299,                     /* MOD  */
    REM = 300,                     /* REM  */
    ADD = 301,                     /* ADD  */
    SUBTRACT = 302,                /* SUBTRACT  */
    EQ = 303,                      /* EQ  */
    NE = 304,                      /* NE  */
    LE = 305,                      /* LE  */
    GE = 306,                      /* GE  */
    GT = 307,                      /* GT  */
    LT = 308,                      /* LT  */
    AND = 309,                     /* AND  */
    OR = 310,                      /* OR  */
    XOR = 311,                     /* XOR  */
    AND_THEN = 312,                /* AND_THEN  */
    OR_ELSE = 313,                 /* OR_ELSE  */
    LOOP = 314,                    /* LOOP  */
    WHILE = 315,                   /* WHILE  */
    END_LOOP = 316,                /* END_LOOP  */
    DEPART = 317,                  /* DEPART  */
    END = 318                      /* END  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "little_ada.y"
 struct var_name { 
			char name[100]; 
			struct node* nd;
		} nd_obj;

		struct var_name2 { 
			char name[100]; 
			struct node* nd;
			char type[5];
		} nd_obj2; 

		struct var_name3 {
			char name[100];
			struct node* nd;
			char if_body[5];
			char else_body[5];
		} nd_obj3;
	

#line 147 "little_ada.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LITTLE_ADA_TAB_H_INCLUDED  */
