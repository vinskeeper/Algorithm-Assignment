#include <stdio.h>

int main() {
    int jam_tidur, menit_tidur, jam_bangun;

    printf("Sekarang jam berapa? (Format 24 jam, misal 22 untuk jam 10 malam): ");
    scanf("%d", &jam_tidur);
    printf("Menit ke berapa? ");
    scanf("%d", &menit_tidur);

    // Menghitung jam bangun setelah 8 jam tidur
    jam_bangun = (jam_tidur + 8) % 24;

    printf("\nAgar tidurmu cukup (8 jam), bangunlah pada jam %02d:%02d WIB.\n", jam_bangun, menit_tidur);
    return 0;
}