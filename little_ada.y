%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
%}

%union {char tree; char other; int val;}

%start file
%token <nd_obj> EXIT, GOTO, RANGE, CONSTANT, TYPE, IS_RANGE, SUBTYPE, RENAMES,PROCEDURE, FUNCTION, OUT, IN_OUT, CASE, END_CASE, IS, WHEN, OTHER, THEN, END_IF, NULL, RETURN, FOR, IN, IF, ELSIF, ELSE, ID, POWER, NOT, ABS, MULTIPLY, DIVIDE, MOD, REM, ADD, SUBTRACT, EQ, NE, LE, GE, GT, LT, AND, OR, XOR, AND_THEN, OR_ELSE, LOOP, WHILE, END_LOOP, BEGIN, END
%token 
%token cte_decimale
%token cte_base
%token cte_string
%token for 
%token in
%token
%token
%token
%token RETURN
%token COMMENTAIRE
%token case
%token is
%token end_case


%type identifiant
%type <tree> file
%type <other> file
%type <val> file

%type reverse
%%
// production                                   action
file        : commentaire file
            | definition_fonction 
            | definition_procedure 
            ;

commentaire : COMMENTAIRE             {printf('-- %s \n', $1);}
            ;

identifiant : ID                                {printf('id: %s', $1);}
            ;
identifiant_qualifie    : identifiant_qualifie'.'identifiant    {}
                        | identifiant
                        ;

constante   : cte_decimale
            | cte_base
            | cte_string
            ;

expression  :identifiant_qualifie
            |constante
            |SUBTRACT expression
            |ABS expression
            |NOT expression
            |expression symbole expression
            |expression AND_THEN expression
            |expression OR_ELSE expression
            |identifiant '(' expression_virgule ')'
            |'(' expression ')'
            ;

symbole : ADD | SUBTRACT | MULTIPLY | DIVIDE | POWER | EQ | NE | LE | GE | LT | GT | MOD | REM | AND | OR | XOR | AND_THEN | OR_ELSE

expression_virgule  :expression
                    |expression ',' expression_virgule
                    ;


instruction :NULL
            |affectation
            |appel_proc
            |boucle_simple
            |boucle_tant_que
            |boucle_pour_tout
            |conditionnelle
            |distinction_cas
            |saut
            |exit
            |retour_proc
            |retour_fonction
            ;            

seq_instructions: instruction| instruction seq_instructions
                ;

affectation :identifiant_qualifie ':=' expression ';'
            ;

appel_proc : identifiant_qualifie ';'
            |identifiant_qualifie'('expression_virgule')'';'
            ;


boucle_simple   : LOOP seq_instructions END_LOOP ';'                   
                |identifiant ':' LOOP seq_instructions END_LOOP identifiant ';'            //todo check id
                ;
boucle_tant_que : identifiant WHILE  expression LOOP seq_instructions END_LOOP identifiant ';'  
                | WHILE  expression LOOP seq_instructions END_LOOP ';'
                ;
boucle_pour_tout_in : expression ':' expression
                    | type
                    ;
boucle_pour_tout:FOR  identifiant IN reverse boucle_pour_tout_in LOOP seq_instructions END_LOOP ';' 
                |identifiant FOR  identifiant IN  reverse boucle_pour_tout_in LOOP seq_instructions END_LOOP identifiant ';' 
                ;
conditionnelle  : IF expression THEN seq_instructions elsif else END_IF ';'
                |
                ;
else    :%empty
        |ELSE seq_instructions
        ;
elsif   :%empty
        |ELSIF expression THEN seq_instructions else 
        |ELSIF expression THEN seq_instructions else elsif
        ;

choix: expression
     | expression '..' expression
     | OTHER
     ;

liste_choix: choix
           | choix '|' liste_choix
           ;

alternative: WHEN liste_choix '=>' seq_instructions ;

liste_alternative   : alternative
                    | alternative liste_alternative   
                    ;
distinction_cas : CASE expression IS liste_alternative END_CASE ';'
                ;

saut: etiquette GOTO identifiant ';'  ;    //Il faut s'assurer que l'id dans l'étiquette est le même que celui apres goto
etiquette: '<<' identifiant '>>';

exit: EXIT';'
    | EXIT identifiant ';'
    | EXIT identifiant WHEN expression ';'
    ;

retour_proc: RETURN ';';

retour_fonction: RETURN expression ';'

type: identifiant_qualifie
    | identifiant_qualifie RANGE expression '..' expression
    ;


declaration : declaration_objet
            | declaration_type
            | declaration_sous_type
            | renommage
            | specification_procedure
            | specification_fonction
            | definition_procedure
            | definition_fonction
            ;

declaration_objet   : identifiant_virgule ':' constant type_ou_null definition 
identifiant_virgule : identifiant | identifiant ',' identifiant_virgule ;
constant: %empty | CONSTANT;
type_ou_null: %empty|type;
definition:%empty|':=' expression;


declaration_type: TYPE identifiant IS_RANGE expression '..' expression ';';
                
declaration_sous_type: SUBTYPE identifiant IS type ';';

renommage: identifiant_virgule ':' type RENAMES identifiant_qualifie ';'

specification_procedure: PROCEDURE identifiant seq_parametres ';';

seq_parametres: %empty | '(' parametres ')';
parametres: parametres1 ':' mode identifiant_qualifie;
parametres1: identifiant_virgule | identifiant_virgule ';' parametres1 ;
mode: %empty | IN | OUT | IN_OUT ;


specification_fonction: FUNCTION identifiant seq_parametres RETURN identifiant_qualifie ';' ;


definition_procedure: PROCEDURE identifiant seq_parametres IS seq_declarations BEGIN seq_instructions END identifiant_qualifie_ou_null';';
identifiant_qualifie_ou_null: %empty|identifiant_qualifie;
seq_declarations: %empty | declaration | declaration seq_declarations

definition_fonction: FUNCTION identifiant seq_parametres IS seq_declarations BEGIN seq_instructions  RETURN identifiant_qualifie ';' END identifiant_qualifie_ou_null ';' ;

%%


