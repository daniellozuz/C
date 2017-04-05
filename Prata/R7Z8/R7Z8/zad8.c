#include <stdio.h>

#define STAWKA1 35
#define STAWKA2 37
#define STAWKA3 40
#define STAWKA4 45
#define NADGODZINY1 1.5 * STAWKA1
#define NADGODZINY2 1.5 * STAWKA2
#define NADGODZINY3 1.5 * STAWKA3
#define NADGODZINY4 1.5 * STAWKA4

#define PROG 40

#define PROG1 1200
#define PROG2 (600 + PROG1)

#define PODATEK1 0.15
#define PODATEK2 0.20
#define PODATEK3 0.25

void menu();

int main(void) {
	int godz;
	int wybor;
	float wyn;
	int stawka;
	int nadgodziny;

	menu();
	
	while (scanf_s("%d", &wybor)) {
		switch (wybor) {
		case 1:
			stawka = STAWKA1;
			nadgodziny = NADGODZINY1;
			break;
		case 2:
			stawka = STAWKA2;
			nadgodziny = NADGODZINY2;
			break;
		case 3:
			stawka = STAWKA3;
			nadgodziny = NADGODZINY3;
			break;
		case 4:
			stawka = STAWKA4;
			nadgodziny = NADGODZINY4;
			break;
		case 5:
			goto koniec;
			break;
		default :
			printf("Niepoprawny wybor.\n");
			menu();
			continue;
		}

		printf("Podaj ilosc przepracowanych godzin w tygodniu.\n");

		scanf_s("%d", &godz);

		if (godz <= PROG)
			wyn = godz * stawka;
		else
			wyn = PROG * stawka + (godz - PROG) * nadgodziny;

		if (wyn <= PROG1)
			wyn -= wyn * PODATEK1;
		else if (wyn <= PROG2)
			wyn -= PROG1 * PODATEK1 + (wyn - PROG1) * PODATEK2;
		else
			wyn -= PROG1 * PODATEK1 + (PROG2 - PROG1) * PODATEK2 + (wyn - PROG2) * PODATEK3;

		printf("Zarobisz %f zl.\n", wyn);

		menu();
	}

koniec:
	printf("Dziekujemy!\n");

	return 0;
}

void menu() {
	printf("******************************************************************\n");
	printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
	printf("1) 35 zl/godz.                         2) 37 zl/godz.\n");
	printf("3) 40 zl/godz.                         2) 45 zl/godz.\n");
	printf("5) wyjscie\n");
	printf("******************************************************************\n");
}