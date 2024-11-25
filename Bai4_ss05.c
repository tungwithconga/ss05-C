#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen duong tu 1 den 10: ");
    scanf("%d", &n);

    while (n < 1 || n > 10) {
        printf("So nhap vao khong hop le. Vui long nhap lai: ");
        scanf("%d", &n);
    }

    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

