#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DL 15
#define ILOSC 19

struct gracz {
	int numer;
	char imie[DL];
	char nazwisko[DL];
	int rzuty;
	int trafienia;
	int asysty;
	int faule;
	float skutecznosc;
};

void wyswietl(struct gracz gracze[], int ilosc);

int main(void) {
	FILE * fp;
	char imie[DL], nazwisko[DL];
	int numer, rzuty, trafienia, asysty, faule;

	struct gracz gracze[ILOSC];

	for (int i = 0; i < ILOSC; i++) {
		gracze[i].numer = 0;
		gracze[i].imie[0] = '\0';
		gracze[i].nazwisko[0] = '\0';
		gracze[i].rzuty = 0;
		gracze[i].trafienia = 0;
		gracze[i].asysty = 0;
		gracze[i].faule = 0;
		gracze[i].skutecznosc = 0.0;
	}

	if ((fp = fopen("wyniki.txt", "r")) == NULL) {
		fprintf(stderr, "Blad przy otwieraniu pliku.\n");
		exit(EXIT_FAILURE);
	}

	while (fscanf(fp, "%d %s %s %d %d %d %d", &numer, imie, nazwisko, &rzuty, &trafienia, &asysty, &faule) == 7) {
		gracze[numer].numer = numer;
		strcpy(gracze[numer].imie, imie);
		strcpy(gracze[numer].nazwisko, nazwisko);
		gracze[numer].rzuty += rzuty;
		gracze[numer].trafienia += trafienia;
		gracze[numer].asysty += asysty;
		gracze[numer].faule += faule;
	}

	for (int i = 0; i < ILOSC; i++) {
		if (gracze[i].rzuty > 0)
			gracze[i].skutecznosc = (float)gracze[i].trafienia / gracze[i].rzuty;
	}

	wyswietl(gracze, ILOSC);

	if (fclose(fp))
		fprintf(stderr, "Blad przy zamykaniu pliku.\n");

	return 0;
}

void wyswietl(struct gracz gracze[], int ilosc) {
	int rzuty = 0;
	int trafienia = 0;
	int asysty = 0;
	int faule = 0;

	printf("Nr    Imie            Nazwisko        Rzuty   Trafienia   Asysty   Faule   Skutecznosc\n");
	for (int i = 0; i < ilosc; i++) {
		if (gracze[i].numer > 0) {
			printf("%-5d %-15s %-15s %-7d %-11d %-8d %-7d %-5.2f\n", gracze[i].numer, gracze[i].imie, gracze[i].nazwisko, gracze[i].rzuty, gracze[i].trafienia, gracze[i].asysty, gracze[i].faule, gracze[i].skutecznosc);
			rzuty += gracze[i].rzuty;
			trafienia += gracze[i].trafienia;
			asysty += gracze[i].asysty;
			faule += gracze[i].faule;
		}
	}
	if (rzuty > 0) {
		puts("Statystyki druzyny:");
		printf("                                      %-7d %-11d %-8d %-7d %-5.2f\n", rzuty, trafienia, asysty, faule, (float)trafienia / rzuty);
	}
}