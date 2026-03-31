#include <stdio.h>
#include <string.h>

int main() {
    char pass[20];
    printf("Masukkan password: ");
    scanf("%s", pass);

    if(strcmp(pass, "123") == 0) {
        printf("Login Berhasil! Selamat datang admin.\n");
    } else {
        printf("Password salah!\n");
    }
    return 0;
}