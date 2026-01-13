#include <stdio.h>
#include "../include/utils.h"

void printHeader() {
    printf("The count of integers in a range:\n");
    printf(" 1st Num   2nd Num  # between\n");
    printf("--------  --------  ---------\n");
}

void printDataLine(int fNum, int lNum, int range) {
    printf("%8d %9d %10d\n", fNum, lNum, range);
}

