#include <stdio.h>

int main(void) {
	int x = 100;

	printf("Dziesietny = %d; osemkowy = %o; szesnastkowy = %x\n", x, x, x);
	printf("Dziesietny = %d; osemkowy = %#o; szesnastkowy = %#x\n", x, x, x);

	return 0;
}