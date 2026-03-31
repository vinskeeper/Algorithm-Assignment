#include <stdio.h>

int main() {
    float mph, kmh;
    printf("Masukkan kecepatan (MPH): ");
    scanf("%f", &mph);

    kmh = mph * 1.60934;
    printf("%.2f MPH = %.2f KM/Jam\n", mph, kmh);

    return 0;
}