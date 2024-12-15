#include <stdio.h>

void swap (int *x, int *y){
	int temp=*x;
	*x = *y;
	*y = temp;
	
}
	

int main () {
	int N;
	int M;
	scanf("%d %d", &N, &M);
	printf("Gia tri cua N va M ban dau la \n");
	printf("N = %d\n", N);
	printf("M = %d\n", M);
	swap (&N,&M);
	printf("Gia tri cua N va M sau khi thay doi la: \n");
	printf("N = %d\n", N);
	printf("M = %d", M);
	return 0;
}
