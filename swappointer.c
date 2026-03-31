#include <stdio.h>

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Sebelum: x=%d, y=%d\n", x, y);
    tukar(&x, &y);
    printf("Sesudah: x=%d, y=%d\n", x, y);
    return 0;
}