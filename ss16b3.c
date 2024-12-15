#include <stdio.h>

int sum(int *a, int *b){
	int sum = *a + *b;
	return *a + *b;
}
int main (){
	int m,n;
	scanf("%d %d", &m, &n);
	int result = sum(&m,&n);
	printf("Ket qua cua 2 so la: %d", result);
	return 0;
}
