#include <stdio.h>
#include <string.h>

#define SLOWO "cukier"
#define ROZMIAR 40

int main(void) {
	const char * zrodlo = SLOWO;
	char kopia[ROZMIAR] = "Podaj mnie do sadu.";
	char * wl;

	puts(zrodlo);
	puts(kopia);
	
	// strcpy() zwraca wskaznik do pierwszego argumentu, strcpy_s() nie zwraca wskaznika, tylko bledy w przypadku niepowodzenia (nie moge przypisac tego do wskaznika).
	// mozna zrobic #define _CRT_SECURE_NO_WARNINGS i uzyc wl = strcpy(kopia + 6, zrodlo);
	
	// Trzeba zmniejszyc drugi argument o przesuniecie ktore chcemy otrzymac. 
	// Bez tego program wyrzuca stack corruption arround kopia (pewnie probuje dobrac sie do ROZMIAR bajtow od miejsca kopia + 6)
	strcpy_s(kopia + 6, ROZMIAR - 6, zrodlo);
	wl = kopia + 6;
	puts(kopia);
	puts(wl);

	return 0;
}