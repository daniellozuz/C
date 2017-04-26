#include <stdio.h>

#define FUNDDL 50
#define N 2

double suma(const struct fundusze pieniadze[], int n);

struct fundusze {
	char bank[FUNDDL];
	double bankfund;
	char oszcz[FUNDDL];
	double oszczfund;
};

int main(void) {
	struct fundusze kowalski[N] = {
		{
			"Bank Czosnkowo-Melonowy",
			2024.72,
			"Kasa Oszczednosciowo-Pozyczkowa \"Debet\"",
			8237.11
		},
		{
			"Bank \"Uczciwy Jan\"",
			1834.28,
			"Kasa Oszczednosciowa \"Chomik\"",
			2903.89
		}
	};

	printf("Kowalscy posiadaja w sumie %.2f zl.\n", suma(kowalski, N));

	return 0;
}

double suma(const struct fundusze pieniadze[], int n) {
	double kwota = 0;

	for (int i = 0; i < n; i++)
		kwota += pieniadze[i].bankfund + pieniadze[i].oszczfund;
	
	return (kwota);
}