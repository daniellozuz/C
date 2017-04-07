#include <stdio.h>

int main(void) {
	int ch;
	int licznik = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == '\n')
			printf("\\n - %3d  \n", ch);
		else if (ch == '\t')
			printf("\\t - %3d  ", ch);
		else
			printf("%c  - %3d  ", ch, ch);

		if (++licznik > 9) {
			licznik = 0;
			printf("\n");
		}
	}

	return 0;
}