#include <stdio.h>

int main() {
    int baris;
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &baris);

    for (int i = 1; i <= baris; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}