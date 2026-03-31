#include <stdio.h>

int main() {
    int x, y;
    printf("Masukkan koordinat x dan y: ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0) printf("Titik berada di Kuadran I\n");
    else if(x < 0 && y > 0) printf("Titik berada di Kuadran II\n");
    else if(x < 0 && y < 0) printf("Titik berada di Kuadran III\n");
    else if(x > 0 && y < 0) printf("Titik berada di Kuadran IV\n");
    else printf("Titik berada di pusat/garis sumbu\n");

    return 0;
}