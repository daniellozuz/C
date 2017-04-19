#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
	char prev = ' ';

	int slowa = 0;
	int wielkie = 0;
	int male = 0;
	int znaki_p = 0;
	int cyfry = 0;

	printf("Podaj tekst:\n");

	while ((ch = getchar()) != EOF) {
		if (isdigit(ch))
			cyfry++;

		if (ispunct(ch))
			znaki_p++;

		if (isupper(ch))
			wielkie++;

		if (islower(ch))
			male++;

		if (!isspace(ch) && isspace(prev))
			slowa++;

		prev = ch;
	}

	printf("Wprowadzony tekst zawieral:\n%5d slow\n%5d wielkich liter\n%5d malych liter\n%5d znakow przestankowych\n%5d cyfr.\n", slowa, wielkie, male, znaki_p, cyfry);

	return 0;
}