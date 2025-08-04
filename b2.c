#include <stdio.h>

int main() {
    int secret = 47;
    int guess;

    do {
        printf("Nhap mot so: ");
        scanf("%d", &guess);
    } while (guess != secret);

    printf("Ban da nhap dung so!\n");
    return 0;
}

