#include <stdio.h>

int main() {
    int presetNumber = 42;
    int userInput;

    printf("Chao mung den voi tro choi doan so!\n");

    do {
        printf("Nhap mot so nguyen: ");
        scanf("%d", &userInput);

        if (userInput != presetNumber) {
            printf("Sai, thu lai!\n");
        }
    } while (userInput != presetNumber);

    printf("Chinh xac!\n");

    return 0;
}

