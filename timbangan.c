#include <stdio.h>

int main() {
    float kg;
    printf("Masukkan berat dalam KG: ");
    scanf("%f", &kg);

    printf("\n--- Hasil Konversi ---\n");
    printf("Gram: %.2f g\n", kg * 1000);
    printf("Ons (100g): %.2f ons\n", kg * 10);
    printf("Pon (500g): %.2f pon\n", kg * 2);

    return 0;
}