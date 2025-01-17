#include <stdio.h>

int main() {
    int kode, harga;
    char jenis;
    float diskon, hargaSetelahDiskon;

    printf("Masukkan kode barang: ");
    scanf("%d", &kode);
    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%d", &harga);

    if (jenis == 'A' || jenis == 'a') {
        diskon = 10.0; // Diskon 10%
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 15.0; // Diskon 15%
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 20.0; // Diskon 20%
    } else {
        printf("Jenis barang tidak valid.\n");
        return 1; // Keluar program jika jenis barang tidak valid
    }

    hargaSetelahDiskon = harga - (harga * diskon / 100);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", 
           jenis, diskon, hargaSetelahDiskon);

    return 0;
}
