#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;

	printf("Podaj mi litere, a ja podam Ci nazwe zwierzecia na te litere.\nWpisz mala litere; # konczy zabawe.\n");

	while ((ch = getchar()) != '#') {
		if (ch == '\n')
			continue;

		if (islower(ch))
			switch (ch) {
				case 'a':
					printf("aguti, roslinozerny gryzon z Ameryki Lacinskiej\n");
					break;
				case 'b':
					printf("babirusa, dzika swinia indonezyjska\n");
					break;
				case 'c':
					printf("cierlik, nieduzy ptak srodziemnomorski\n");
					break;
				case 'd':
					printf("desman, wodny ssak podobny do kreta\n");
					break;
				case 'e':
					printf("edredon, arktyczny ptak morski z rodziny kaczek\n");
					break;
				case 'f':
					printf("fretka, udomowiona odmiana tchorza pospolitego\n");
					break;
				default:
					printf("To za trudne!\n");
		}
		else
			printf("Rozpoznaje tylko male litery.\n");

		while (getchar() != '\n')
			continue;

		printf("Podaj kolejna litere lub znak #.\n");
	}

	printf("Do widzenia!\n");

	return 0;
}