#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAXTYT 41
#define MAXAUT 31

struct ksiazka {
	char tytul[MAXTYT];
	char autor[MAXAUT];
	float wartosc;
};

int main(void) {
	struct ksiazka polecana;
	int wynik;

	puts("Wprowadz wynik testu.");
	scanf("%d", &wynik);

	if (wynik >= 84)
		polecana = (struct ksiazka) { "Zbrodnia i kara", "Fiodor Dostojewski", 9.99 };
	else
		polecana = (struct ksiazka) { "Kubus puchatek", "A.A.Milne", 5.99 };

	puts("Wlasciwa dla Ciebie ksiazka to:");
	printf("%s autorstwa %s: $%.2f\n", polecana.tytul, polecana.autor, polecana.wartosc);

	return 0;
}