#include <stdio.h>

int main(void) {
	int znaki = 0;

	while (getchar() != EOF) {
		znaki++;
	}

	printf("Tekst zawiera %d znakow.\n", znaki);

	return 0;
}