#include <stdio.h>

int main() {
    int km_sekarang, km_terakhir;
    printf("KM saat ini: "); scanf("%d", &km_sekarang);
    printf("KM service terakhir: "); scanf("%d", &km_terakhir);

    int selisih = km_sekarang - km_terakhir;
    if (selisih >= 10000) printf("Waktunya ganti oli!\n");
    else printf("Masih aman. %d km lagi menuju service berikutnya.\n", 10000 - selisih);

    return 0;
}