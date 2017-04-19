#include <stdio.h>
#include <ctype.h>

#define ROZMIAR 30

void pobierz(char * znak);

int main(void) {
	char slowo[ROZMIAR];
	
	printf("Podaj slowo do pobrania (max %d znakow).\n", ROZMIAR - 1);
	pobierz(slowo);

	puts("Przyjalem.");
	puts(slowo);

	return 0;
}

void pobierz(char * znak) {
	char ch;
	int i = 0;

	while (ch = getchar()) {
		if (i == 0 && isspace(ch))
			continue;
		else {
			if (isspace(ch))
				break;

			znak[i] = ch;
			i++;
		}
	}

	if (ch != '\n')
	while (getchar() != '\n')
		continue;

	znak[i] = '\0';
}