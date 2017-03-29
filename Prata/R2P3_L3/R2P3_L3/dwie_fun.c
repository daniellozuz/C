#include <stdio.h>

void lokaj();

int main(void) {
	printf("Wywolam funkcje lokaja.\n");
	lokaj();
	printf("Tak. Przynies mi herbate i zapisywalne DVD.\n");
	
	return 0;
}

void lokaj(void) {
	printf("Pan wzywal?\n");
}