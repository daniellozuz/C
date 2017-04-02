#include <stdio.h>

int main(void) {
	char imie[40], nazwisko[40];

	printf("Podaj imie i nazwisko.\n");
	scanf_s("%s %s", imie, 40, nazwisko, 40);

	printf("%s %s\n", imie, nazwisko);
	printf("%*d %*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));

	printf("%s %s\n", imie, nazwisko);
	printf("%-*d %-*d\n", strlen(imie), strlen(imie), strlen(nazwisko), strlen(nazwisko));

	return 0;
}