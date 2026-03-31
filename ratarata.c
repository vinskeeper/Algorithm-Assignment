#include <stdio.h>

int main() {
    float angka, total = 0;
    int hitung = 0;

    printf("Masukkan angka (ketik 0 untuk berhenti):\n");
    while(1) {
        scanf("%f", &angka);
        if(angka == 0) break;
        total += angka;
        hitung++;
    }

    if(hitung > 0) printf("Rata-rata: %.2f\n", total / hitung);
    return 0;
}