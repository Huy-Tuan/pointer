#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Ham hien thi menu
void displayMenu() {
    printf("\nMENU\n");
    printf("1. Nhap vao chuoi\n");
    printf("2. In ra chuoi dao nguoc\n");
    printf("3. Dem so luong tu trong chuoi\n");
    printf("4. Nhap chuoi khac, so sanh voi chuoi ban dau\n");
    printf("5. In hoa tat ca chu cai trong chuoi\n");
    printf("6. Nhap chuoi khac va them vao chuoi ban dau\n");
    printf("7. Thoat\n");
    printf("Lua chon cua ban: ");
}

// Ham nhap chuoi
void inputString(char *string, int maxSize) {
    printf("Nhap vao chuoi: ");
    fgets(string, maxSize, stdin);
    size_t length = strlen(string);
    if (length > 0 && string[length - 1] == '\n') {
        string[length - 1] = '\0';
    }
}

// Ham in chuoi dao nguoc
void printReversedString(char *string) {
    int length = strlen(string);
    printf("Chuoi dao nguoc la: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", *(string + i));
    }
    printf("\n");
}

// Ham dem so luong tu trong chuoi
int countWords(char *string) {
    int wordCount = 0;
    int inWord = 0;
    while (*string != '\0') {
        if (!isspace(*string) && inWord == 0) {
            inWord = 1; // Bat dau mot tu
            wordCount++;
        } else if (isspace(*string)) {
            inWord = 0; // Ket thuc tu
        }
        string++;
    }
    return wordCount;
}

// Ham so sanh chuoi
void compareStrings(char *string1) {
    char string2[1000];
    printf("Nhap vao chuoi khac: ");
    fgets(string2, sizeof(string2), stdin);
    size_t length2 = strlen(string2);
    if (length2 > 0 && string2[length2 - 1] == '\n') {
        string2[length2 - 1] = '\0';
    }

    size_t length1 = strlen(string1);
    if (length1 > length2) {
        printf("Chuoi moi ngan hon chuoi ban dau.\n");
    } else if (length1 < length2) {
        printf("Chuoi moi dai hon chuoi ban dau.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
}

// Ham in hoa tat ca chu cai trong chuoi
void convertToUpperCase(char *string) {
    char *ptr = string;
    while (*ptr != '\0') {
        *ptr = toupper(*ptr); // Chuyen ky tu thanh in hoa
        ptr++;
    }
    printf("Chuoi sau khi in hoa tat ca chu cai: %s\n", string);
}

// Ham noi chuoi khac vao chuoi ban dau
void appendString(char *string1, int maxSize) {
    char string2[1000];
    printf("Nhap vao chuoi khac de noi vao chuoi ban dau: ");
    fgets(string2, sizeof(string2), stdin);
    size_t length2 = strlen(string2);
    if (length2 > 0 && string2[length2 - 1] == '\n') {
        string2[length2 - 1] = '\0';
    }

    if (strlen(string1) + strlen(string2) + 1 <= maxSize) {
        strcat(string1, string2);
        printf("Chuoi sau khi noi: %s\n", string1);
    } else {
        printf("Khong the noi chuoi vi vuot qua kich thuoc cho phep.\n");
    }
}

int main() {
    char string[1000] = ""; // Chuoi ban dau rong
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);
        getchar(); // Xoa ky tu '\n' sau khi nhap so

        switch (choice) {
            case 1:
                inputString(string, sizeof(string));
                break;
            case 2:
                printReversedString(string);
                break;
            case 3:
                printf("So luong tu trong chuoi: %d\n", countWords(string));
                break;
            case 4:
                compareStrings(string);
                break;
            case 5:
                convertToUpperCase(string);
                break;
            case 6:
                appendString(string, sizeof(string));
                break;
            case 7:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 7);

    return 0;
}

