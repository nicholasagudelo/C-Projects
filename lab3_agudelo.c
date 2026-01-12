/* 	
	Nicholas Agudelo 
	Lab 3
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int count;

	printf("Hey fella, jot down a number.\n");
	scanf("%d", &count);


	/* "For" Loop */
	for (int i = 1; i <= count; i++) {
		printf("Oy! This is the \"For\" loop. Repetition number:%d\n", i);
	}

	/* "While" Loop */
	int i = 1;
	while ( i <= count) {
		printf("Oy! This is the \"For\" loop. Repetition number:%d\n", i);
		i++;
	}

	/* "Do-while" Loop */
	i = 1;

	do {
		printf("Oy! This is the \"Do-while\" loop. Repetition number:%d\n", i);
		i++;
	}while (i <= count);

	return 0;
}

