#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ILOSC 10
#define ROZMIAR 20

void menu(void);
char * pobierz(char * lancuch);
void pokazPoczatkowe(char lancuchy[][ROZMIAR], int ilosc);
void sortujASCII(char * ptrs[], int ilosc);
void sortujDlugosc(char * ptrs[], int ilosc);
void sortujSlowo(char * ptrs[], int ilosc);
void dlugoscSlow(char * ptrs[], int dlugosci[], int ilosc);
void pokazWskazniki(char * ptrs[], int ilosc);

int main(void) {
	char lancuchy[ILOSC][ROZMIAR];
	char * ptrs[ILOSC];
	int ilosc = 0;
	int choice;

	printf("Podaj maksymalnie %d lancuchow o maskymalnej dlugosci %d. (CTRL + Z - EOF konczy wprowadzanie).\n", ILOSC, ROZMIAR - 2);

	while (ilosc < ILOSC && pobierz(lancuchy[ilosc]) != NULL) {
		printf("Pobrano: %s\n", lancuchy[ilosc]);
		ptrs[ilosc] = lancuchy[ilosc];
		ilosc++;
	}

	menu();

	while (scanf_s("%d", &choice) == 1 && choice != 5) {
		switch (choice) {
		case 1 :
			pokazPoczatkowe(lancuchy, ilosc);
			break;
		case 2:
			sortujASCII(ptrs, ilosc);
			pokazWskazniki(ptrs, ilosc);
			break;
		case 3:
			sortujDlugosc(ptrs, ilosc);
			pokazWskazniki(ptrs, ilosc);
			break;
		case 4:
			sortujSlowo(ptrs, ilosc);
			pokazWskazniki(ptrs, ilosc);
			break;
		default:
			puts("Wybierz opcje od 1 do 5");
			break;
		}

		menu();
	}

	return 0;
}

void menu(void) {
	puts("1) Wyswietl wpisane lancuchy.");
	puts("2) Wyswietl lancuchy w porzadku ASCII.");
	puts("3) Wyswietl lancuchy wedlug dlugosci.");
	puts("4) Wyswietl lancuchy wedlug dlugosci 1-wszego slowa.");
	puts("5) koniec");
}

char * pobierz(char * lancuch) {
	lancuch = fgets(lancuch, ROZMIAR, stdin);

	if (lancuch == NULL)
		return NULL;

	if (lancuch[strlen(lancuch) - 1] != '\n')
	while (getchar() != '\n')
		continue;

	lancuch[strlen(lancuch) - 1] = '\0';

	return lancuch;
}

void pokazPoczatkowe(char lancuchy[][ROZMIAR], int ilosc) {
	int i;

	for (i = 0; i < ilosc; i++) {
		puts(lancuchy[i]);
	}
}

void sortujASCII(char * ptrs[], int ilosc) {
	int i, j;
	char * temp;

	for (i = 0; i < ilosc - 1; i++) {
		for (j = i + 1; j < ilosc; j++) {
			if (strcmp(ptrs[i], ptrs[j]) > 0) {
				temp = ptrs[i];
				ptrs[i] = ptrs[j];
				ptrs[j] = temp;
			}
		}
	}
}

void sortujDlugosc(char * ptrs[], int ilosc) {
	int i, j;
	char * temp;

	for (i = 0; i < ilosc - 1; i++) {
		for (j = i + 1; j < ilosc; j++) {
			if (strlen(ptrs[i]) > strlen(ptrs[j])) {
				temp = ptrs[i];
				ptrs[i] = ptrs[j];
				ptrs[j] = temp;
			}
		}
	}
}

void sortujSlowo(char * ptrs[], int ilosc) {
	int dlugosci[ILOSC];
	int i, j;
	char * temp;

	dlugoscSlow(ptrs, dlugosci, ilosc);

	
	for (i = 0; i < ilosc - 1; i++) {
		for (j = i + 1; j < ilosc; j++) {
			if (dlugosci[i] > dlugosci[j]) {
				temp = ptrs[i];
				ptrs[i] = ptrs[j];
				ptrs[j] = temp;
			}
		}
	}
}

void dlugoscSlow(char * ptrs[], int dlugosci[], int ilosc) {
	int i, j;
	int dlugosc;

	for (i = 0; i < ilosc; i++) {
		dlugosc = 0;
		j = 0;
		while (isspace(ptrs[i][j]) && j < strlen(ptrs[i]) && ptrs[i][j] != '\0') {
			j++;
		}

		while (!isspace(ptrs[i][j]) && j < strlen(ptrs[i]) && ptrs[i][j] != '\0') {
			j++; 
			dlugosc++;
		}

		dlugosci[i] = dlugosc;
	}
}

void pokazWskazniki(char * ptrs[], int ilosc) {
	int i;

	for (i = 0; i < ilosc; i++)
		puts(ptrs[i]);
}