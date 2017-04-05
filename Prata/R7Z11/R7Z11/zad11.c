#include <stdio.h>

#define ARBUZ 1.25
#define BURAK 0.65
#define CEBULA 0.89

#define PROG_RABAT 100
#define RABAT 0.05

#define WAGA1 5
#define WAGA2 20

#define KOSZT1 3.5
#define KOSZT2 10

#define KILO 0.1

int main(void) {
	char ch;
	unsigned int arbuzy = 0;
	unsigned int buraki = 0;
	unsigned int cebule = 0;
	unsigned int ilosc;
	float koszt_a, koszt_b, koszt_c, koszt_przes, koszt;
	float rabat = 0;

	printf("Podaj typ towaru ktory chcesz kupic.\nA - Arbuzy\nB - Buraki\nC - Cebule\n");

	while (scanf_s("%c", &ch) && ch != 'K') {
		switch (ch) {
		case 'A' :
			printf("Podaj ilosc Arbuzow:\n");
			scanf_s("%u", &ilosc);
			arbuzy += ilosc;
			printf("Dodano %u kilo Arbuzow.\nW koszyku jest %u kilo Arbuzow.\n\n", ilosc, arbuzy);
			break;
		case 'B':
			printf("Podaj ilosc Burakow:\n");
			scanf_s("%u", &ilosc);
			buraki += ilosc;
			printf("Dodano %u kilo Burakow.\nW koszyku jest %u kilo Burakow.\n\n", ilosc, buraki);
			break;
		case 'C':
			printf("Podaj ilosc Cebuli:\n");
			scanf_s("%u", &ilosc);
			cebule += ilosc;
			printf("Dodano %u kilo Cebuli.\nW koszyku jest %u kilo Cebuli.\n\n", ilosc, cebule);
			break;
		case '\n':
			continue;
		default:
			printf("Wybierz poprawna opcje.\n\n");
			continue;
		}

		printf("Podaj typ towaru ktory chcesz kupic.\nA - Arbuzy\nB - Buraki\nC - Cebule\n");
	}

	koszt_a = arbuzy * ARBUZ;
	koszt_b = buraki * BURAK;
	koszt_c = cebule * CEBULA;
	koszt = koszt_a + koszt_b + koszt_c;

	if (koszt > PROG_RABAT)
		rabat = (koszt)* RABAT;

	ilosc = arbuzy + buraki + cebule;

	if (ilosc <= WAGA1)
		koszt_przes = KOSZT1;
	else if (ilosc <= WAGA2)
		koszt_przes = KOSZT2;
	else
		koszt_przes = KOSZT2 + (ilosc - WAGA2) * KILO;

	printf("\n\nPODSUMOWANIE ZAMOWIENIA:\n");
	printf(" Towar    Cena jedn./kg    Waga      Wartosc\n");
	printf("Arbuzy             %.2f   %5d      %7.2f\n", ARBUZ, arbuzy, koszt_a);
	printf("Buraki             %.2f   %5d      %7.2f\n", BURAK, buraki, koszt_b);
	printf("Cebule             %.2f   %5d      %7.2f\n", CEBULA, cebule, koszt_c);
	printf("--------------------------------------------\n");
	printf("Suma:                                %7.2f\n", koszt);
	printf("Rabat:                              -%7.2f\n", rabat);
	printf("Koszt przesylki:                     %7.2f\n", koszt_przes);
	printf("--------------------------------------------\n");
	printf("                               Suma: %7.2f\n", koszt + koszt_przes - rabat);

	return 0;
}