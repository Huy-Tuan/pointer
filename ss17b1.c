#include <stdio.h>
#include <stdlib.h>

// Hàm hi?n th? menu
void showMenu() {
    printf("\nMENU\n");
    printf("1. Nhap vao so phan tu va tung phan tu\n");
    printf("2. Hien thi cac phan tu trong mang\n");
    printf("3. Tinh do dai mang\n");
    printf("4. Tinh tong cac phan tu trong mang\n");
    printf("5. Hien thi phan tu lon nhat\n");
    printf("6. Thoat\n");
    printf("Lua chon cua ban: ");
}

// Hàm nh?p m?ng
void inputArray(int **arr, int *size) {
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", size);

    *arr = (int *)malloc(*size * sizeof(int));
    if (*arr == NULL) {
        printf("Loi cap phat bo nho!\n");
        exit(1);
    }

    printf("Nhap tung phan tu trong mang:\n");
    for (int i = 0; i < *size; i++) {
        printf("Phan tu [%d]: ", i + 1);
        scanf("%d", (*arr) + i);
    }
}

void displayArray(int *arr, int size) {
    if (arr == NULL || size == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void arrayLength(int size) {
    printf("Do dai cua mang la: %d\n", size);
}

void sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    printf("Tong cac phan tu trong mang la: %d\n", sum);
}

void findMax(int *arr, int size) {
    if (arr == NULL || size == 0) {
        printf("Mang rong!\n");
        return;
    }
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
}

int main() {
    int *arr = NULL;
    int size = 0;
    int choice;

    do {
        showMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputArray(&arr, &size);
                break;
            case 2:
                displayArray(arr, size);
                break;
            case 3:
                arrayLength(size);
                break;
            case 4:
                sumArray(arr, size);
                break;
            case 5:
                findMax(arr, size);
                break;
            case 6:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 6);

    if (arr != NULL) {
        free(arr);
    }

    return 0;
}

