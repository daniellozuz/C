#include <stdio.h>

int main(void) {
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };
	int(*pz)[2];
	pz = zippo;

	printf("int zippo[4][2] = { { 2, 4 }, \n\t\t    { 6, 8 }, \n\t\t    { 1, 3 }, \n\t\t    { 5, 7 } };\n\n");
	printf("int(*pz)[2];\npz = zippo;\n\n\n");

	printf("   pz = %p         pz + 1 = %p\n", pz, pz + 1);
	printf("pz[0] = %p      pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
	printf("  *pz = %p        *pz + 1 = %p\n\n", *pz, *pz + 1);
	printf("        pz[0][0] = %d\n", pz[0][0]);
	printf("          *pz[0] = %d\n", *pz[0]);
	printf("            **pz = %d\n", **pz);
	printf("        pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz + 2) + 1) = %d\n\n", *(*(pz + 2) + 1));

	return 0;
}