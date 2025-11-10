#include <stdio.h>
#include <stdlib.h>

struct Barang {
    char nama[50];
    int harga;
    int stok;
};

int main() {
    int n, m, i, j;
    struct Barang data[100];
    int index, jumlah;

    printf("===== FASE 1: INPUT BARANG =====\n");
    printf("Masukkan jumlah barang: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("\nBarang ke-%d\n", i + 1);

        printf("Nama\t: ");
        gets(data[i].nama);

        printf("Harga\t: ");
        scanf("%d", &data[i].harga);

        printf("Stok\t: ");
        scanf("%d", &data[i].stok);
        getchar();
    }

    printf("\n===== DAFTAR STOK AWAL =====\n");
    printf("No\tNama Barang\tHarga\tStok\n");
    printf("----------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t%d\n", i + 1, data[i].nama, data[i].harga, data[i].stok);
    }
    printf("----------------------------------------\n");

    printf("\n===== FASE 2: PROSES TRANSAKSI =====\n");
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        printf("\nTransaksi ke-%d\n", i + 1);
        printf("Nomor Barang (1-%d) : ", n);
        scanf("%d", &index);
        printf("Jumlah Beli : ");
        scanf("%d", &jumlah);

        if (index < 1 || index > n) {
            printf("Nomor barang %d tidak ditemukan.\n", index);
        } else {
            index = index - 1;
            if (jumlah > data[index].stok) {
                printf("Stok %s tidak mencukupi (Sisa: %d). Transaksi dibatalkan.\n", data[index].nama, data[index].stok);
            } else {
                data[index].stok = data[index].stok - jumlah;
                printf("Transaksi %s (Jumlah: %d) berhasil.\n", data[index].nama, jumlah);
            }
        }
    }

    printf("\n===== DAFTAR STOK BARANG TERBARU =====\n");
    printf("No\tNama Barang\tHarga\tStok\n");
    printf("----------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t%d\n", i + 1, data[i].nama, data[i].harga, data[i].stok);
    }
    printf("----------------------------------------\n");

    return 0;
}