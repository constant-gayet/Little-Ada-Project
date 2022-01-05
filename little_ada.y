%{
void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* definition du type liste  */
struct element
{
    char* val;
    struct element *nxt;
};
typedef struct element element;
 
typedef element* list;

struct node* mknode(struct node *left, struct node *right, char *token);
int stricmp(char const *a, char const *b);
void print_tree(struct node *tree);
void print_consts(struct node *tree);
void check_affect();
list push(char* valeur, list liste);


struct node {
  struct node *left;
  struct node *right;
  char *token;     
};
struct node *head;
list seen_const = NULL;
%}

%union { struct var_name { 
			char name[100]; 
			struct node* nd;
		} nd_obj;
	} 

%start file
%token <nd_obj> DEFINE LEFT_QUOTE RIGHT_QUOTE RIGHT_ARROW DOUBLE_POINT REVERSE STRING INT BASED_INT EXP EXIT_TOKEN  GOTO  RANGE  CONSTANT  TYPE  IS_RANGE  SUBTYPE  RENAMES PROCEDURE  FUNCTION  OUT  IN_OUT  CASE  END_CASE  IS  WHEN  OTHERS  THEN  END_IF  IS_NULL  RETURN  FOR  IN  IF  ELSIF  ELSE  ID  POWER  NOT  ABS  MULTIPLY  DIVIDE  MOD  REM  ADD  SUBTRACT  EQ  NE  LE  GE  GT  LT  AND  OR  XOR  AND_THEN  OR_ELSE  LOOP  WHILE  END_LOOP  DEPART  END

%type <nd_obj>conditionnelle else elsif reverse choix liste_choix alternative liste_alternative distinction_cas saut etiquette exit retour_fonction retour_proc type declaration declaration_objet identifiant_virgule type_ou_null definition declaration_type declaration_sous_type renommage specification_procedure seq_parametres parametres mode specification_fonction definition_procedure identifiant_qualifie_ou_null seq_declarations file definition_fonction identifiant identifiant_qualifie constante cte_decimale cte_base expression expression_virgule symbole instruction seq_instructions affectation appel_proc boucle_simple boucle_pour_tout expressions_double_point boucle_pour_tout_in boucle_tant_que
%%
// Pour chaque régle on définit une ou des actions à réaliser
/* Majoritairement, on créée des noeuds selon la structure (struct node *) définie ci-dessus à chaque passage dans un non-terminal. Celui-ci peut avoir 0,1 ou 2 fils. Par défaut, si 
le noeud comporte 1 fils, on le mettra à gauche
Par ailleurs, à certains passages, lorsque l'on veut récupérer les valeurs des noeuds (pour pouvoir les traiter ou les afficher, typiquement des constantes) on la sauvegarde dans la valeur du noeud
*/

/* Règles   -----------------------------------------------------------------   Actions*/

file        : definition_fonction                                               {printf("Analysis ended successfully\n"); $$.nd = mknode($1.nd, NULL, "file"); head=$$.nd;} //Départ de la lecture du fichier 
            | definition_procedure                                              {printf("Analysis ended successfully\n"); $$.nd = mknode($1.nd, NULL, "file"); head=$$.nd;}
            ;

identifiant     : ID                                                            {$1.nd = mknode(NULL,NULL,$1.name); $$.nd = mknode($1.nd,NULL,"identifiant");}                                                                                                        
                ;               
identifiant_qualifie    : identifiant_qualifie'.'identifiant                    {char *id_qual; id_qual = malloc(100); strcpy(id_qual,$1.name);strcat(id_qual,".");strcat(id_qual,$3.name); strcpy($$.name,id_qual);}    
                        | identifiant                                           {strcpy($$.name,$1.name);}    
                        ;

constante   : cte_decimale                                                      {strcpy($$.name,$1.name);}                                                                        
            | cte_base                                                          {strcpy($$.name,$1.name);}        
            | STRING                                                            {strcpy($$.name,$1.name);}        
            ;

