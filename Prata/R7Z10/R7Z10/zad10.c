#include <stdio.h>

#define STAWKA1 0.15
#define STAWKA2 0.28

#define PROG1 17850
#define PROG2 23900
#define PROG3 29750
#define PROG4 14875

void menu();

int main(void) {
	char ch;
	int prog;
	float podatek;
	float dochod;

	menu();

	while (scanf_s("%c", &ch) && ch != '5') {
		switch (ch) {
		case '1':
			prog = PROG1;
			break;
		case '2':
			prog = PROG2;
			break;
		case '3':
			prog = PROG3;
			break;
		case '4':
			prog = PROG4;
			break;
		case '\n':
			continue;
		default:
			printf("Wybierz prosze poprawna opcje.\n");
			menu();
			continue;
		}

		printf("\nPodaj swoj dochod.\n");
		scanf_s("%f", &dochod);

		if (dochod <= prog) {
			podatek = STAWKA1 * dochod;
		}
		else {
			podatek = STAWKA1 * prog + STAWKA2 * (dochod - prog);
		}

		printf("\nOd kwoty %.2f zaplacisz %.2f podatku.\n", dochod, podatek);

		menu();
	}

	printf("Dziekujemy!\n");

	return 0;
}

void menu() {
	printf("\nWybierz kategorie, do ktorej nalezysz.\n");
	printf("Kategoria                             Podatek\n");
	printf("1) Stan wolny                         15%% dochodu do 17 850 $ plus 28%% reszty.\n");
	printf("2) Glowa rodziny                      15%% dochodu do 23 900 $ plus 28%% reszty.\n");
	printf("3) Malzenstwo, rozliczenie wspolne    15%% dochodu do 29 750 $ plus 28%% reszty.\n");
	printf("4) Malzenstwo, rozliczenie osobne     15%% dochodu do 14 875 $ plus 28%% reszty.\n");
	printf("5) Wyjscie.\n\n");
}