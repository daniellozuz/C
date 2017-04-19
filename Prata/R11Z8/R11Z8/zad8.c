#include <stdio.h>
#include <stdbool.h>

#define ROZMIAR 30

char * zawiera_lan(char * lancuch, char * czesc);

int main(void) {
	char dlugi[ROZMIAR] = "pula";
	char krotki[ROZMIAR] = "ul";
	char * ptr;

	ptr = zawiera_lan(dlugi, krotki);

	printf("Adres  dlugi: %p, zawartosc  dlugi: %s\n", dlugi, dlugi);
	printf("Adres krotki: %p, zawartosc krotki: %s\n", krotki, krotki);
	printf("Adres    ptr: %p\n", ptr);

	return 0;
}

char * zawiera_lan(char * lancuch, char * czesc) {
	int i, j;

	bool znaleziono;

	for (i = 0; i <= (strlen(lancuch) - strlen(czesc)); i++) {
		znaleziono = true;

		for (j = 0; j < strlen(czesc); j++) {
			if (lancuch[i + j] != czesc[j])
				znaleziono = false;
		}

		if (znaleziono == true)
			return lancuch + i;
	}

	return NULL;
}