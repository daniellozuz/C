#include <stdio.h>
#include <ctype.h>

int znak_na_numer(int ch);

int main(void) {
	int numer;
	char ch;

	while ((ch = getchar()) != EOF) {
		if ((numer = znak_na_numer(ch)) != -1)
			printf("%c jest %d litera alfabetu.\n", ch, numer);
		else
			printf("%c nie jest litera.\n", ch);
	}

	return 0;
}

int znak_na_numer(int ch) {
	if (isalpha(ch)) {
		if (isupper(ch))
			return (ch - 64);
		else
			return (ch - 96);
	}
	else
		return -1;
}