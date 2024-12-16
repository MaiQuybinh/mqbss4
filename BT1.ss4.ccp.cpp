#include <stdio.h>

int main() {
    int number;

    // Yeu cau nguoi dung nhap so nguyen
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra so am hay so duong
    if (number > 0) {
        printf("%d là so duong.\n", number);
    } else if (number < 0) {
        printf("%d là so am.\n", number);
    } else {
        printf("So nhap vao la so 0.\n");
    }

    return 0;
}

