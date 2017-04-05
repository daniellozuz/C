#include <stdio.h>

#define KROPKA '.'

int main(void) {
	char ch;
	int licznik = 0;

	while ((ch = getchar()) != KROPKA) {
		if (ch != '"' && ch != '\'')
			licznik++;
	}

	printf("W zdaniu jest %d znakow niebedacych cudzyslowami lub apostrofami.\n", licznik);

	return 0;
}