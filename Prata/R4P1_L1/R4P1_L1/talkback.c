#include <stdio.h>
#include <string.h>

#define GESTOSC 62.4

int main() {
	float waga, objetosc;
	int rozmiar, litery;
	char nazwa[40];

	printf("Witam! Podaj swoje imie.\n");
	scanf_s("%s", nazwa, 40);
	printf("%s, ile funtow wazysz?\n", nazwa);
	scanf_s("%f", &waga);
	rozmiar = sizeof nazwa;
	litery = strlen(nazwa);
	objetosc = waga / GESTOSC;
	printf("Zatem, %s, Twoja objetosc wynosi %2.2f stopy szescienne.\n", nazwa, objetosc);
	printf("Ponadto Twoje imie zawiera %d liter(y),\n", litery);
	printf("a na jego przechowanie przeznaczylismy %d bajtow.\n", rozmiar);

	return 0;
}