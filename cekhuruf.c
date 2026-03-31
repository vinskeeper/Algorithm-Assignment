#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Masukkan satu karakter: ");
    scanf(" %c", &c);

    if(isupper(c)) printf("%c adalah Huruf Besar.\n", c);
    else if(islower(c)) printf("%c adalah Huruf Kecil.\n", c);
    else printf("%c bukan huruf.\n", c);

    return 0;
}