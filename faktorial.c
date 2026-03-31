#include <stdio.h>

long int faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int n;
    printf("Masukkan angka: "); scanf("%d", &n);
    printf("%d! = %ld\n", n, faktorial(n));
    return 0;
}