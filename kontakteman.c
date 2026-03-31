#include <stdio.h>

struct Teman {
    char nama[30];
    char no_hp[15];
};

int main() {
    struct Teman daftar[2];
    for(int i=0; i<2; i++) {
        printf("Nama teman %d: ", i+1); scanf("%s", daftar[i].nama);
        printf("Nomor HP: "); scanf("%s", daftar[i].no_hp);
    }
    printf("\n--- Daftar Kontak ---\n");
    for(int i=0; i<2; i++) printf("%s: %s\n", daftar[i].nama, daftar[i].no_hp);
    return 0;
}