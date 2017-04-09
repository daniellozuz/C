#include <stdio.h>

#define ROZMIAR 4

int main(void) {
	int troche_danych[ROZMIAR] = { 1492, 1066 };
	int i;

	printf("%2s%24s\n", "i", "troche_danych[i]");

	for (i = 0; i < ROZMIAR; i++) 
		printf("%2d%24d\n", i, troche_danych[i]);

	return 0;
}