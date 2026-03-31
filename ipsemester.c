#include <stdio.h>

int main() {
    int jumlah_matkul;
    float nilai, total_nilai = 0;

    printf("Jumlah mata kuliah semester ini: ");
    scanf("%d", &jumlah_matkul);

    for (int i = 1; i <= jumlah_matkul; i++) {
        printf("Masukkan nilai matkul ke-%d (0-100): ", i);
        scanf("%f", &nilai);
        total_nilai += nilai;
    }

    printf("\n--- Hasil ---\n");
    printf("Rata-rata nilai kamu: %.2f\n", total_nilai / jumlah_matkul);

    return 0;
}