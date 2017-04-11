#include <stdio.h>

int wysw2(const char * lancuch);

int main(void) {

	return 0;
}

int wysw2(const char * lancuch) {
	int licznik = 0;

	while (*lancuch) {
		putchar(*lancuch++);
		licznik++;
	}

	putchar('\n');

	return licznik;
}