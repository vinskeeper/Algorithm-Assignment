#include <stdio.h>

struct Buku {
    char judul[50];
    char penulis[50];
    int tahun;
};

int main() {
    struct Buku b1;

    printf("Masukkan Judul Buku: "); scanf(" %[^\n]s", b1.judul);
    printf("Masukkan Penulis: "); scanf(" %[^\n]s", b1.penulis);
    printf("Masukkan Tahun Terbit: "); scanf("%d", &b1.tahun);

    printf("\n--- Data Buku Berhasil Disimpan ---\n");
    printf("Judul: %s\nPenulis: %s\nTahun: %d\n", b1.judul, b1.penulis, b1.tahun);

    return 0;
}