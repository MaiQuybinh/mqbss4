#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Nhap vao 3 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    printf("Nhap so thu ba: ");
    scanf("%d", &num3);

    // Kiem tra so thu 3 co nam giua so thu nhat va so thu hai khong
    if ((num3 > num2 && num3 < num1) || (num3 > num1 && num3 < num2)) {
        printf("So thu ba nam giua so thu nhat và so thu hai.\n");
    } else {
        printf("So thu ba khong nam giua so thu nhat và so thu hai.\n");
    }

    return 0;
}
