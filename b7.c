#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("Uoc chung lon nhat la: %d\n", a);
    return 0;
}
