#include <stdio.h>

int main(void) {
	char imie[40];
	char nazwisko[40];

	printf("Podaj swoje imie.\n");
	scanf_s("%s", imie, 40);
	printf("Podaj swoje nazwisko.\n");
	scanf_s("%s", nazwisko, 40);

	printf("%s %s\n", nazwisko, imie);

	return 0;
}