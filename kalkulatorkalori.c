#include <stdio.h>

int main() {
    float berat, tinggi;
    int usia;
    double bmr;

    printf("--- Kalkulator BMR Sederhana (Pria) ---\n");
    printf("Berat badan (kg): "); scanf("%f", &berat);
    printf("Tinggi badan (cm): "); scanf("%f", &tinggi);
    printf("Usia (tahun): "); scanf("%d", &usia);

    // Rumus BMR Pria: 66 + (13.7 * berat) + (5 * tinggi) - (6.8 * usia)
    bmr = 66 + (13.7 * berat) + (5 * tinggi) - (6.8 * usia);

    printf("\nKebutuhan kalori dasar kamu: %.2f kkal/hari.\n", bmr);
    return 0;
}