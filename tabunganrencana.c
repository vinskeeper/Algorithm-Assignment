#include <stdio.h>

int main() {
    float saldo_awal, setoran_bulanan, target_saldo, total_sekarang;
    int bulan = 0;

    printf("--- Simulasi Tabungan Rencana ---\n");
    printf("Saldo awal saat ini: Rp ");
    scanf("%f", &saldo_awal);
    printf("Setoran rutin per bulan: Rp ");
    scanf("%f", &setoran_bulanan);
    printf("Target saldo yang diinginkan: Rp ");
    scanf("%f", &target_saldo);

    total_sekarang = saldo_awal;

    // Loop akan terus berjalan selama total belum mencapai target
    while (total_sekarang < target_saldo) {
        total_sekarang += setoran_bulanan;
        bulan++;
        
        // Opsional: Menampilkan progres tiap 6 bulan
        if (bulan % 6 == 0) {
            printf("Progres bulan ke-%d: Rp %.2f\n", bulan, total_sekarang);
        }
    }

    printf("\n--- Hasil Analisis ---\n");
    printf("Anda akan mencapai target Rp %.2f dalam %d bulan.\n", target_saldo, bulan);
    printf("Itu setara dengan sekitar %.1f tahun.\n", (float)bulan / 12);

    return 0;
}