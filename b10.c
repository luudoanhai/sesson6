#include <stdio.h>
#include <stdlib.h> // Dùng cho abs()

int main() {
    int n;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Chu so: 0\n");
        return 0;
    }

    if (n < 0) {
        printf("So am, lay gia tri tuyet doi.\n");
        n = abs(n);
    }

    // Đảo ngược số để in chữ số từ trái sang phải
    int reversed = 0;
    int temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    // In từng chữ số
    while (reversed > 0) {
        printf("Chu so: %d\n", reversed % 10);
        reversed /= 10;
    }

    return 0;
}
