#include <stdio.h>
#include <inttypes.h>

int main(void) {
	int32_t me32;

	me32 = 45933945;
	printf("Po pierwsze, zalozmy, ze int32_t jest typu int: ");
	printf("me32 = %d\n", me32);
	printf("Nastepnie nie czynmy zadnych zalozen.\n");
	printf("W zamian skorzystajmy z \"macro\" z pliku inttypes.h: ");
	printf("me32 = %" PRId32 "\n", me32);

	return 0;
}