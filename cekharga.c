#include <stdio.h>

int main() {
    int n;
    float harga[100], termurah;

    printf("Masukkan jumlah produk yang dicek: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Harga produk ke-%d: Rp ", i+1);
        scanf("%f", &harga[i]);
    }

    termurah = harga[0];
    for(int i = 1; i < n; i++) {
        if(harga[i] < termurah) termurah = harga[i];
    }

    printf("\nHarga termurah yang ditemukan: Rp %.2f\n", termurah);
    return 0;
}