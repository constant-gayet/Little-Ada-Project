%{
    #include "little_ada.tab.h"
    int countn=1;

%}
%option yylineno

alpha   [a-zA-Z]
int     ([0-9]+(_([0-9])+)*)
int_letter ([0-9a-fA-F]+(_([0-9a-fA-F])+)*)
based_int     {int}[#]{int_letter}([\.]{int_letter})?[#]
float   ^([-+]?{int}\.?{int}*)(?:[eE]([-+]?[0-9]+))?$
delim   [ \t]
ws      {delim}+ 
eol     "\r\n"|[\n] 
%%

"--".*                                      { ; }
".."                                        { strcpy(yylval.nd_obj.name,(yytext)); return DOUBLE_POINT; }
"=>"                                        { strcpy(yylval.nd_obj.name,(yytext)); return RIGHT_ARROW; }
"<<"                                        { strcpy(yylval.nd_obj.name,(yytext)); return LEFT_QUOTE; }
">>"                                        { strcpy(yylval.nd_obj.name,(yytext)); return RIGHT_QUOTE; }
":="                                        { strcpy(yylval.nd_obj.name,(yytext)); return DEFINE; }
(?i:null)                                   { strcpy(yylval.nd_obj.name,(yytext)); return IS_NULL; }
(?i:return)                                 { strcpy(yylval.nd_obj.name,(yytext)); return RETURN; }
(?i:for)	                                { strcpy(yylval.nd_obj.name,(yytext)); return FOR; }
(?i:reverse)	                            { strcpy(yylval.nd_obj.name,(yytext)); return REVERSE; }
(?i:in)	                                    { strcpy(yylval.nd_obj.name,(yytext)); return IN; }
(?i:while)	                                { strcpy(yylval.nd_obj.name,(yytext)); return WHILE; }
(?i:loop)	                                { strcpy(yylval.nd_obj.name,(yytext)); return LOOP; }
(?i:"end loop;")|(?i:"end loop ")           { strcpy(yylval.nd_obj.name,(yytext)); return END_LOOP; }
(?i:begin)	                                { strcpy(yylval.nd_obj.name,(yytext)); printf("begin has passed \n");return DEPART; }
(?i:if)	                                    { strcpy(yylval.nd_obj.name,(yytext)); return IF; }
(?i:then)	                                { strcpy(yylval.nd_obj.name,(yytext)); return THEN; }
(?i:elsif)	                                { strcpy(yylval.nd_obj.name,(yytext)); return ELSIF; }
(?i:else)	                                { strcpy(yylval.nd_obj.name,(yytext)); return ELSE; }
(?i:"end if;")                              { strcpy(yylval.nd_obj.name,(yytext)); return END_IF; }
(?i:others)                                 { strcpy(yylval.nd_obj.name,(yytext)); return OTHERS; }
(?i:when)	                                { strcpy(yylval.nd_obj.name,(yytext)); return WHEN; }
(?i:case)	                                { strcpy(yylval.nd_obj.name,(yytext)); return CASE; }
(?i:is)	                                    { strcpy(yylval.nd_obj.name,(yytext)); printf("is has passed \n");return IS; }
(?i:"end case;")	                        { strcpy(yylval.nd_obj.name,(yytext)); printf("\n");return END_CASE; }
(?i:end)	                                { strcpy(yylval.nd_obj.name,(yytext)); return END; }
(?i:exit)	                                { strcpy(yylval.nd_obj.name,(yytext)); return EXIT_TOKEN; }
(?i:goto)	                                { strcpy(yylval.nd_obj.name,(yytext)); return GOTO; }
(?i:range)	                                { strcpy(yylval.nd_obj.name,(yytext)); return RANGE; }
(?i:constant)	                            { strcpy(yylval.nd_obj.name,(yytext)); return CONSTANT; }
(?i:type)	                                { strcpy(yylval.nd_obj.name,(yytext)); return TYPE; }
(?i:"is range ")                            { strcpy(yylval.nd_obj.name,(yytext)); return IS_RANGE; }
(?i:subtype)	                            { strcpy(yylval.nd_obj.name,(yytext)); return SUBTYPE; }
(?i:renames)	                            { strcpy(yylval.nd_obj.name,(yytext)); return RENAMES; }
(?i:procedure)                              { strcpy(yylval.nd_obj.name,(yytext)); return PROCEDURE; }
(?i:function)	                            { strcpy(yylval.nd_obj.name,(yytext)); return FUNCTION; }
(?i:out)	                                { strcpy(yylval.nd_obj.name,(yytext)); return OUT; }
(?i:"in out")	                            { strcpy(yylval.nd_obj.name,(yytext)); return IN_OUT; }
"**"                                        { strcpy(yylval.nd_obj.name,(yytext)); return POWER; }
(?i:not)                                    { strcpy(yylval.nd_obj.name,(yytext)); return NOT; }
(?i:abs)                                    { strcpy(yylval.nd_obj.name,(yytext)); return ABS; }
"*"                                         { strcpy(yylval.nd_obj.name,(yytext)); return MULTIPLY; }
"/"                                         { strcpy(yylval.nd_obj.name,(yytext)); return DIVIDE; }
(?i:mod)                                    { strcpy(yylval.nd_obj.name,(yytext)); return MOD; }
(?i:rem)                                    { strcpy(yylval.nd_obj.name,(yytext)); return REM; }
"+"                                         { strcpy(yylval.nd_obj.name,(yytext)); return ADD; }
"-"                                         { strcpy(yylval.nd_obj.name,(yytext)); return SUBTRACT; }
"="                                         { strcpy(yylval.nd_obj.name,(yytext)); return EQ; }
"/="                                        { strcpy(yylval.nd_obj.name,(yytext)); return NE; }
"<="                                        { strcpy(yylval.nd_obj.name,(yytext)); return LE; }
">="                                        { strcpy(yylval.nd_obj.name,(yytext)); return GE; }
">"	                                        { strcpy(yylval.nd_obj.name,(yytext)); return GT; }
"<"	                                        { strcpy(yylval.nd_obj.name,(yytext)); return LT; }
(?i:and)	                                { strcpy(yylval.nd_obj.name,(yytext)); return AND; }
(?i:or)                                     { strcpy(yylval.nd_obj.name,(yytext)); return OR; }
(?i:xor)	                                { strcpy(yylval.nd_obj.name,(yytext)); return XOR; }
(?i:"and then")	                            { strcpy(yylval.nd_obj.name,(yytext)); return AND_THEN; }
(?i:"or else")	                            { strcpy(yylval.nd_obj.name,(yytext)); return OR_ELSE; }
[eE][+-]?{int}                              { strcpy(yylval.nd_obj.name,(yytext)); return EXP; }
{based_int}                                 { strcpy(yylval.nd_obj.name,(yytext)); return BASED_INT; }
{int}                                       { strcpy(yylval.nd_obj.name,(yytext)); printf("int : %s\n",yytext);return INT; }
["].*["]                                    { strcpy(yylval.nd_obj.name,(yytext)); return STRING; }
[a-zA-Z][a-zA-Z0-9]*(_[a-zA-Z0-9]+)*        { strcpy(yylval.nd_obj.name,(yytext)); printf("ID is %s \n", yylval.nd_obj.name); return ID; }
{ws}                                        { ; }
{eol}                                       { countn++; }
.	                                        { return *yytext; }
%%

int yywrap() {
    return 1;
}