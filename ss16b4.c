#include <stdio.h>

void arr(int *a[], int size){
	for(int i = 0; i < size; i++){
		printf("Gia tri cua phan tu thu a[%d] la %d\n", i, *a[i]);
	}
}
int main (){
	int numbers[5] = {1,2,3,4,5};
	int *ptr[5];
	for (int i = 0; i < 5; i++){
		ptr[i] = &numbers[i];
	}
	arr(ptr, 5);
}
