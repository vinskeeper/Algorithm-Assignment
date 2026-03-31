#include <stdio.h>
#include <unistd.h> // Library untuk fungsi sleep()

int main() {
    int detik;
    printf("Mau masak berapa detik? ");
    scanf("%d", &detik);

    printf("Mulai memasak...\n");
    for(int i = detik; i > 0; i--) {
        printf("%d detik tersisa...\r", i);
        fflush(stdout); // Memaksa output muncul segera
        sleep(1);       // Berhenti selama 1 detik
    }

    printf("\nDING! Masakan sudah siap! 🍜\n");
    return 0;
}