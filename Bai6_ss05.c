#include <stdio.h>

int main() {
    double num1, num2, result;
    int choice;

    printf("Nhap so thu nhat: ");
    scanf("%lf", &num1);
    printf("Nhap so thu hai: ");
    scanf("%lf", &num2);

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Tong: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Hieu: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Tich: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Thuong: %.2lf\n", result);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 5);

    return 0;
}

