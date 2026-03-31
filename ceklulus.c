#include <stdio.h>

int main() {
    float nilai;
    printf("Masukkan nilai ujian: ");
    scanf("%f", &nilai);

    if (nilai >= 75) printf("Status: LULUS (Aman!)\n");
    else if (nilai >= 60) printf("Status: LULUS BERSYARAT (Perbaiki lagi ya!)\n");
    else printf("Status: TIDAK LULUS (Siap-siap).\n");

    return 0;
}