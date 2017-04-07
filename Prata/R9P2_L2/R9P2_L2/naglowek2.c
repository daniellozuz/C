#include <stdio.h>
#include <string.h>

#define NAZWA "MEGATHINK, INC."
#define ADRES "10 Megabuck Plaza"
#define MIEJSCOWOSC "Megapolis, CA 94904"
#define LIMIT 40
#define ODSTEP ' '

void n_znak(char ch, int num);

int main(void) {
	int odstepy;

	n_znak('*', LIMIT);
	putchar('\n');

	n_znak(ODSTEP, 12);
	printf("%s\n", NAZWA);

	odstepy = (LIMIT - strlen(ADRES)) / 2;
	n_znak(ODSTEP, odstepy);
	printf("%s\n", ADRES);

	n_znak(ODSTEP, (LIMIT - strlen(MIEJSCOWOSC)) / 2);
	printf("%s\n", MIEJSCOWOSC);

	n_znak('*', LIMIT);

	putchar('\n');

	return 0;
}

void n_znak(char ch, int num) {
	int licznik;

	for (licznik = 1; licznik <= num; licznik++)
		putchar(ch);
}