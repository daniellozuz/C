#include <stdio.h>

int main(void) {
	int proba = 1;
	char odpowiedz;

	printf("Wybierz liczbe od 1 do 100. Sprobuje ja odgadnac.\nWpisz t, jesli moja proba jest udana lub n, jesli nie trafilem.\n");
	printf("Hmm... czy Twoja liczba to %d?\n", proba);
	
	while (odpowiedz = getchar() != 't') {
		if (odpowiedz == 'n')
			printf("No dobrze, czy jest to %d?\n", ++proba);
		else
			printf("Przykro mi, rozumiem tylko t lub n.\n");

		while (getchar() != '\n')
			continue;
	}
		
	printf("Wiedzialem, ze mi sie uda!\n");

	return 0;
}