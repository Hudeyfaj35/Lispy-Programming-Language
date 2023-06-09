#include <stdio.h>
#include <stdlib.h>


#include <editline/readline.h>


int main() {

    /* Print version and exit information */
    puts("Lispy version 0.0.0.0.1");
    puts("Press Ctrl+c to exit\n");

    /* In a never ending loop*/
    while(1) {
        
        /* Output our prompt and get input */
        char* input = readline("Lispy> ");

        /* Add input to history */
        add_history(input);

        /* Echo input back to user */
        printf("No you're a %s\n", input);

        /* Free retrieved input */
        free(input);
    }


    return 0; 
}
