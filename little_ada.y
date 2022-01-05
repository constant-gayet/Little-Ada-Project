%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
%}

%union { struct var_name { 
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
	} 

%start file
%token <nd_obj> DEFINE LEFT_QUOTE RIGHT_QUOTE RIGHT_ARROW DOUBLE_POINT REVERSE STRING LETTER DIGIT EXIT  GOTO  RANGE  CONSTANT  TYPE  IS_RANGE  SUBTYPE  RENAMES PROCEDURE  FUNCTION  OUT  IN_OUT  CASE  END_CASE  IS  WHEN  OTHERS  THEN  END_IF  IS_NULL  RETURN  FOR  IN  IF  ELSIF  ELSE  ID  POWER  NOT  ABS  MULTIPLY  DIVIDE  MOD  REM  ADD  SUBTRACT  EQ  NE  LE  GE  GT  LT  AND  OR  XOR  AND_THEN  OR_ELSE  LOOP  WHILE  END_LOOP  DEPART  END

%type <nd_obj> file definition_fonction definition_procedure
%%
// production                                   action
file        : definition_fonction  {printf("Analysis ended successfully\n");}
            | definition_procedure {printf("Analysis ended successfully\n");}
            ;

identifiant     : ID
                ;
identifiant_qualifie    : identifiant_qualifie'.'identifiant
                        | identifiant
                        ;

constante   : cte_decimale
            | cte_base
            | STRING
            ;

cte_decimale: integer 
            | integer '.' integer 
            | integer exponent
            | integer '.' integer exponent 
integer: DIGIT
        | integer DIGIT
        | integer '_' integer
exponent: 'E' integer 
        | 'e' integer
        | 'E' SUBTRACT integer
        | 'e' SUBTRACT integer
        | 'E' ADD integer
        | 'e' ADD integer
        ;

cte_base: integer '#' based_integer '#'
        | integer '#' based_integer '.' based_integer '#'
        | integer '#' based_integer '#' exponent
        | integer '#' based_integer '.' based_integer '#' exponent
        ;

based_integer   : DIGIT    
                | LETTER 
                | based_integer DIGIT
                | based_integer LETTER
                | based_integer '_' based_integer
                ;

expression  :identifiant_qualifie
            |constante
            |SUBTRACT expression
            |ABS expression
            |NOT expression
            |expression symbole expression
            |identifiant '(' expression_virgule ')'
            |'(' expression ')'
            ;

symbole : ADD | SUBTRACT | MULTIPLY | DIVIDE | POWER | EQ | NE | LE | GE | LT | GT | MOD | REM | AND | OR | XOR | AND_THEN | OR_ELSE ;

expression_virgule  :expression
                    |expression ',' expression_virgule
                    ;


instruction :null
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

null: IS_NULL
        |IS_NULL';'

seq_instructions: instruction
                | instruction seq_instructions
                ;

affectation :identifiant_qualifie DEFINE expression ';'
            ;

appel_proc : identifiant_qualifie ';'
            |identifiant_qualifie'('expression_virgule')'';'
            ;


boucle_simple   : LOOP seq_instructions END_LOOP                   
                |identifiant ':' LOOP seq_instructions END_LOOP identifiant ';'            //todo check id
                ;
boucle_tant_que : identifiant WHILE  expression LOOP seq_instructions END_LOOP identifiant ';'  
                | WHILE  expression LOOP seq_instructions END_LOOP
                ;
boucle_pour_tout_in : expression DOUBLE_POINT expression
                    | type
                    ;
boucle_pour_tout:FOR  identifiant IN reverse boucle_pour_tout_in LOOP seq_instructions END_LOOP 
                |identifiant FOR  identifiant IN  reverse boucle_pour_tout_in LOOP seq_instructions END_LOOP identifiant ';' 

reverse: REVERSE
        |%empty 
                ;
conditionnelle  : IF expression THEN seq_instructions elsif else END_IF
                ;
else    :%empty
        |ELSE seq_instructions
        ;
elsif   :%empty
        |ELSIF expression THEN seq_instructions else elsif
        ;

choix: expression
     | expression DOUBLE_POINT expression
     | OTHERS
     ;

liste_choix: choix
           | choix '|' liste_choix
           ;

alternative: WHEN liste_choix RIGHT_ARROW seq_instructions ;

liste_alternative   : alternative
                    | alternative liste_alternative   
                    ;
distinction_cas : CASE expression IS liste_alternative END_CASE
                ;

saut: etiquette GOTO identifiant ';'  ;    //Il faut s'assurer que l'id dans l'étiquette est le même que celui apres goto
etiquette: LEFT_QUOTE identifiant RIGHT_QUOTE;

exit: EXIT';'
    | EXIT identifiant ';'
    | EXIT identifiant WHEN expression ';'
    ;

retour_proc: RETURN ';';

retour_fonction: RETURN expression ';';

type: identifiant_qualifie
    | identifiant_qualifie RANGE expression DOUBLE_POINT expression
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

declaration_objet: identifiant_virgule ':' type_ou_null definition ';'     
                 |identifiant_virgule ':' CONSTANT type_ou_null definition ';'        
                    ;
identifiant_virgule     : identifiant
                        | identifiant ',' identifiant_virgule 
                        ;
type_ou_null:type
            |%empty
            ;
definition  :DEFINE expression   
            |%empty
            ;


declaration_type: TYPE identifiant IS_RANGE expression DOUBLE_POINT expression ';';
                
declaration_sous_type: SUBTYPE identifiant IS type ';';

renommage: identifiant_virgule ':' type RENAMES identifiant_qualifie ';'

specification_procedure: PROCEDURE identifiant seq_parametres ';'             
                        ;

seq_parametres: %empty
                 | '(' parametres ')';
parametres: parametres1 ':' mode identifiant_qualifie;
parametres1: identifiant_virgule | identifiant_virgule ';' parametres1 ;
mode: %empty | IN | OUT | IN_OUT ;


specification_fonction: FUNCTION identifiant seq_parametres RETURN identifiant_qualifie ';' ;


definition_procedure: PROCEDURE identifiant seq_parametres IS seq_declarations DEPART seq_instructions END identifiant_qualifie_ou_null';'
;
identifiant_qualifie_ou_null: %empty|identifiant_qualifie;
seq_declarations: %empty 
                | declaration seq_declarations
                ;

definition_fonction: FUNCTION identifiant seq_parametres IS seq_declarations DEPART seq_instructions  RETURN identifiant_qualifie ';' END identifiant_qualifie_ou_null ';' ;

%%
extern int countn;

int main() {
    yyparse(); //lancer l'analyse syntaxique
}


void yyerror(char* s) {
    fprintf(stderr, "On line %d : %s on object \n %s", countn, s, yylval.nd_obj.name); 
}