cte_decimale: INT                                                               {strcpy($$.name,$1.name);}
            | INT '.' INT                                                       {char *const_val; const_val = malloc(100); strcpy(const_val, $1.name); strcat(const_val,"."); strcat(const_val,$3.name); strcpy($$.name, const_val);}
            | INT '.' INT EXP                                                   {char *const_val; const_val = malloc(100); strcpy(const_val, $1.name); strcat(const_val,"."); strcat(const_val,$3.name); strcat(const_val,$4.name); strcpy($$.name, const_val);}
            | INT EXP                                                           {char *const_val; const_val = malloc(100); strcpy(const_val, $1.name); strcat(const_val,$2.name); strcpy($$.name, const_val);}
            ;

cte_base: BASED_INT                                                             {strcpy($$.name,$1.name);}
        | BASED_INT EXP                                                         {char const_val[100]; strcpy(const_val, $1.name); strcat(const_val,$2.name); strcpy($$.name, const_val);}
        ;

expression  :identifiant_qualifie                                               {$1.nd = mknode(NULL,NULL,$1.name); $$.nd = mknode($1.nd,NULL,"id");}
            |constante                                                          {$1.nd = mknode(NULL,NULL,$1.name); $$.nd = mknode($1.nd,NULL,"constante");}
            |SUBTRACT expression                                                {$$.nd = mknode($2.nd, NULL, $1.name);}     
            |ABS expression                                                     {$$.nd = mknode($2.nd, NULL, $1.name);}
            |NOT expression                                                     {$$.nd = mknode($2.nd, NULL, $1.name);}
            |expression symbole expression                                      {$$.nd = mknode($1.nd, $3.nd, $2.name);}         
            |identifiant '(' expression_virgule ')'                             {$$.nd = mknode($1.nd, $3.nd, "id(expressions)");}
            |'(' expression ')'                                                 {$$.nd = mknode ($2.nd, NULL, "(expression)");}
            ;

symbole : ADD | SUBTRACT | MULTIPLY | DIVIDE | POWER | EQ | NE | LE | GE | LT | GT | MOD | REM | AND | OR | XOR | AND_THEN | OR_ELSE
        ;

expression_virgule  :expression                                                 {$$.nd = $1.nd;} 
                    |expression ',' expression_virgule                          {$$.nd = mknode($1.nd,$3.nd,"expr , expr");}
                    ;


instruction :null                                                               {$$.nd=mknode(NULL,NULL,"null");}                        
            |affectation                                                        {$$.nd=$1.nd;}                                        
            |appel_proc                                                         {$$.nd=$1.nd;}                                        
            |boucle_simple                                                      {$$.nd=$1.nd;}                                                
            |boucle_tant_que                                                    {$$.nd=$1.nd;}                                                
            |boucle_pour_tout                                                   {$$.nd=$1.nd;}                                                
            |conditionnelle                                                     {$$.nd=$1.nd;}                                                
            |distinction_cas                                                    {$$.nd=$1.nd;}                                                
            |saut                                                               {$$.nd=$1.nd;}                                        
            |exit                                                               {$$.nd=$1.nd;}                                                
            |retour_proc                                                        {$$.nd=$1.nd;}                
            |retour_fonction                                                    {$$.nd=$1.nd;}        
            ;            

null: IS_NULL
        |IS_NULL';'

seq_instructions: instruction                                                   {$$.nd = $1.nd;}
                | instruction seq_instructions                                  {$$.nd = mknode($1.nd, $2.nd, "instruction instruction");}
                ;

affectation :identifiant_qualifie DEFINE expression ';'                         {$$.nd = mknode($1.nd, $3.nd, ":=");}
            ;

appel_proc : identifiant_qualifie ';'                                           {$$.nd=mknode($1.nd,NULL,"appel proc");}
            |identifiant_qualifie'('expression_virgule')'';'                    {$$.nd=mknode($1.nd,$3.nd,"appel proc avec args");}
            ;


boucle_simple   : LOOP seq_instructions END_LOOP                                {$$.nd=mknode($2.nd, NULL, "boucle simple");}                
                |identifiant ':' LOOP seq_instructions END_LOOP identifiant ';' {
                                                                                        if (stricmp ($1.name, $6.name))
                                                                                        {$$.nd = mknode($1.nd,$4.nd,"boucle simple avec id");} 
                                                                                        else {return 1;}
                                                                                }                       
                ;
