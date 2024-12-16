#include <stdio.h>

int main() {
    int number;

    // Yeu cau nguoi dung nhap so nguyen
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra chia het cho 3, 5 hoac ca 3 va 5
    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d chia het cho ca 3 va 5.\n", number);
    } else if (number % 3 == 0) {
        printf("%d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("%d chia het cho 5.\n", number);
    } else {
        printf("%d khong chia het cho 3 hoac 5.\n", number);
    }

    return 0;
}

