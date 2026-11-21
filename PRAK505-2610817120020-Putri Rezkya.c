#include <stdio.h>

void Biodata(int tahunLahir, char A[], char B[]) {
    int tahun_sekarang = 2020;
    int umur;
    char ulang;
    int tahun;
    char nama[20], asal[15];

    do {
        umur = tahun_sekarang - tahunLahir;

        printf("Perkenalkan Nama Saya : %s\n", A);
        printf("Umur Saya : %d\n", umur);
        printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
        printf("Asal Saya dari : %s\n", B);

        printf("\nUlangi? (y/n): ");
        scanf(" %c", &ulang);

        if (ulang == 'y' || ulang == 'Y') {
            scanf("%d", &tahun);
            scanf(" %[^\n]", nama);
            scanf(" %[^\n]", asal);

            tahunLahir = tahun;

            for (int i = 0; nama[i] != '\0'; i++) {
                A[i] = nama[i];
                A[i + 1] = '\0';
            }

            for (int i = 0; asal[i] != '\0'; i++) {
                B[i] = asal[i];
                B[i + 1] = '\0';
            }
        }

    } while (ulang == 'y' || ulang == 'Y');
}

int main() {
    int tahunLahir;
    char A[20], B[15];

    scanf(" %d", &tahunLahir);
    scanf(" %[^\n]%*c", &A);
    scanf(" %[^\n]%*c", &B);

    Biodata(tahunLahir, A, B);

    return 0;
}