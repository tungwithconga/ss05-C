#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("So nhap vao khong hop le. Vui long nhap lai: ");
        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);

    return 0;
}

