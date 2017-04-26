#include <stdio.h>
#include <string.h>

#define DL 30

struct daneos {
	char imie[DL];
	char nazw[DL];
	int litery;
};

void pobierz(struct daneos *);
void oblicz(struct daneos *);
void pokaz(const struct daneos *);
char * wczytaj(char * z, int ile);

int main(void) {
	struct daneos osoba;
	
	pobierz(&osoba);
	oblicz(&osoba);
	pokaz(&osoba);

	return 0;
}

void pobierz(struct daneos * wst) {
	puts("Podaj swoje imie.");
	wczytaj(wst->imie, DL);
	puts("Podaj swoje nazwisko.");
	wczytaj(wst->nazw, DL);
}

void oblicz(struct daneos * wst) {
	wst->litery = strlen(wst->imie) + strlen(wst->nazw);
}

void pokaz(const struct daneos * wst) {
	printf("%s %s, Twoje imie i nazwisko skladaja sie w sumie z %d liter.\n", wst->imie, wst->nazw, wst->litery);
}

char * wczytaj(char * z, int ile) {
	char * tutaj;
	char * wynik;

	if (wynik = fgets(z, ile, stdin)) {
		if (tutaj = strchr(z, '\n'))
			*tutaj = '\0';
		else {
			while (getchar() != '\n')
				continue;
		}
	}

	return wynik;
}