#include <stdio.h>

int main() {
    int total_belanja, uang_dibayar, kembalian;

    printf("Total belanja: Rp ");
    scanf("%d", &total_belanja);
    printf("Uang yang dibayarkan: Rp ");
    scanf("%d", &uang_dibayar);

    if (uang_dibayar < total_belanja) {
        printf("Maaf, uang Anda kurang Rp %d\n", total_belanja - uang_dibayar);
    } else if (uang_dibayar == total_belanja) {
        printf("Uang pas. Terima kasih!\n");
    } else {
        kembalian = uang_dibayar - total_belanja;
        printf("Kembalian Anda: Rp %d\n", kembalian);
    }

    return 0;
}