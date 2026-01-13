/* 	Nicholas Agudelo
	Lab 4
	Part one: Main.c	*/

#include <stdio.h>
#include <stdlib.h>

extern int fun1(int, int);
extern int fun2(int);
extern float fun3(int);

int main(int argc, char *argv[]) {

	(void)argc;
    	(void)argv;
	int digit = 0;

	printf("Currently running program \"Lab4\" with parameter \"digit.\"\n");
	printf("Press enter to continue\n");
	scanf("%d", &digit);

	int pad = 0;
	int result = 0;
	float result2 = 0.0;

	if (digit == 0) {
		printf("Parameter is empty");
	} else {
		do {
			printf("Jot down a number, fella.\nWrite zero to quit.\n");
			scanf("%d", &digit);

			// Call fun1 (square)
               		result = fun1(digit, pad);
                	printf("Your number \"%d\" squared is: %d\n", digit, result);

                	// Call fun2 (add 1)
                	result = fun2(digit);
                	printf("Your number \"%d\" plus one is: %d\n", digit, result);

                	// Call fun3 (divide by 2)
                	result2 = fun3(digit);
                	printf("Your number \"%d\" divided by 2 is: %f\n", digit, result2);
		} while (digit != 0);
	}

	printf("Program over.\n");
	return 0;

}
