#include <stdio.h>

int main() {
    // In tat ca cac bang cuu chuong tu 1 den 9
    for (int i = 1; i <= 9; i++) {
        printf("Bang cuu chuong %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Xuong dong sau moi bang cuu chuong
    }

    return 0;
}

