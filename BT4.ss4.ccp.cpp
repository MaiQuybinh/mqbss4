#include <stdio.h>

int main() {
    int month;

    // Yeu cau nguoi dung nhap so thang
    printf("Nhap vao so thang (1-12): ");
    scanf("%d", &month);

    // Kiem tra va in so ngay trong thang
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Thang %d co 31 ngay.\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Thang %d co 30 ngay.\n", month);
    } else if (month == 2) {
        printf("Thang 2 co 28 hoac 29 ngay.\n");
    } else {
        printf("So thang khong hop le.\n");
    }

    return 0;
}

