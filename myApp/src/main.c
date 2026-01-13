/* 	Nicholas Agudelo
	CS60: Lab 4		*/

/*Responsibilities of "Main.c":

	1. Check command line usage (show the usage message when no argument 
	is provided).

	2. Print an identifying header (the "Running ..." line and the TITLE
	macro).

	3. Print the report header once.

	4. Repeatedly prompt the user for two integers, call helper functions 
	to compute the number of integers strictly between them, and print a
	formatted result line.

	5. Stop when the user enters 0 and 0.*/

#include <stdio.h> 	//Input and output.
#include <stdlib.h>	//exit() macro
#include "../include/lab5.h"	//Defines TITLE
#include "../include/utils.h"	//Informant about the existence of functions found in.

extern int getRange(int, int);
extern void printFuns();

int main(int argc, char *argv[]) {

	int firstNum = 0;
	int lastNum = 0;

	if (argc < 2) {
		printf("Usage: %s [arg]\n", argv[0]);
		exit(1);
	}

	printf("Running %s with %s\n", argv[0], argv[1]);
	printf("%s", TITLE);
	printHeader();

	do {
		printf("Enter first number: ");
		scanf("%d", &firstNum);
		printf("Enter last number: ");
		scanf("%d", &lastNum);
		int range = getRange(firstNum, lastNum);
		printDataLine(firstNum, lastNum, range);

	} while (firstNum != 0 && lastNum != 0);

	return 0;
}
