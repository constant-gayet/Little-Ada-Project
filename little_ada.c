typedef struct commentaire
{
    char *body;
} commentaire;
typedef struct identifiant
{
    char *name;
} identifiant;

typedef struct constante
{
    char *value;
} constante;

typedef enum
{
    ABS,
    NOT,
    HYP
} absnot;

typedef enum
{
    PLU,
    MIN,
    MUL,
    DIV,
    POW,
    EQU,
    NEQ,
    INF,
    SUP,
    SINF,
    SSUP,
    MOD,
    REM,
    AND,
    OR,
    XOR
} symbole;

typedef union expression
{
    identifiant id;
    constante c;
    struct
    {
        absnot s;
        union expression *e;
    } absnot;
    struct
    {
        union expression *e1;
        symbole s;
        union expression *e2;
    } doubleexp;

    struct
    {
        union expression *e1;

        union expression *e2;
    } etcoupecircuit;

    struct
    {
        union expression *e1;

        union expression *e2;
    } oucoupecircuit;

    struct
    {
        identifiant id1;
        union expression *e;
    };
} expression;

typedef struct instruction
{
    identifiant id;
    union
    {
        char *null;
        struct
        {
            identifiant id;
            expression e;
        } affectation;
        union
        {
            identifiant id;
            struct
            {
                identifiant id;
                expression *e;
            } args;
        } appelprocedure;

        struct
        {
            identifiant id;
            char *loop;
            struct instruction *ins_list;
            char *endloop;
        } boucle_simple;

        struct
        {
            char *word_while;
            expression e;
            struct boucle_simple *b;
        } boucle_while;

        struct
        {
            char *word_for;
            identifiant id1;
            char *in;
            char *reverse;
            union
            {
                union type *t;
                struct
                {
                    expression e1;
                    expression e2;
                };
            } option;
            struct boucle_simple *b;
        } boucle_pour_tout;

        struct
        {
            expression e;
            struct instruction *ins_list;
            union
            {
                char *null;
                struct
                {
                    expression e;
                    struct instruction *ins_list;
                } cond_elseif;
            } * elseif;
            union
            {
                char *null;
                struct instruction *i_else;
            } cond_else;
        } cond_if;

        struct
        {
            expression e;
            struct
            {
                union
                {
                    expression e;
                    struct
                    {
                        expression e1;
                        expression e2;
                    } couple_expression;
                    char *others;
                } choix;
                struct instruction *ins_list;
            } * alternative;
        } cas;

        struct
        {
            identifiant id;
            char *word_goto;
        } saut;

        struct
        {
            char *exit;
            identifiant id;
            char *when;
            expression e;
        } sortie;

        struct
        {
            char *retour;
        } retour_procedure;

        struct
        {
            expression e;
            char *retour;
        } retour_fonction;
    } body;

} instruction;

typedef union type
{
    identifiant id;
    struct
    {
        identifiant id1;
        expression e1;
        expression e2;
    };

} type;

typedef union declaration
{
    struct
    {
        identifiant *id;
        char *constant;
        type t;
        expression e;
    } objet;

    struct
    {
        identifiant id;
        expression e1;
        expression e2;
    } declare_type;

    struct
    {
        identifiant id;
        type t;
    } subtype;

    struct
    {
        identifiant *id;
        type t;
        identifiant id_qualifie;
    } renommage;

    struct procedure
    {
        identifiant i;
        union parametre
        {
            identifiant *id;
            struct
            {
                identifiant *id1;
                enum
                {
                    RIEN,
                    IN,
                    OUT,
                    INOUT
                } mode;
                identifiant nom_type;
            };
        } * parametres;
    } proc;

    struct fonction
    {
        struct procedure proc;
        identifiant nom_type_retour;
    } fonct;

    struct
    {
        union
        {
            struct procedure p;
            struct fonction f;
        } proc_func;
        union declaration *d;
        instruction *i;
        char *nom;
    } def;
} declaration;

typedef union file
{
    declaration def;
} file;

int main()
{

    return 0;
}