#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
	puts("Lispy Version 0.0.0.3");
	puts("Press Ctrl+c to Exit\n");
	
	while(1) {
		char* input = readline("@lispy> ");
		add_history(input);

		printf("Did you just call me %s?!\n", input);
		free(input);
	}
	return 0;
}