boucle_tant_que : identifiant WHILE  expression LOOP seq_instructions END_LOOP identifiant ';'   
                                                                                {
                                                                                        if (stricmp ($1.name, $7.name))
                                                                                        {
                                                                                                struct node *tmp_nd = mknode($1.nd, $3.nd,""); 
                                                                                                $$.nd = mknode(tmp_nd,$5.nd,"boucle simple avec id");
                                                                                        }
                                                                                        else 
                                                                                        {
                                                                                                return 1;
                                                                                        }
                                                                                }
                | WHILE  expression LOOP seq_instructions END_LOOP              {$$.nd=mknode($2.nd, $4.nd, "boucle while");}
                ;

expressions_double_point:expression DOUBLE_POINT expression                     {$$.nd = mknode($1.nd,$3.nd,"..");}
                        ;

boucle_pour_tout_in : expressions_double_point                                  {$$.nd = $1.nd;}
                    | type                                                      {$$.nd=$1.nd;}
                    ;
boucle_pour_tout:FOR identifiant IN reverse boucle_pour_tout_in LOOP seq_instructions END_LOOP
                                                                                {
                                                                                        struct node *tmp_node1 = mknode($4.nd,$5.nd,"reverse or not");
                                                                                        struct node *tmp_node = mknode($2.nd,tmp_node1, "for . in . loop");
                                                                                        $$.nd = mknode(tmp_node,$7.nd, "for . loop . end loop");
                                                                                }
                |identifiant ':' FOR  identifiant IN  reverse boucle_pour_tout_in LOOP seq_instructions END_LOOP identifiant ';' 
                                                                                {
                                                                                        if (stricmp ($1.name, $11.name))
                                                                                        {
                                                                                                struct node *tmp_node1 = mknode($6.nd,$7.nd,"reverse or not");
                                                                                                struct node *tmp_node = mknode($4.nd,tmp_node1, "for . in . loop");
                                                                                                $$.nd = mknode(tmp_node,$9.nd, "for . loop . end loop");
                                                                                        }
                                                                                        else {return 1;}                                                                               
                                                                                }
                ;
reverse: REVERSE                                                                {$$.nd=mknode(NULL,NULL,"reverse");}
        |%empty                                                                 {$$.nd=NULL;}
        ;
        
conditionnelle  : IF expression THEN seq_instructions elsif else END_IF         {struct node* tmp1=mknode(mknode($4.nd,$5.nd,"seq_instr elsif"),$6.nd,"args then"); $$.nd = mknode($2.nd,tmp1,"if . then . end_if");}
                ;
else    :%empty                                                                 {$$.nd=NULL;}
        |ELSE seq_instructions                                                  {$$.nd=mknode($2.nd,NULL,"else");}
        ;
elsif   :%empty                                                                 {$$.nd=NULL;}
        |ELSIF expression THEN seq_instructions else elsif                      {
                                                                                        struct node* tmp_node = mknode($4.nd,$5.nd,"args then");
                                                                                        $$.nd=mknode($2.nd,tmp_node,"else . then .");
                                                                                }
        ;

choix: expression                                                               {$$.nd = $1.nd;} 
     | expressions_double_point                                                 {$$.nd = $1.nd;}        
     | OTHERS                                                                   {$$.nd = mknode(NULL,NULL, "others");}
     ;

liste_choix: choix                                                              {$$.nd = $1.nd;}
           | choix '|' liste_choix                                              {$$.nd = mknode($1.nd,$3.nd,"|");}       
           ;

alternative: WHEN liste_choix RIGHT_ARROW seq_instructions                      {$$.nd = mknode($2.nd, $4.nd, "when . => .");}
           ;

liste_alternative   : alternative                                               {$$.nd = $1.nd;}
                    | alternative liste_alternative                             {$$.nd = mknode($1.nd,$2.nd,"liste alternatives");}       
                    ;
