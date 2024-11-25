#include <stdio.h>

int main() {
    int n, tong = 0;

    // Yeu cau nguoi dung nhap vao so nguyen duong
    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap mot so nguyen duong!\n");
        }
    } while (n <= 0);

    // Tinh tong cac so tu 1 den n
    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    // In ket qua ra man hinh
    printf("Tong cac so tu 1 den %d la: %d\n", n, tong);

    return 0;
}

