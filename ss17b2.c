#include <stdio.h>
#include <string.h>
#include <ctype.h>

void showMenu() {
    printf("\nMENU\n");
    printf("1. Nhap vao chuoi\n");
    printf("2. In ra chuoi\n");
    printf("3. Dem so luong chu cai trong chuoi va in ra\n");
    printf("4. Dem so luong chu so trong chuoi va in ra\n");
    printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
    printf("6. Thoat\n");
    printf("Lua chon cua ban: ");
}

void inputString(char *str, int size) {
    printf("Nhap vao chuoi: ");
    fgets(str, size, stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void printString(char *str) {
    printf("Chuoi vua nhap la: %s\n", str);
}

int countLetters(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int countDigits(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int countSpecialChars(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalpha(*str) && !isdigit(*str) && !isspace(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[1000];
    int choice;

    str[0] = '\0';

    do {
        showMenu();
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                inputString(str, sizeof(str));
                break;
            case 2:
                printString(str);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", countLetters(str));
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", countDigits(str));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", countSpecialChars(str));
                break;
            case 6:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 6);

    return 0;
}

