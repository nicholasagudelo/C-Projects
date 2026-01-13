/*	Nicholas Agudelo
 	CSC 60-01
 	Lab 6			*/

#ifndef LAB6_H
#define LAB6_H

/* Provided in convUtils.c */
char *dToB(int n);

/* Bitwise operation prototypes */
unsigned int isBit5Set(unsigned int num);
unsigned int maskIt(unsigned int num);
unsigned int shiftItLeft(unsigned int num, int bits);
unsigned int shiftItRight(unsigned int num, int bits);

#endif /* LAB6_H */

