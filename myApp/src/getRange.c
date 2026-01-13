#include "../include/utils.h"

int getRange(int firstNum, int lastNum) {

	if (firstNum == lastNum) return 0;

	if (firstNum < lastNum) {
		return (lastNum - firstNum - 1);
	} else {
		return (firstNum - lastNum - 1);
	}
}
