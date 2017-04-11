#include <stdio.h>

#define DEF "Jestem zdefiniowanym lancuchem."

int main(void) {
	char lan1[80] = "Przypisano mnie tablicy.";
	char * lan2 = "Przypisano mnie wskaznikowi.";
	
	puts("Jestem argumentem finkcji puts().");
	puts(DEF);
	puts(lan1);
	puts(lan2);
	puts(&lan1[5]);
	puts(lan2 + 4);

	return 0;
}