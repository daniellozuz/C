#include <stdio.h>

int main(void) {
	int znak;
	
	printf("Podaj kod ASCII:\n");
	scanf_s("%d", &znak);
	printf("Podany kod ASCII: %d, odpowiada on znakowi: %c\n", znak, znak);

	return 0;
}