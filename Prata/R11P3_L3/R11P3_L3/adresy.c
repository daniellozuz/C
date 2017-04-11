#include <stdio.h>

#define LANCUCH "Jestem wyjatkowy."

int main(void) {
	char tab[] = LANCUCH;
	const char * wsk = LANCUCH;

	printf("adres \"Jestem wyjatkowy\": %p\n", "Jestem wyjatkowy.");
	printf("adres tab: %p\n", tab);
	printf("adres wsk: %p\n", wsk);
	printf("adres LANCUCH-a: %p\n", LANCUCH);
	printf("adres \"Jestem wyjatkowy\": %p\n", "Jestem wyjatkowy.");

	return 0;
}