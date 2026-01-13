
#include <stdio.h>
#define MASK 0x0220u

/*	int isBit5Set(unsigned int num)
	Return true/false depending on if 
	the 5th bit from the right in num 
	is set or not				*/

	unsigned int isBit5Set(unsigned int num) {
		return (num & (1u << 4)) ? 'Y' : 'N';
	}

/*	unsigned int maskIt(unsigned int num)
	Return the binary result of “OR” masking 
	num with 0x0220					*/

	unsigned int maskIt (unsigned int num) {
		return num | MASK;
	}

/*	unsigned int shiftItLeft(unsigned int num, int bits)
	Return the binary result of shifting num to the LEFT 
	by “bits” number of bits				*/

	unsigned int shiftItLeft(unsigned int num, int bits) {
		return num << bits;
	}

/*	unsigned int shiftItRight(unsigned int num, int bits)
	Return the binary result of shifting num to the RIGHT 
	by “bits” number of bits				*/

	unsigned int shiftItRight(unsigned int num, int bits) {
		return num >> bits;
	}