distinction_cas : CASE expression IS liste_alternative END_CASE                 {$$.nd = mknode($2.nd,$4.nd, "case . is . end case");}
                ;

saut    : GOTO identifiant ';' etiquette                                        {$$.nd = mknode($2.nd, $4.nd, "goto");}
        ;    //Il faut s'assurer que l'id dans l'étiquette est le même que celui apres goto
etiquette       : LEFT_QUOTE identifiant RIGHT_QUOTE seq_instructions saut      {struct node* tmp_node = mknode($4.nd,$5.nd,"insts et saut");$$.nd = mknode($2.nd, tmp_node, "<< . >> . saut");}
                | LEFT_QUOTE identifiant RIGHT_QUOTE seq_instructions           {$$.nd = mknode($2.nd, $4.nd, "<< . >> .");}
                ;

exit: EXIT_TOKEN';'                                                             {$$.nd = mknode(NULL,NULL,"exit");}
    | EXIT_TOKEN identifiant ';'                                                {$$.nd = mknode($2.nd,NULL,"exit .");}
    | EXIT_TOKEN identifiant WHEN expression ';'                                {$$.nd = mknode($2.nd,$4.nd,"exit . when .");}
    | EXIT_TOKEN WHEN expression ';'                                            {$$.nd = mknode($3.nd,NULL,"exit when .");}
    ;

retour_proc: RETURN ';'                                                         {$$.nd = mknode(NULL,NULL,"return");}
            ;

retour_fonction: RETURN expression ';'                                          {$$.nd = mknode($2.nd,NULL,"return");}
                ;
type: identifiant_qualifie                                                      {$$.nd=mknode($1.nd,NULL,"type");}
    | identifiant_qualifie RANGE expressions_double_point                       {$$.nd=mknode($1.nd,$3.nd,"range");}
    ;

declaration : declaration_objet                                                 {$$.nd=$1.nd;}                           
            | declaration_type                                                  {$$.nd=$1.nd;}                
            | declaration_sous_type                                             {$$.nd=$1.nd;}                        
            | renommage                                                         {$$.nd=$1.nd;}        
            | specification_procedure                                           {$$.nd=$1.nd;}                        
            | specification_fonction                                            {$$.nd=$1.nd;}                        
            | definition_procedure                                              {$$.nd=$1.nd;}                        
            | definition_fonction                                               {$$.nd=$1.nd;}                        
            ;

declaration_objet: identifiant_virgule ':' type_ou_null definition ';'          {
                                                                                        struct node* tmp_node = mknode($3.nd, $4.nd, "declaration objet membre droit");
                                                                                        $$.nd = mknode($1.nd,tmp_node,"declaration objet");
                                                                                }
                 |identifiant_virgule ':' CONSTANT type_ou_null definition ';'  {
                                                                                        push($1.name, seen_const);
                                                                                        struct node* tmp_node = mknode($4.nd, $5.nd, "declaration objet membre droit constant");
                                                                                        $$.nd = mknode($1.nd,tmp_node,"declaration objet");
                                                                                }      
                    ;
identifiant_virgule     : identifiant                                           {$$.nd = $1.nd;}
                        | identifiant ',' identifiant_virgule                   {$$.nd = mknode($1.nd,$3.nd,"liste identifiants");}
                        ;
type_ou_null:type                                                               {$$.nd=$1.nd;}
            |%empty                                                             {$$.nd=NULL;}
            ;
definition  :DEFINE expression                                                  {$$.nd=mknode($2.nd,NULL,"define");}          
            |%empty                                                             {$$.nd=NULL;}
            ;

declaration_type: TYPE identifiant IS_RANGE expressions_double_point ';'        {$$.nd=mknode($2.nd,$4.nd,"type . is range .");}
                ;
                
declaration_sous_type   : SUBTYPE identifiant IS type ';'                       {$$.nd= mknode($2.nd,$4.nd,"subtype . is .");}
                        ;

renommage       : identifiant_virgule ':' type RENAMES identifiant_qualifie ';' {struct node* tmp = mknode($1.nd, $3.nd, ". : ."); $$.nd = mknode(tmp, $5.nd,". renames .");}
                ;
