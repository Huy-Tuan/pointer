#include <stdio.h>

int main () {
	int N = 1000;
	printf("Dia chi cua N la: %d\n", &N);
	int *ptr;
	ptr = &N;
	printf("Dia chi cua ptr la: %d", ptr);
}
