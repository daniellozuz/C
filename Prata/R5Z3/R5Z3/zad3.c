#include <stdio.h>

#define PRZELICZNIK 7

int main(void) {
	int dni;
	
	printf("Podaj liczbe dni, ktora chcesz przeliczyc na tygodnie i dni.\n(0 lub -20 konczy program)\n");
	scanf_s("%d", &dni);

	while (dni != 0 && dni != -20) {
		printf("%d dni to %d tygodnie, %d dni.\n", dni, dni / PRZELICZNIK, dni % PRZELICZNIK);
		
		printf("Podaj liczbe dni, ktora chcesz przeliczyc na tygodnie i dni.\n(0 lub -20 konczy program)\n");
		scanf_s("%d", &dni);
	}

	return 0;
}