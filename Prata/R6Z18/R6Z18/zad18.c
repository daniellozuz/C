#include <stdio.h>

int main(void) {
	int const DUNBAR = 150;
	int znajomi = 5;
	int tydzien = 0;

	printf("Tydzien:   Znajomi:\n");
	printf("%7d %10d\n", tydzien, znajomi);

	while (znajomi < DUNBAR) {
		tydzien++;
		znajomi -= tydzien;
		znajomi *= 2;
		printf("%7d %10d\n", tydzien, znajomi);
	}

	return 0;
}