#include <stdio.h>

void mikado(void);

int main(void) {
	int ach = 2;
	int och = 5;

	printf("W funkcji main() ach = %2d, a &ach = %p\n", ach, &ach);
	printf("W funkcji main() och = %2d, a &och = %p\n", och, &och);

	mikado(ach);

	return 0;
}

void mikado(int och) {
	int ach = 10;

	printf("W funkcji main() ach = %2d, a &ach = %p\n", ach, &ach);
	printf("W funkcji main() och = %2d, a &och = %p\n", och, &och);
}