#include <stdio.h>

int main() {
    int n;

    // Yeu cau nguoi dung nhap vao so nguyen duong tu 1 den 10
    do {
        printf("Nhap mot so nguyen tu 1 den 10: ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("Vui long nhap mot so tu 1 den 10!\n");
        }
    } while (n < 1 || n > 10);

    // In bang cuu chuong tuong ung
    printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

