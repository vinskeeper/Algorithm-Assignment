#include <stdio.h>

int main() {
    long int angka;
    printf("Masukkan angka tanpa titik (misal: 1000000): ");
    scanf("%ld", &angka);

    printf("Format sederhana: Rp %ld,00\n", angka);
    printf("(Tips: Di C, memformat ribuan dengan titik secara otomatis butuh logika manual yang seru!)\n");
    
    return 0;
}