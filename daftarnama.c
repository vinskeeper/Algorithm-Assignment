#include <stdio.h>

int main() {
    char nama[3][50];

    for(int i = 0; i < 3; i++) {
        printf("Masukkan nama teman ke-%d: ", i+1);
        scanf("%s", nama[i]);
    }

    printf("\nDaftar teman kamu:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d. %s\n", i+1, nama[i]);
    }
    return 0;
}