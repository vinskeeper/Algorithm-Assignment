#include <stdio.h>

int main() {
    float pengeluaran[7], total = 0, rata_rata;
    char *hari[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

    printf("--- Pencatat Pengeluaran Mingguan ---\n");

    for(int i = 0; i < 7; i++) {
        printf("Masukkan pengeluaran hari %s: Rp ", hari[i]);
        scanf("%f", &pengeluaran[i]);
        total += pengeluaran[i];
    }

    rata_rata = total / 7;

    printf("\n--- Ringkasan ---\n");
    printf("Total Pengeluaran: Rp %.2f\n", total);
    printf("Rata-rata per hari: Rp %.2f\n", rata_rata);

    return 0;
}