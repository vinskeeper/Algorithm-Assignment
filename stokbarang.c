#include <stdio.h>

int main() {
    int stok_awal = 100, diambil, sisa;

    printf("Stok gudang saat ini: %d unit\n", stok_awal);
    printf("Jumlah barang yang diambil: ");
    scanf("%d", &diambil);

    if (diambil > stok_awal) {
        printf("Gagal! Stok tidak mencukupi (Sisa hanya %d).\n", stok_awal);
    } else {
        sisa = stok_awal - diambil;
        printf("Berhasil diambil. Sisa stok sekarang: %d unit.\n", sisa);
    }

    return 0;
}