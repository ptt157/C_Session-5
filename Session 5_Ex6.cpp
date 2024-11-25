#include <stdio.h>

int main() {
    int choice;
    int a, b;

    // Nhap hai so
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    do {
        // Hien thi menu
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        // Xu ly lua chon
        switch (choice) {
            case 1:
                printf("Tong 2 so: %d\n", a + b);
                break;
            case 2:
                printf("Hieu 2 so: %d\n", a - b);
                break;
            case 3:
                printf("Tich 2 so: %d\n", a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Thuong 2 so: %d\n", a / b);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 5);

    return 0;
}

