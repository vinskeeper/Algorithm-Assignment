#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, durasi, total;

    printf("Jam Masuk (0-23): "); scanf("%d", &jam_masuk);
    printf("Jam Keluar (0-23): "); scanf("%d", &jam_keluar);

    if (jam_keluar >= jam_masuk) durasi = jam_keluar - jam_masuk;
    else durasi = (24 - jam_masuk) + jam_keluar;

    // Misal: 1 jam pertama 5000, berikutnya 2000
    total = 5000 + (durasi - 1) * 2000;
    if (durasi <= 1) total = 5000;

    printf("Total biaya parkir (%d jam): Rp %d\n", durasi, total);
    return 0;
}