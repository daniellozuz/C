#include <stdio.h>

int main(void) {
	char ch;

	printf("Wypisz jakis znak.\n");
	scanf_s("%c", &ch);
	printf("Kod znaku %c to %d.\n", ch, ch);

	return 0;
}