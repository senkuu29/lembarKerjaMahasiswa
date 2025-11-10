#include <stdio.h>

int main() {
    int kapasitas = 100;
    int jumlahPenonton, umur, sisaKursi;

    printf("Masukkan jumlah penonton saat ini: ");
    scanf("%d", &jumlahPenonton);

    if (jumlahPenonton < kapasitas) {
        printf("Masukkan umur penonton baru: ");
        scanf("%d", &umur);

        if (umur < 5) {
            printf("Gratis untuk balita.\n");
        } else if (umur <= 12) {
            printf("Harga tiket Rp 45.000.\n");
        } else if (umur <= 60) {
            printf("Harga tiket Rp 50.000.\n");
        } else {
            printf("Diskon lansia, harga tiket Rp 40.000.\n");
        }

        sisaKursi = kapasitas - (jumlahPenonton + 1);
        printf("Sisa kursi tersedia: %d kursi\n", sisaKursi);

    } else {
        printf("Kursi sudah penuh!\n");
    }
    return 0;
}
