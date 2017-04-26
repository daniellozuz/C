#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define DL 30
#define N 12

struct miejsce {
	int numer;
	bool wolne;
	char imie[DL];
	char nazwisko[DL];
};

char * wczytaj(char * z, int ile);
void menu(void);
void zainicjuj(struct miejsce *, int ilosc);
void pokaz_puste(struct miejsce *, int ilosc);

int main(void) {
	FILE * fp;
	struct miejsce samolot[N];
	zainicjuj(samolot, N);
	int licznik = 0;
	int rozmiar = sizeof(struct miejsce);
	char wybor;
	int numer;

	if ((fp = fopen("miejsca.dat", "a+b")) == NULL) {
		fprintf(stderr, "Blad przy otwarciu pliku miejsca.dat\n");
		exit(EXIT_FAILURE);
	}

	rewind(fp);
	struct miejsce temp;
	while (licznik < N && fread(&temp, rozmiar, 1, fp) == 1) {
		puts("Wczytalem pasazera.");
		samolot[temp.numer - 1] = temp;
		licznik++;
	}

	menu();
	while (scanf("%c", &wybor) == 1) {
		while (getchar() != '\n')
			continue;
		switch (wybor) {
		case 'a' :
			printf("Jest %d pustych miejsc.\n\n", N - licznik);
			break;
		case 'b' :
			pokaz_puste(samolot, N);
			break;
		case 'd' :
			if (licznik < N) {
				puts("Podaj numer miejsca:");
				if (scanf("%d", &numer) == 1) {
					while (getchar() != '\n')
						continue;
					if (numer <= N && numer > 0 && samolot[numer - 1].wolne) {
						puts("Podaj imie pasazera (wcisnij klawisz [enter] na poczatku wiersza aby anulowac).");
						wczytaj(samolot[numer - 1].imie, DL);
						if (strcmp(samolot[numer - 1].imie, "\0") == 0) {
							puts("Anulowano.");
							break;
						}
						puts("Podaj nazwisko pasazera (wcisnij klawisz [enter] na poczatku wiersza aby anulowac).");
						wczytaj(samolot[numer - 1].nazwisko, DL);
						if (strcmp(samolot[numer - 1].nazwisko, "\0") == 0) {
							puts("Anulowano.");
							break;
						}
						samolot[numer - 1].wolne = false;
						samolot[numer - 1].numer = numer;
						licznik++;
						putchar('\n');
					}
					else {
						puts("Niestety, to miejsce jest juz zajete.");
					}
				}
			}
			else
				puts("Niestety, samolot jest pelen.");
			break;
		case 'e' :
			if (licznik > 0) {
				puts("Podaj numer rezerwacji do usuniecia:");
				if (scanf("%d", &numer) == 1) {
					while (getchar() != '\n')
						continue;
					if (numer > 0 && numer <= N && samolot[numer - 1].wolne == false) {
						struct miejsce temp = { 0, true, "", "" };
						samolot[numer - 1] = temp;
						samolot[numer - 1].numer = numer;
						licznik--;
						printf("Usunieto rezerwacje nr %d\n", numer);
					}
					else
						puts("Niepoprawny numer rezerwacji.");
					putchar('\n');
				}
			}
			else
				puts("Nie ma co usuwac.");
			break;
		case 'f' :
			printf("Dziekujemy.\n\n");
			return 0;
		default :
			printf("Wybierz poprawnie.\n\n");
		}
		menu();
	}

	return 0;
}

char * wczytaj(char * z, int ile) {
	char * wynik;
	char * tutaj;

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

void menu(void) {
	puts("Aby wybrac opcje, wpisz jej oznaczenie literowe:");
	puts("a) Pokaz liczbe pustych miejsc");
	puts("b) Pokaz liste pustych miejsc");
	puts("c) Pokaz alfabetyczna liste miejsc");
	puts("d) Zarezerwuj miejsce dla klienta");
	puts("e) Usun rezerwacje miejsca");
	puts("f) Koniec\n");
}

void zainicjuj(struct miejsce * samolot, int ilosc) {
	struct miejsce temp = {0, true, "", ""};
	for (int i = 0; i < ilosc; i++) {
		samolot[i] = temp;
		samolot[i].numer = i + 1;
	}
}

void pokaz_puste(struct miejsce * samolot, int ilosc) {
	int wolne = 0;

	puts("Oto wolne miejsca:");
	for (int i = 0; i < ilosc; i++) {
		if (samolot[i].wolne == true) {
			printf("Wolne miejsce: %d\n", samolot[i].numer);
			wolne++;
		}
	}

	if (wolne == 0)
		puts("Niestety, brak wolnych miejsc.");
	putchar('\n');
}