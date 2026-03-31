#include <stdio.h>

int main() {
    float gaji, pajak;
    printf("Masukkan gaji bulanan: Rp ");
    scanf("%f", &gaji);

    if (gaji > 5000000) {
        pajak = gaji * 0.05;
        printf("Pajak (5%%): Rp %.2f\n", pajak);
        printf("Gaji bersih: Rp %.2f\n", gaji - pajak);
    } else {
        printf("Gaji di bawah Rp 5jt, bebas pajak!\n");
    }

    return 0;
}