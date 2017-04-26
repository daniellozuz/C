#include <stdio.h>
#include <string.h>

#define DL 40
#define ILOSC 3

struct osoba {
	char imie1[DL];
	char imie2[DL];
	char nazwisko[DL];
};

struct dane {
	long long int PESEL;
	struct osoba person;
};

void wyswietl1(struct dane osoby[], int ilosc);
void wyswietl2(struct dane osoba);

int main(void) {
	struct dane osoby[ILOSC] = { 
		{
			94101511111,
			{ "Daniel", "Jan", "Zuziak" }
		},
		{
			94151022222,
			{ "Tom", "", "Hanks" }
		},
		{
			94151033333,
			{ "Cezary", "Xardas", "Pazura" }
		}
	};
	
	wyswietl1(osoby, ILOSC);

	puts("\n\nA teraz drugi sposob.");

	for (int i = 0; i < ILOSC; i++) {
		wyswietl2(osoby[i]);
	}

	return 0;
}

void wyswietl1(struct dane osoby[], int ilosc) {
	for (int i = 0; i < ilosc; i++) {
		if (strcmp(osoby[i].person.imie2, "") != 0)
			printf("%s, %s %c. -- %lld\n", osoby[i].person.nazwisko, osoby[i].person.imie1, osoby[i].person.imie2[0], osoby[i].PESEL);
		else
			printf("%s, %s -- %lld\n", osoby[i].person.nazwisko, osoby[i].person.imie1, osoby[i].PESEL);
	}
}

void wyswietl2(struct dane osoba) {
	if (strcmp(osoba.person.imie2, "") != 0)
		printf("%s, %s %c. -- %lld\n", osoba.person.nazwisko, osoba.person.imie1, osoba.person.imie2[0], osoba.PESEL);
	else
		printf("%s, %s -- %lld\n", osoba.person.nazwisko, osoba.person.imie1, osoba.PESEL);
}