#include <stdio.h>

void updateElement(int *arr, int size, int newValue, int position) {
    if (position < 0 || position >= size) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    *(arr + position) = newValue;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    int newValue = 99;
    int position = 2;
    updateElement(arr, size, newValue, position);

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}

