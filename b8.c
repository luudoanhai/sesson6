#include <stdio.h>

int main() {
    int a, b, x, y;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    x = a;
    y = b;

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    int ucln = a;
    int bcnn = (x * y) / ucln;

    printf("Boi chung nho nhat la: %d\n", bcnn);
    return 0;
}
