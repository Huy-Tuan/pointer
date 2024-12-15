#include <stdio.h>
#include <string.h>

void searchValue(int *arr, int size, int n){
	int flag = 0;
	for(int i = 0; i < size; i++){
		if(*(arr + i) == n){
			printf("Gia tri %d duoc tim thay o vi tri %d", n, i);
			flag = 1;
			break;		
		}
	if (!flag){
		printf("Khong ton tai phan tu trong mang \n");
	}
	}
}
int main (){
	int nums[] = {8,2,3,4,5};
	int size = sizeof(nums) / sizeof(nums[0]);
	int x;
	printf("Hay nhap phan tu muon tim ");
	scanf ("%d", &x);
	searchValue(nums, size, x);
	return 0;
}
