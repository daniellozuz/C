static unsigned long int nast = 1;

int rand1(void) {
	nast = nast * 1103515245 + 12345;

	return (unsigned int)(nast / 65536) % 32768;
}

void srand1(unsigned int ziarno) {
	nast = ziarno;
}