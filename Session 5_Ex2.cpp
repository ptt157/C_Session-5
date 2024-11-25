#include <stdio.h>

int main() {
    int so_cho_truoc = 42; // Khai bao va gan gia tri cho bien so nguyen
    int so_nhap;           // Bien luu tru so nguoi dung nhap vao

    do {
        printf("Nhap mot so: ");
        scanf("%d", &so_nhap);
    } while (so_nhap != so_cho_truoc);

    printf("Chuc mung! Ban da nhap dung so: %d\n", so_cho_truoc);

    return 0;
}