specification_procedure: PROCEDURE identifiant seq_parametres ';'               {$$.nd = mknode($2.nd,$3.nd,"specification proc");}            
                        ;

seq_parametres: %empty                                                          {$$.nd = NULL;}
                | '(' parametres ')'                                            {$$.nd = mknode($2.nd,NULL,"( . )");} 
                ;                                     
parametres      :identifiant_virgule ':' mode identifiant_qualifie                      {struct node* tmp=mknode($3.nd,$4.nd,"membre droit"); $$.nd = mknode($1.nd,tmp,". : .");}
                |identifiant_virgule ':' mode identifiant_qualifie ';' parametres       {
                                                                                                struct node* tmp=mknode($3.nd,$4.nd,"membre droit de ;");
                                                                                                struct node* tmp1=mknode(tmp,$6.nd, ". ; ."); 
                                                                                                $$.nd = mknode($1.nd,tmp1,". : .");
                                                                                        }
                ;
mode: %empty                                                                    {$$.nd = NULL;}
        | IN                                                                    {$$.nd = mknode(NULL,NULL,$1.name);}
        | OUT                                                                   {$$.nd = mknode(NULL,NULL,$1.name);}
        | IN_OUT                                                                {$$.nd = mknode(NULL,NULL,$1.name);}
        ;

specification_fonction: FUNCTION identifiant seq_parametres RETURN identifiant_qualifie ';' 
                                                                                {
                                                                                        struct node* tmp_node=mknode($2.nd,$3.nd,"membre gauche specification fonction");
                                                                                        $$.nd=mknode(tmp_node,$5.nd, "function . return .");
                                                                                }
                        ;


definition_procedure    : PROCEDURE identifiant seq_parametres IS seq_declarations DEPART seq_instructions END identifiant_qualifie_ou_null';'      
                                                                                {
                                                                                        struct node* tmp1=mknode($5.nd,mknode($7.nd,$9.nd,". end ."),". depart .");
                                                                                        struct node* tmp=mknode(mknode($2.nd,$3.nd,"id seq_param"),tmp1,". is .");
                                                                                        $$.nd=mknode(tmp,NULL,"procedure ."); 
                                                                                }
                        ;
identifiant_qualifie_ou_null: %empty                                            {$$.nd=NULL;}
                            |identifiant_qualifie                               {$$.nd=$1.nd;}
                            ;
seq_declarations: %empty                                                        {$$.nd=NULL;}
                | declaration seq_declarations                                  {$$.nd = mknode($1.nd,$2.nd, "liste declarations");}
                ;

definition_fonction     : FUNCTION identifiant seq_parametres RETURN identifiant_qualifie IS seq_declarations DEPART seq_instructions END identifiant_qualifie_ou_null ';' 
                                                                                {
                                                                                        struct node* tmp2=mknode($7.nd,mknode($9.nd,$11.nd,". end ."),". depart .");
                                                                                        struct node* tmp1=mknode($5.nd,tmp2,". is .");
                                                                                        struct node* tmp=mknode(mknode($2.nd,$3.nd,"id seq_param"),tmp1,". return .");
                                                                                        $$.nd=mknode(tmp,NULL,"procedure ."); 
                                                                                }
                        ;

%%
extern int countn;

