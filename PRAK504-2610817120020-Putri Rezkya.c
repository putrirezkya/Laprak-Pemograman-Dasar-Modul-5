#include <stdio.h>

int reverse(int n) {
    int hasil = 0;

    while (n > 0) {
        hasil = hasil * 10 + (n % 10);
        n = n / 10;
    }

    return hasil;
}

int main() {
    int A, B, C;
    char ulang;

    do {
        scanf("%d %d", &A, &B);

        A = reverse(A);
        B = reverse(B);

        C = A + B;

        printf("%d\n", reverse(C));

        printf("Ulangi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}