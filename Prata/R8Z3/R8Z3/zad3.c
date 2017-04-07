#include <stdio.h>
#include <ctype.h>

int main(void) {
	int wielkie = 0;
	int male = 0;
	int pozostale = 0;
	int ch;

	while ((ch = getchar()) != EOF) {
		if (isupper(ch))
			wielkie++;
		else if (islower(ch))
			male++;
		else
			pozostale++;
	}

	printf("Wpisano %d znakow.\n%5d wielkich liter\n%5d malych liter\n%5d pozostalych znakow\n", wielkie + male + pozostale, wielkie, male, pozostale);

	return 0;
}