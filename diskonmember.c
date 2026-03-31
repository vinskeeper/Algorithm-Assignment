#include <stdio.h>

int main() {
    int pilihan;
    float total_belanja, diskon = 0, bayar;

    printf("=== Sistem Kasir Membership ===\n");
    printf("1. Bronze (Diskon 5%%)\n");
    printf("2. Silver (Diskon 10%%)\n");
    printf("3. Gold   (Diskon 15%%)\n");
    printf("Pilih level member (1-3): ");
    scanf("%d", &pilihan);

    printf("Masukkan total belanja: Rp ");
    scanf("%f", &total_belanja);

    switch(pilihan) {
        case 1:
            diskon = 0.05 * total_belanja;
            break;
        case 2:
            diskon = 0.10 * total_belanja;
            break;
        case 3:
            diskon = 0.15 * total_belanja;
            break;
        default:
            printf("Level tidak valid, tidak ada diskon.\n");
            diskon = 0;
    }

    bayar = total_belanja - diskon;

    printf("\n--- Rincian Pembayaran ---\n");
    printf("Total Awal  : Rp %.2f\n", total_belanja);
    printf("Potongan    : Rp %.2f\n", diskon);
    printf("Total Bayar : Rp %.2f\n", bayar);
    printf("--------------------------\n");
    printf("Terima kasih sudah berbelanja!\n");

    return 0;
}