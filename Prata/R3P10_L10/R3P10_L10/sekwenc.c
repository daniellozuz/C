#include <stdio.h>

int main(void) {
	float pensja;
	printf("Podaj miesieczne zarobki:");
	printf(" ________ zl\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf_s("%f", &pensja);
	printf("\n\t%.2f zl miesiecznie to %.2f zl rocznie.", pensja, pensja * 12.0);
	printf("\rHo, ho!\n");

	return 0;
}