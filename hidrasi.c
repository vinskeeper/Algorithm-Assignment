#include <stdio.h>

int main() {
    int gelas, total_ml;
    const int KAPASITAS_GELAS = 250;

    printf("Berapa gelas air yang kamu minum hari ini? ");
    scanf("%d", &gelas);

    total_ml = gelas * KAPASITAS_GELAS;
    printf("Total air: %d ml\n", total_ml);

    if (total_ml < 2000) {
        printf("Kurang %d ml lagi. Yuk, minum lagi!\n", 2000 - total_ml);
    } else {
        printf("Kebutuhan hidrasi harian terpenuhi! Mantap.\n");
    }

    return 0;
}