#include <stdio.h>
#include <stdlib.h>

void addValue(int **a, int *size, int newValue, int idex){
		if(idex > *size || idex < 0){
			printf("Vi tri khong hop le");
			return;
		}
		*a = (int *)realloc(*a, (*size + 1) * sizeof(int));
		if (*a == NULL){
			printf("Khong the cap phat bo nho\n");
			return;
		}
		for (int i = *size; i > idex; i--){
			(*a)[i] = (*a)[i - 1];
		}
		(*a)[idex] = newValue;
		(*size)++;
}
void printfArr(int *a, int size){
	for(int i =0; i < size; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
int main (){
	int size = 5;
	int *arr = (int *)malloc(size * sizeof(int));
	if(arr == NULL){
		printf("Khong the cap phat bo nho");
		return;
	}
	for(int i = 0; i < 5; i++){
		arr[i] = i + 1;
	}
	printf("Mang ban dau la: \n");
	printfArr(arr, size);
	
	int newValue, idex;
	
	printf("Hay nhap phan tu can them ");
	scanf("%d", &newValue);
	printf("\nHay nhap vi tri muon them ");
	scanf("%d", &idex);
	
	addValue(&arr, &size, newValue, idex);
	printf("Mang sau khi them phan tu la: \n");
	printfArr(arr, size);
	free(arr);
	return 0;
}
