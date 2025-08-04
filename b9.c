#include <stdio.h>

int main() {
    int choice;
    float a = 0, b = 0, c = 0;
    int daNhap = 0; // Biến kiểm tra đã nhập số chưa

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%f", &a);
                printf("Nhap so thu hai: ");
                scanf("%f", &b);
                printf("Nhap so thu ba: ");
                scanf("%f", &c);
                daNhap = 1;
                break;
            case 2:
                if (daNhap)
                    printf("Tong = %.2f\n", a + b + c);
                else
                    printf("Vui long nhap 3 so truoc!\n");
                break;
            case 3:
                if (daNhap)
                    printf("Trung binh cong = %.2f\n", (a + b + c) / 3);
                else
                    printf("Vui long nhap 3 so truoc!\n");
                break;
            case 4:
                if (daNhap) {
                    float min = a;
                    if (b < min) min = b;
                    if (c < min) min = c;
                    printf("So nho nhat = %.2f\n", min);
                } else
                    printf("Vui long nhap 3 so truoc!\n");
                break;
            case 5:
                if (daNhap) {
                    float max = a;
                    if (b > max) max = b;
                    if (c > max) max = c;
                    printf("So lon nhat = %.2f\n", max);
                } else
                    printf("Vui long nhap 3 so truoc!\n");
                break;
            case 6:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon tu 1 den 6.\n");
        }
    } while (choice != 6);

    return 0;
}
