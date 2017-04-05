#include <stdio.h>

#define INWESTYCJA 100
#define PROC_KASIA 0.05
#define PROC_EWA 0.1


int main(void) {
	float ewa = INWESTYCJA;
	float kasia = INWESTYCJA;
	int rok = 0;

	printf("Rok:   Saldo Ewy:   Saldo Kasi:\n");

	while (kasia <= ewa) {
		ewa += INWESTYCJA * PROC_EWA;
		kasia += kasia * PROC_KASIA;
		rok++;
		printf("%3d %12.2f %13.2f\n", rok, ewa, kasia);
	}

	printf("Inwestycja Kasi oplacila sie po %d latach.\n", rok);

	return 0;
}