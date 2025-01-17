#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar;
    }

    if (lamaParkir <= 2) {
        biaya = 2000; // Biaya tetap untuk 2 jam pertama
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500; // Biaya tambahan untuk jam berikutnya
    }

    printf("Lama parkir = %d jam\n", lamaParkir);
    printf("Biaya parkir = %d\n", biaya);

    return 0;
}
