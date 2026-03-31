#include <stdio.h>

int main() {
    float jarak, konsumsi_bbm, harga_per_liter, total_liter, total_biaya;

    printf("--- Estimasi Biaya Bensin ---\n");
    printf("Jarak tempuh (KM): ");
    scanf("%f", &jarak);
    printf("Konsumsi BBM rata-rata (KM/Liter): ");
    scanf("%f", &konsumsi_bbm);
    printf("Harga bensin per liter: Rp ");
    scanf("%f", &harga_per_liter);

    total_liter = jarak / konsumsi_bbm;
    total_biaya = total_liter * harga_per_liter;

    printf("\n--- Hasil ---\n");
    printf("Bensin yang dibutuhkan: %.2f Liter\n", total_liter);
    printf("Total biaya bensin     : Rp %.2f\n", total_biaya);

    return 0;
}