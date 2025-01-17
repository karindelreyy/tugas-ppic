#include <stdio.h>

int main() {
    double saldo = 1000000; // saldo awal
    double bunga = 0.02;    // bunga 2% per bulan

    for (int i = 1; i <= 10; i++) {
        saldo += saldo * bunga;
        printf("Saldo bulan ke-%d: Rp. %.2f\n", i, saldo);
    }
    return 0;
}
