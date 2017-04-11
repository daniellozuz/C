#include <stdio.h>

void wysw1(const char *);
int wysw2(const char *);

int main(void) {
	wysw1("Gdybym mial fire kasy, ");
	wysw1("zrobilbym zapasy\n");

	printf("Naliczylem %d znakow.\n", wysw2("Albo pojechalbym na wczasy."));

	return 0;
}

void wysw1(const char * lancuch) {
	while (*lancuch)
		putchar(*lancuch++);
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