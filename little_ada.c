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
    ABS = 'abs',
    NOT = 'not',
    HYP = '-'
} absnot;

typedef enum
{
    PLU = '+',
    MIN = '-',
    MUL = '*',
    DIV = '/',
    POW = '**',
    EQU = '=',
    NEQ = '/=',
    INF = '<=',
    SUP = '>=',
    SINF = '<',
    SSUP = '>',
    MOD = 'mod',
    REM = 'rem',
    AND = 'and',
    OR = 'or',
    XOR = 'xor'
} symbole;

typedef union expression
{
    identifiant id;
    constante c;
    struct absnot
    {
        absnot s;
        expression e;
    };
    struct doubleexp
    {
        expression e1;
        symbole s;
        expression e2;
    };

    struct etcoupecircuit
    {
        expression e1;

        expression e2;
    };

    struct oucoupecircuit
    {
        expression e1;

        expression e2;
    };

    struct
    {
        identifiant id;
        expression *e;
    };
} expression;

typedef struct instruction
{
    identifiant id;
    union u
    {
        char *null;
        struct affectation
        {
            identifiant id;
            expression e;
        };
        union appelprocedure
        {
            identifiant id;
            struct args
            {
                identifiant id;
                expression *e;
            };
        };

        struct boucle_simple
        {
            identifiant id;
            char *loop;
            instruction *i;
            char *endloop;
        };

        struct boucle_while
        {
            char *word_while;
            expression e;
            struct boucle_simple b;
        };

        struct boucle_pour_tout
        {
            char *word_for;
            identifiant id1;
            char *in;
            char *reverse;
            union option
            {
                type t;
                struct
                {
                    expression e1;
                    expression e2;
                };
            };
            struct boucle_simple b;
        };

        struct cond_if
        {
            expression e;
            instruction *i;
            union elseif
            {
                char *null;
                struct cond_elseif
                {
                    expression e;
                    instruction *i;
                };
            } * liste_elseif;
            union cond_else
            {
                char *null;
                instruction *i_else;
            };
        };

        struct cas
        {
            expression e;
            struct alternative
            {
                union choix
                {
                    expression e;
                    struct couple_expression
                    {
                        expression e1;
                        expression e2;
                    };
                    char *others;
                };
                instruction *i;
            } * suite;
        };

        struct saut
        {
            identifiant id;
            char *word_goto;
        };

        struct sortie
        {
            char *exit;
            identifiant id;
            char *when;
            expression e;
        };

        struct retour_procedure
        {
            char *retour;
        };

        struct retour_fonction
        {
            expression e;
            char *retour;
        };
    };

} instruction;

typedef union type
{
    identifiant id;
    struct
    {
        identifiant id;
        expression e1;
        expression e2;
    };

} type;

typedef union declaration
{
    struct objet
    {
        identifiant *id;
        char *constant;
        type t;
        expression e;
    };

    struct declare_type
    {
        identifiant id;
        expression e1;
        expression e2;
    };

    struct subtype
    {
        identifiant id;
        type t;
    };

    struct renommage
    {
        identifiant *id;
        type t;
        identifiant id_qualifie;
    };

    struct procedure
    {
        identifiant i;
        union parametre
        {
            identifiant *id;
            struct
            {
                identifiant *id;
                enum mode
                {
                    RIEN,
                    IN = 'in',
                    OUT = 'out',
                    INOUT = 'in out'
                };
                identifiant nom_type;
            };
        } * parametres;
    };

    struct fonction
    {
        struct procedure proc;
        identifiant nom_type_retour;
    };

    struct def
    {
        union proc_func
        {
            struct procedure p;
            struct fonction f;
        };
        declaration *d;
        instruction *i;
        char *nom;
    };
} declaration;

typedef union file
{
    declaration def;
} file;

int main()
{

    return 0;
}
