#include <stdio.h>
#include <string.h>

#define DL 30

struct daneos {
	char imie[DL];
	char nazw[DL];
	int litery;
};

struct daneos pobierz(void);
struct daneos oblicz(struct daneos);
void pokaz(struct daneos);
char * wczytaj(char * z, int ile);

int main(void) {
	struct daneos osoba;

	osoba = pobierz();
	osoba = oblicz(osoba);
	pokaz(osoba);

	return 0;
}

struct daneos pobierz(void) {
	struct daneos temp;
	
	puts("Podaj swoje imie.");
	wczytaj(temp.imie, DL);
	puts("Podaj swoje nazwisko.");
	wczytaj(temp.nazw, DL);
	
	return temp;
}

struct daneos oblicz(struct daneos info) {
	info.litery = strlen(info.imie) + strlen(info.nazw);
	
	return info;
}

void pokaz(struct daneos info) {
	printf("%s %s, Twoje imie i nazwisko skladaja sie w sumie z %d liter.\n", info.imie, info.nazw, info.litery);
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