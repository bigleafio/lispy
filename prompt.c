#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
//#include <editline/history.h>

/* Declare a buffer for user input of size 2048 */

//static char input[2048];

int main (int argc, char** argv){

	puts("Lispy Version 0.0.1");
	puts("Press Ctrl+c to Exit\n");

	/* In a never ending loop */
	while(1){

		/* Output out prompt */

		char* input = readline("lipsy> ");
    add_history(input);

		/* Echo line back to user */
		printf("No you are a %s", input);

		free(input);
	}
	return 0;
}
