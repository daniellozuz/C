#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void) {
	char c;
	char poprz = '\n';
	long ile_znakow = 0L;
	int ile_wierszy = 0;
	int ile_slow = 0;
	int ile_np_wierszy = 0;
	bool w_slowie = false;

	printf("Wprowadz tekst do analizy (znak | przerywa prace programu):\n");

	while ((c = getchar()) != STOP) {
		ile_znakow++;

		if (c == '\n')
			ile_wierszy++;
		
		if (!isspace(c) && !w_slowie) {
			w_slowie = true;
			ile_slow++;
		}

		if (isspace(c) && w_slowie)
			w_slowie = false;

		poprz = c;
	}

	if (poprz != '\n')
		ile_np_wierszy = 1;

	printf("znkow = %ld, slow = %d, wierszy = %d, niepelnych wierszy = %d\n", ile_znakow, ile_slow, ile_wierszy, ile_np_wierszy);

	return 0;
}