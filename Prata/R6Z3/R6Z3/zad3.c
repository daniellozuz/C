#include <stdio.h>

#define ROZMIAR 6

int main(void) {
	int i, j;

	for (i = 'A' + ROZMIAR - 1; i > 'A' - 1; i--) {
		for (j = 'A' + ROZMIAR - 1; j >= i; j--)
			printf("%c", j);
		printf("\n");
	}

	return 0;
}