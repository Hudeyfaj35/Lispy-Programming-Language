#include <stdio.h>
#include <stdlib.h>


#include "mpc.h"
#include <editline/readline.h>


int main() {

    /* Create some parsers */
    mpc_parser_t* Number   = mpc_new("number");
    mpc_parser_t* Operator = mpc_new("operator");
    mpc_parser_t* Expr     = mpc_new("expr");
    mpc_parser_t* Lispy    = mpc_new("lispy");

    /* Define them with the following Language */
    mpca_lang(MPCA_LANG_DEFAULT,
      "                                                     \
        number   : /-?[0-9]+/ ;                             \
        operator : '+' | '-' | '*' | '/' ;                  \
        expr     : <number> | '(' <operator> <expr>+ ')' ;  \
        lispy    : /^/ <operator> <expr>+ /$/ ;             \
     ",                                                     
     Number, Operator, Expr, Lispy);

    /* Print version and exit information */
    puts("Lispy version 0.0.0.0.2");
    puts("Press Ctrl+c to exit\n");

    /* In a never ending loop*/
    while(1) {

        /* Output our prompt and get input */
        char* input = readline("Lispy> ");

        /* Add input to history */
        add_history(input);

        /* Attempt to parse the user input */
        mpc_result_t r;
        if(mpc_parse("<stdin>", input, Lispy, &r)) {
            
            /* On success print the AST */
            mpc_ast_print(r.output);
            mpc_ast_delete(r.output);
        } else {
      
            /* Otherwise print the error */
            mpc_err_print(r.error);
            mpc_err_delete(r.error);
        }

        /* Free retrieved input */
        free(input);
    }

    /* Undefine and Delete our Parsers */
    mpc_cleanup(4, Number, Operator, Expr, Lispy);

    return 0;
}