/* FONTIONS UTILES A LA GESTION DES LISTES ET DES OPERATIONS SUR CELLES-CI */
list push(char* valeur, list liste)
{
    /* On crée un nouvel élément */
    element* nouvelElement = malloc(sizeof(element));
 
    /* On assigne la valeur au nouvel élément */
    nouvelElement->val = valeur;
 
    /* On ajoute en fin, donc aucun élément ne va suivre */
    nouvelElement->nxt = NULL;
 
    if(liste == NULL)
    {
        /* Si la liste est videé il suffit de renvoyer l'élément créé */
        return nouvelElement;
    }
    else
    {
        /* Sinon, on parcourt la liste à l'aide d'un pointeur temporaire et on
        indique que le dernier élément de la liste est relié au nouvel élément */
        element* temp=liste;
        while(temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
        return liste;
    }
}

/* retourne true si valeur est dans liste, false sinon  */
int mem(char* valeur, list liste)
{
    element *tmp=liste;
    /* Tant que l'on n'est pas au bout de la liste */
    while(tmp != NULL)
    {
        if(tmp->val == valeur)
        {
            /* Si l'élément a la valeur recherchée, on renvoie son adresse */
            return 1;
        }
        tmp = tmp->nxt;
    }
    return 0;
}

/* renvoie la première occurrence de valeur dans la liste  "liste" */
list rechercherElement(list liste, char* valeur)
{
    element *tmp=liste;
    /* Tant que l'on n'est pas au bout de la liste */
    while(tmp != NULL)
    {
        if(strcmp(tmp->val, valeur)==0)
        {
            /* Si l'élément a la valeur recherchée, on renvoie son adresse */
            return tmp;
        }
        tmp = tmp->nxt;
    }
    return NULL;
}

/* Affichage de l'arbre : utile pour se rendre compte de sa construction */
void print_inorder(struct node *tree) {
	if (tree->left) {
		print_inorder(tree->left);
	}
	printf("%s, ", tree->token);
	if (tree->right) {
		print_inorder(tree->right);
	}
}
void print_tree(struct node* tree) {
	// print_tree_util(tree, 0);
	printf("\n\nInorder traversal of the Parse Tree is: \n\n");
	print_inorder(tree);
}
/* -------------------------------------------------------------------------- */


int main() {
        
        yyparse(); //lancer l'analyse syntaxique
	printf("Les constantes sont : \n \n");
        print_consts(head);
        check_affect();
}

/* affiche toutes les constantes lues par le parser, peu importe leur nature  */
void print_consts(struct node *tree) {
        if (tree->left) {
		print_consts(tree->left);
	}
        
        if(strcmp(tree->token,"constante")==0){
	        printf("Constante : ");
                printf("%s, ", tree->left->token);
                printf("\n");
        }
	if (tree->right) {
		print_consts(tree->right);
	}
}

int stricmp(char const *a, char const *b)
{
    for (;; a++, b++) {
        int d = tolower((unsigned char)*a) - tolower((unsigned char)*b);
        if (d != 0 || !*a)
            return d;
    }
}
/*
        requires left, right et token valids
        assigns left, right, token
        ensures token est le nom du noeud, left et right ses fils gauches et droits        
*/
struct node* mknode(struct node *left, struct node *right, char *token) {
  struct node *newnode = (struct node*) malloc(sizeof(struct node));
  char *newstr = (char*) malloc(strlen(token)+1);
  strcpy(newstr, token);
  newnode->left = left;
  newnode->right = right;
  newnode->token = newstr;
  return(newnode);
}

/* compte le nombre d'occurrences de valeur dans liste  */
int nombreOccurences(list liste, char* valeur)
        {
        int i = 0;

        /* Si la liste est vide, on renvoie 0 */
        if(liste == NULL)
                return 0;

        /* Sinon, tant qu'il y a encore un élément ayant la val = valeur */
        while((liste = rechercherElement(liste, valeur)) != NULL)
        {
                /* On incrémente */
                liste = liste->nxt;
                i++;
        }
        /* Et on retourne le nombre d'occurrences */
        return i;
}

/*      print un avertissement lorsqu'une constante a été modifiée
        fonction ne fonctionnant pas 
*/
void check_affect(){
        int i = 0;
        while(seen_const != NULL)
        {
                int nb_occ = nombreOccurences(seen_const, seen_const->val);
                if(nb_occ > 1) {
                        printf("ATTENTION : La constante %s a été modifiée", seen_const->val);
                }
                seen_const = seen_const->nxt;
                i++;
                printf("Valeur %s \n", seen_const->val);
        }
}

/* fonction de debug : print un message d'erreur lors d'une erreur de syntaxe, avec un mise en forme donnant la ligne et l'objet sur lequel se comporte l'erreur */
void yyerror(char* s) {
    fprintf(stderr, "On line %d : %s on object %s \n", countn, s, yylval.nd_obj.name); 
}
