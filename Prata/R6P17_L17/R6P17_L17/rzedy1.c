#include <stdio.h>

#define RZEDY 6
#define ZNAKI 10

int main(void) {
	int rzad;
	char ch;

	for (rzad = 0; rzad < RZEDY; rzad++) {
		for (ch = 'A'; ch < ('A' + ZNAKI); ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}