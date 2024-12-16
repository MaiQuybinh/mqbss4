#include <stdio.h>

int main() {
    int number;

    // Yeu cau nguoi dung nhap so nguyen
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra so chan hay so le
    if (number % 2 == 0) {
        printf("%d la so chan.\n", number);
    } else {
        printf("%d la so le.\n", number);
    }

    return 0;
}

