#include <stdio.h>

int main() {
    int total_menit, jam, sisa_menit;

    printf("Masukkan total durasi (menit): ");
    scanf("%d", &total_menit);

    jam = total_menit / 60;
    sisa_menit = total_menit % 60;

    printf("\nDurasi tersebut setara dengan: %d jam %d menit.\n", jam, sisa_menit);
    return 0;
}