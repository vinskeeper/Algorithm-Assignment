#include <stdio.h>

void toBiner(int n) {
    if (n > 1) toBiner(n / 2);
    printf("%d", n % 2);
}

int main() {
    int angka;
    printf("Masukkan angka desimal: ");
    scanf("%d", &angka);
    printf("Biner: ");
    toBiner(angka);
    printf("\n");
    return 0;
}