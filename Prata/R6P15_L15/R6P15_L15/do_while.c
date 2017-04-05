#include <stdio.h>

int main(void) {
	const int TAJNY_KOD = 13;
	int wprowadzony_kod;

	do {
		printf("Aby wejsc do klubu terapeutycznego agorafobii, wprowadz wlasciwy kod: ");
		scanf_s("%d", &wprowadzony_kod);
	} while (wprowadzony_kod != TAJNY_KOD);

	printf("Gratulacje! Jestes wyleczony!\n");

	return 0;
}