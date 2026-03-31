#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    printf("Masukkan satu kata: ");
    scanf("%s", kata);

    printf("Panjang kata '%s' adalah %lu karakter.\n", kata, strlen(kata));
    return 0;
}