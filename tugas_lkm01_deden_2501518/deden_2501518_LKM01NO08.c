#include <stdio.h>

int main() {
    // Data bensin
    const int hargaBensin = 10000;
    const float konsumsiPerKM = 0.1;

    // Data pesanan
    int argo1 = 21000, jarak1 = 7;
    int argo2 = 105000, jarak2 = 35;
    int argo3 = 150000, jarak3 = 45;

    // Hitung total pendapatan kotor
    int totalPendapatan = argo1 + argo2 + argo3;

    // Hitung harga bensin
    int bensin1 = jarak1 * konsumsiPerKM * hargaBensin;
    int bensin2 = jarak2 * konsumsiPerKM * hargaBensin;
    int bensin3 = jarak3 * konsumsiPerKM * hargaBensin;
    int totalBensin = bensin1 + bensin2 + bensin3;

    // Hitung pendapatan bersih
    int pendapatanBersih = totalPendapatan - totalBensin;

    // Output
    printf("Total Pendapatan Kotor : Rp %d\n", totalPendapatan);
    printf("Total Harga Bensin     : Rp %d\n", totalBensin);
    printf("Total Pendapatan Bersih: Rp %d\n", pendapatanBersih);

    return 0;
}