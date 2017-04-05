#include <stdio.h>

#define ROZMIAR 6

int main(void) {
	int i, j;

	for (i = 0; i < ROZMIAR; i++) {
		for (j = 0; j <= i; j++)
			printf("%c", 'A' + (1 + i) * i / 2 + j);
		printf("\n");
	}

	return 0;
}