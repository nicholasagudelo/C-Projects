/*	Nicholas Agudelo
	CS60–01: Lab 6		*/

#include <stdio.h>
#include <stdlib.h>
#include "lab6.h"

int main (int argc, char* argv[]) {

	//Stops program from crashing
	if (argc != 2) {
        	printf("Usage: %s <input_file>\n", argv[0]);
        	return 1;
    	}
	
    	FILE *in = fopen(argv[1], "r");

   	 if (!in) {
		printf("Error opening input file.\n");
        	return 1;
   	 }

   	 FILE *out = fopen("lab6.out", "w");

    	if (!out) {
        	printf("Error creating output file.\n");
        	fclose(in);
        	return 1;
    	}

    	unsigned int num;
    	while (fscanf(in, "%u", &num) == 1) {
        	fprintf(out, "Read data: %u [0x%04X]\n", num, num);

        	char *bin = dToB(num);
        	fprintf(out, " In Binary:  %s\n", bin);
        	free(bin);

		//maskIt()
        	bin = dToB(maskIt(num));
        	fprintf(out, " MaskIt:     %s\n", bin);
        	free(bin);

		//shiftItLeft()
        	bin = dToB(shiftItLeft(num, 3));
        	fprintf(out, " ShiftLeft:  %s\n", bin);
        	free(bin);

		//shiftItRight()
        	bin = dToB(shiftItRight(num, 3));
        	fprintf(out, " ShiftRight: %s\n", bin);
        	free(bin);
	
		//isBit5Set()
        	fprintf(out, " Bit 5 is    %s\n\n", isBit5Set(num) ? "Set" : "NOT Set");
    	}

    	fclose(in);
    	fclose(out);
    	return 0;
	
}
