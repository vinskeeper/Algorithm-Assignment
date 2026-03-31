#include <stdio.h>

int main() {
    float harga_barang, tabungan_per_hari;
    int total_hari;

    printf("--- Target Menabung ---\n");
    printf("Harga barang yang ingin dibeli: Rp ");
    scanf("%f", &harga_barang);
    printf("Berapa yang bisa kamu sisihkan per hari: Rp ");
    scanf("%f", &tabungan_per_hari);

    total_hari = (int)(harga_barang / tabungan_per_hari);

    printf("\nKamu butuh waktu sekitar %d hari untuk membeli barang tersebut.\n", total_hari);
    printf("Semangat menabungnya!\n");

    return 0;
}