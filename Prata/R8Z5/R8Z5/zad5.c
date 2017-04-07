#include <stdio.h>

int main(void) {
	int proba = 50;
	int zmiana = proba / 2;
	int ch;

	printf("Wybierz liczbe od 1 do 100. Sprobuje ja odgadnac.\nWpisz m, jesli Twoja liczba jest mniejsza; w, jesli Twoja liczba jest wieksza; t, jesli trafilem.\n");
	printf("Hmm... czy Twoja liczba to %d?\n", proba);

	while ((ch = getchar()) != 't') {
		if (ch == 'm'){
			proba -= zmiana;
			zmiana /= 2;
		}
		if (ch == 'w') {
			proba += zmiana;
			zmiana /= 2;
		}
		if (zmiana < 1)
			zmiana = 1;

		printf("No dobrze, czy jest to %d?\n", proba);
		
		while (getchar() != '\n')
			continue;
	}
		
	printf("Wiedzialem, ze mi sie uda!\n");

	return 0;
}