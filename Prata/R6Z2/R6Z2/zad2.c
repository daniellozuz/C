#include <stdio.h>

#define ROZMIAR 5

int main(void) {
	int i, j;
	
	for (i = 0; i < ROZMIAR; i++) {
		for (j = 0; j <= i; j++)
			printf("$");
		printf("\n");
	}
	return 0;
}