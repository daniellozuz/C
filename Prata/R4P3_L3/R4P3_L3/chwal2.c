#include <stdio.h>
#include <string.h>

#define POCHWALA "Ach, jakie wspaniale imie!"

int main(void) {
	char imie[40];
	printf("Jak masz na imie?\n");
	scanf_s("%s", imie, 40);
	printf("Witaj, %s. %s\n", imie, POCHWALA);
	printf("Twoje imie, skladajace sie z %d liter, zajmuje %d komoerk pamieci.\n", strlen(imie), sizeof imie);
	printf("Pochwala sklada sie z %d liter ", strlen(POCHWALA));
	printf("i zajmuje %d komorek pamieci.\n", sizeof POCHWALA);

	return 0;
}