#include <stdio.h>

int main() {
    int data[] = {12, 5, 8, 21, 30, 7, 14};
    int ukuran = sizeof(data) / sizeof(data[0]);

    printf("Angka genap dalam list: ");
    for(int i = 0; i < ukuran; i++) {
        if(data[i] % 2 == 0) printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}