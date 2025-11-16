#include <stdio.h>

struct Penjualan {
    char namaBarang[70];
    char kategoriBarang[70];
    float jumlahTerjual;
    float hargaSatuan;
};

void tampilStatistik(struct Penjualan data[], int jumlahData) {
    float totalBarangTerjual;
    float totalPendapatan;
    float totalHarga;

    printf("\n=== Daftar Penjualan ===\n");
    for (int i = 0; i < jumlahData; i++) {
        float pendapatan = data[i].jumlahTerjual * data[i].hargaSatuan;

        printf("%d. %s (%s) - %.0f x %.2f = %.2f\n",i + 1, data[i].namaBarang, data[i].kategoriBarang, data[i].jumlahTerjual, data[i].hargaSatuan, pendapatan);

        totalBarangTerjual += data[i].jumlahTerjual;
        totalPendapatan += pendapatan;
        totalHarga += data[i].hargaSatuan;
    }

    float rataHarga = totalHarga / jumlahData;

    printf("\n=== Statistik Penjualan ===\n");
    printf("Total barang terjual\t: %.0f\n", totalBarangTerjual);
    printf("Total pendapatan\t: %.2f\n", totalPendapatan);
    printf("Rata-rata harga barang\t: %.2f\n", rataHarga);
}

int main() {
    int jumlahData;
    struct Penjualan data[20];

    printf("Masukkan Jumlah data penjualan: ");
    scanf("%d", &jumlahData);

    for (int i = 0; i < jumlahData; i++) {
        printf("\nData ke-%d\n", i + 1);

        printf("Nama Barang\t: ");
        scanf("%s", data[i].namaBarang);

        printf("Kategori Barang\t: ");
        scanf(" %[^\n]s", data[i].kategoriBarang);

        printf("Jumlah Terjual\t: ");
        scanf("%f", &data[i].jumlahTerjual);

        printf("Harga Satuan\t: ");
        scanf("%f", &data[i].hargaSatuan);
    }

    tampilStatistik(data, jumlahData);

    return 0;
}