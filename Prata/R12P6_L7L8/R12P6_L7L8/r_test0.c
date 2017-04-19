#include <stdio.h>

extern int rand0(void);

int main(void) {
	int liczba;

	for (liczba = 0; liczba < 5; liczba++)
		printf("%hd\n", rand0());

	return 0;
}