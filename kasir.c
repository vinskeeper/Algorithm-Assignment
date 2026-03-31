#include <stdio.h>

int main() {
    int jumlah;
    float harga, total = 0;
    char nama_barang[50];

    printf("Nama barang: "); scanf("%s", nama_barang);
    printf("Harga satuan: "); scanf("%f", &harga);
    printf("Jumlah beli: "); scanf("%d", &jumlah);

    total = harga * jumlah;
    printf("\n--- Nota Toko ---\n");
    printf("Item  : %s\n", nama_barang);
    printf("Total : Rp %.2f\n", total);
    
    return 0;
}