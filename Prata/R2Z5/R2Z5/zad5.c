#include <stdio.h>

void ic();
void br();

int main(void) {
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	printf("\n");

	return 0;
}

void ic(void) {
	printf("Indie, Chiny");
}

void br(void) {
	printf("Brazylia, Rosja");
}