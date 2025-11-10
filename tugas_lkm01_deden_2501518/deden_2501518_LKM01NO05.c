#include <stdio.h>
#include <stdlib.h>
int main (){

    int bukuOlahraga=13000, bukuPkn=17500, bukuBindo=20000;
    int jumlahBukuOlahraga, jumlahBukuPkn, jumlahBukuBindo;
    int total;

    printf("Masukan jumlah pembelian buku olahraga: ");
    scanf("%d", &jumlahBukuOlahraga);
    printf("Masukan jumlah pembelian buku pkn: ");
    scanf("%d", &jumlahBukuPkn);
    printf("Masukan jumlah pembelian buku indo: ");
    scanf("%d", &jumlahBukuBindo);

    total = jumlahBukuOlahraga * bukuOlahraga + jumlahBukuPkn * bukuPkn + jumlahBukuBindo * bukuBindo;

    printf("jumlah keseluruhan harga buku %d\n", total);
}
