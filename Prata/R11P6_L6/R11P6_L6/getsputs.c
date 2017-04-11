#include <stdio.h>

#define DLUGOSC 81

int main(void) {
	char slowa[DLUGOSC];

	puts("Prosze wprowadzic lancuch.");
	gets_s(slowa, DLUGOSC);
	
	printf("Wprowadzony lancuch (na dwa sposoby):\n%s\n", slowa);
	puts(slowa);
	puts("Gotowe.");

	return 0;
}