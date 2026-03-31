#include <stdio.h>

int main() {
    int jumlah;
    printf("Berapa banyak orang dalam antrean? ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("Nomor antrean ke-%d silakan menuju loket.\n", i);
    }
    printf("Antrean habis.\n");

    return 0;
}