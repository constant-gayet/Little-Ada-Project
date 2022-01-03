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
    REVERSE = 258,                 /* REVERSE  */
    CHAR = 259,                    /* CHAR  */
    LETTER = 260,                  /* LETTER  */
    DIGIT = 261,                   /* DIGIT  */
    EXIT = 262,                    /* EXIT  */
    GOTO = 263,                    /* GOTO  */
    RANGE = 264,                   /* RANGE  */
    CONSTANT = 265,                /* CONSTANT  */
    TYPE = 266,                    /* TYPE  */
    IS_RANGE = 267,                /* IS_RANGE  */
    SUBTYPE = 268,                 /* SUBTYPE  */
    RENAMES = 269,                 /* RENAMES  */
    PROCEDURE = 270,               /* PROCEDURE  */
    FUNCTION = 271,                /* FUNCTION  */
    OUT = 272,                     /* OUT  */
    IN_OUT = 273,                  /* IN_OUT  */
    CASE = 274,                    /* CASE  */
    END_CASE = 275,                /* END_CASE  */
    IS = 276,                      /* IS  */
    WHEN = 277,                    /* WHEN  */
    OTHER = 278,                   /* OTHER  */
    THEN = 279,                    /* THEN  */
    END_IF = 280,                  /* END_IF  */
    IS_NULL = 281,                 /* IS_NULL  */
    RETURN = 282,                  /* RETURN  */
    FOR = 283,                     /* FOR  */
    IN = 284,                      /* IN  */
    IF = 285,                      /* IF  */
    ELSIF = 286,                   /* ELSIF  */
    ELSE = 287,                    /* ELSE  */
    ID = 288,                      /* ID  */
    POWER = 289,                   /* POWER  */
    NOT = 290,                     /* NOT  */
    ABS = 291,                     /* ABS  */
    MULTIPLY = 292,                /* MULTIPLY  */
    DIVIDE = 293,                  /* DIVIDE  */
    MOD = 294,                     /* MOD  */
    REM = 295,                     /* REM  */
    ADD = 296,                     /* ADD  */
    SUBTRACT = 297,                /* SUBTRACT  */
    EQ = 298,                      /* EQ  */
    NE = 299,                      /* NE  */
    LE = 300,                      /* LE  */
    GE = 301,                      /* GE  */
    GT = 302,                      /* GT  */
    LT = 303,                      /* LT  */
    AND = 304,                     /* AND  */
    OR = 305,                      /* OR  */
    XOR = 306,                     /* XOR  */
    AND_THEN = 307,                /* AND_THEN  */
    OR_ELSE = 308,                 /* OR_ELSE  */
    LOOP = 309,                    /* LOOP  */
    WHILE = 310,                   /* WHILE  */
    END_LOOP = 311,                /* END_LOOP  */
    BEGAN = 312,                   /* BEGAN  */
    END = 313                      /* END  */
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
	

#line 142 "little_ada.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LITTLE_ADA_TAB_H_INCLUDED  */
