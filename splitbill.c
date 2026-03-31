#include <stdio.h>

int main() {
    float total_bill, pajak_persen, total_akhir;
    int jumlah_orang;

    printf("--- Kalkulator Split Bill ---\n");
    printf("Masukkan total tagihan (sebelum pajak): Rp ");
    scanf("%f", &total_bill);
    printf("Masukkan pajak/service (dalam %%): ");
    scanf("%f", &pajak_persen);
    printf("Jumlah orang yang ikut bayar: ");
    scanf("%d", &jumlah_orang);

    total_akhir = total_bill + (total_bill * (pajak_persen / 100));
    
    printf("\n--- Rincian ---\n");
    printf("Total tagihan + pajak: Rp %.2f\n", total_akhir);
    printf("Setiap orang membayar : Rp %.2f\n", total_akhir / jumlah_orang);

    return 0;
}