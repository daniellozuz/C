#include <stdio.h>

int main(void) {
	const int PRZELICZNIK = 60;
	int minuty;

	printf("Podaj liczbe minut, ktora chcesz przeliczyc na godziny i minuty.\n(<= 0 konczy program)\n");
	scanf_s("%d", &minuty);

	while (minuty > 0) {
		printf("%d minut to %d godzin %d minut\n", minuty, minuty / PRZELICZNIK, minuty % PRZELICZNIK);

		printf("Podaj liczbe minut, ktora chcesz przeliczyc na godziny i minuty.\n(<= 0 konczy program)\n");
		scanf_s("%d", &minuty);
	}

	return 0;
}