#include <stdio.h>

int main() {
    float harga_awal, diskon1, diskon2, harga_akhir;

    printf("Masukkan harga barang: ");
    scanf("%f", &harga_awal);
    printf("Masukkan diskon pertama (%%): ");
    scanf("%f", &diskon1);
    printf("Masukkan diskon kedua (%%): ");
    scanf("%f", &diskon2);

    // Hitung diskon pertama
    harga_akhir = harga_awal - (harga_awal * (diskon1 / 100));
    // Hitung diskon kedua dari harga yang sudah didiskon
    harga_akhir = harga_akhir - (harga_akhir * (diskon2 / 100));

    printf("\nHarga setelah diskon ganda: Rp %.2f\n", harga_akhir);
    return 0;
}