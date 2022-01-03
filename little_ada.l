%{
    #include "little_ada.tab.h"
    int countn=0;

    // il faudra surement rajouter (?i) dans les regex pour le case insensitive
%}
%option yylineno

alpha [a-zA-Z]
digit [0-9]
%%

"--".*                                  { ; }
"null;"                                 { strcpy(yylval.nd_obj.name,(yytext)); return IS_NULL; }
{digit}                                 { strcpy(yylval.nd_obj.name,(yytext)); return DIGIT; }
[a-f]                                   { strcpy(yylval.nd_obj.name,(yytext)); return LETTER; }
[a-zA-Z]|("")                           { strcpy(yylval.nd_obj.name,(yytext)); return LETTER; }
"return"                                { strcpy(yylval.nd_obj.name,(yytext)); return RETURN; }
"for"	                                { strcpy(yylval.nd_obj.name,(yytext)); return FOR; }
"in"	                                { strcpy(yylval.nd_obj.name,(yytext)); return IN; }
"while"	                                { strcpy(yylval.nd_obj.name,(yytext)); return WHILE; }
"loop"	                                { strcpy(yylval.nd_obj.name,(yytext)); return LOOP; }
"end loop"	                            { strcpy(yylval.nd_obj.name,(yytext)); return END_LOOP; }
"begin"	                                { strcpy(yylval.nd_obj.name,(yytext)); return BEGAN; }
"end"	                                { strcpy(yylval.nd_obj.name,(yytext)); return END; }
"if"	                                { strcpy(yylval.nd_obj.name,(yytext)); return IF; }
"then"	                                { strcpy(yylval.nd_obj.name,(yytext)); return THEN; }
"elsif"	                                { strcpy(yylval.nd_obj.name,(yytext)); return ELSIF; }
"else"	                                { strcpy(yylval.nd_obj.name,(yytext)); return ELSE; }
"end if"	                            { strcpy(yylval.nd_obj.name,(yytext)); return END_IF; }
"other"	                                { strcpy(yylval.nd_obj.name,(yytext)); return OTHER; }
"when"	                                { strcpy(yylval.nd_obj.name,(yytext)); return WHEN; }
"case"	                                { strcpy(yylval.nd_obj.name,(yytext)); return CASE; }
"is"	                                { strcpy(yylval.nd_obj.name,(yytext)); return IS; }
"end_case"	                            { strcpy(yylval.nd_obj.name,(yytext)); return END_CASE; }
"exit"	                                { strcpy(yylval.nd_obj.name,(yytext)); return EXIT; }
"goto"	                                { strcpy(yylval.nd_obj.name,(yytext)); return GOTO; }
"range"	                                { strcpy(yylval.nd_obj.name,(yytext)); return RANGE; }
"constant"	                            { strcpy(yylval.nd_obj.name,(yytext)); return CONSTANT; }
"type"	                                { strcpy(yylval.nd_obj.name,(yytext)); return TYPE; }
"is range"	                            { strcpy(yylval.nd_obj.name,(yytext)); return IS_RANGE; }
"subtype"	                            { strcpy(yylval.nd_obj.name,(yytext)); return SUBTYPE; }
"renames"	                            { strcpy(yylval.nd_obj.name,(yytext)); return RENAMES; }
"procedure"	                            { strcpy(yylval.nd_obj.name,(yytext)); return PROCEDURE; }
"function"	                            { strcpy(yylval.nd_obj.name,(yytext)); return FUNCTION; }
"out"	                                { strcpy(yylval.nd_obj.name,(yytext)); return OUT; }
"in out"	                            { strcpy(yylval.nd_obj.name,(yytext)); return IN_OUT; }
{alpha}({alpha}|{digit})*[^_]$          { strcpy(yylval.nd_obj.name,(yytext)); return ID; }
"**"                                    { strcpy(yylval.nd_obj.name,(yytext)); return POWER; }
"not"                                   { strcpy(yylval.nd_obj.name,(yytext)); return NOT; }
"abs"                                   { strcpy(yylval.nd_obj.name,(yytext)); return ABS; }
"*"                                     { strcpy(yylval.nd_obj.name,(yytext)); return MULTIPLY; }
"/"                                     { strcpy(yylval.nd_obj.name,(yytext)); return DIVIDE; }
"mod"                                   { strcpy(yylval.nd_obj.name,(yytext)); return MOD; }
"rem"                                   { strcpy(yylval.nd_obj.name,(yytext)); return REM; }
"+"                                     { strcpy(yylval.nd_obj.name,(yytext)); return ADD; }
"-"                                     { strcpy(yylval.nd_obj.name,(yytext)); return SUBTRACT; }
"="                                     { strcpy(yylval.nd_obj.name,(yytext)); return EQ; }
"/="                                    { strcpy(yylval.nd_obj.name,(yytext)); return NE; }
"<="                                    { strcpy(yylval.nd_obj.name,(yytext)); return LE; }
">="                                    { strcpy(yylval.nd_obj.name,(yytext)); return GE; }
">"	                                    { strcpy(yylval.nd_obj.name,(yytext)); return GT; }
"<"	                                    { strcpy(yylval.nd_obj.name,(yytext)); return LT; }
"and"	                                { strcpy(yylval.nd_obj.name,(yytext)); return AND; }
"or"	                                { strcpy(yylval.nd_obj.name,(yytext)); return OR; }
"xor"	                                { strcpy(yylval.nd_obj.name,(yytext)); return XOR; }
"and then"	                            { strcpy(yylval.nd_obj.name,(yytext)); return AND_THEN; }
"or else"	                            { strcpy(yylval.nd_obj.name,(yytext)); return OR_ELSE; }
[\t]*                                   { ; }
[\n]                                    { countn++; }
.	                                    { return *yytext; }
%%

int yywrap() {
    return 1;
}