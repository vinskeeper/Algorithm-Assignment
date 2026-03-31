#include <stdio.h>

int main() {
    float pinjaman;
    int tenor;

    printf("Total Pinjaman: Rp "); scanf("%f", &pinjaman);
    printf("Tenor (Bulan): "); scanf("%d", &tenor);

    printf("Cicilan per bulan: Rp %.2f\n", pinjaman / tenor);
    return 0;
}