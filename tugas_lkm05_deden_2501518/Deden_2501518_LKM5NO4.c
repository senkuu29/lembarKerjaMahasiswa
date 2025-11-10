#include <stdio.h>
#include <string.h>

int main() {
    int stok = 100;
    int totalCustomer = 0;
    int totalTerjual = 0;
    int totalPenjualan = 0;
    int hargaTiket = 35000;
    char nama[100][50];
    int jumlahTiket[100];

    while (stok > 0) {
        printf("Masukkan nama pembeli untuk customer ke-%d: ", totalCustomer + 1);
        // digunakan ketika ingin meng input nama dengan spasi contoh: deden ahmad jamil
        //scanf(" %[^\n]", nama[totalCustomer]); 
        scanf("%s", nama[totalCustomer]);

        printf("Masukkan jumlah tiket yang dibeli: ");
        scanf("%d", &jumlahTiket[totalCustomer]);

        if (jumlahTiket[totalCustomer] <= stok) {
            stok -= jumlahTiket[totalCustomer];
            totalTerjual += jumlahTiket[totalCustomer];
            totalPenjualan += jumlahTiket[totalCustomer] * hargaTiket;
            totalCustomer++;

            if (stok == 0) {
                printf("\nMaaf, tiket sudah habis.\n");
                break;
            }
        } else {
            printf("\nMaaf, stok tiket hanya tersisa %d.\n", stok);
            printf("Apakah anda tetap ingin membeli sisa tiket yang tersedia? (Y/N)\n");
            printf("1. Jika iya, maka anda dapat membeli sisa tiket yang tersedia (%d tiket).\n", stok);
            printf("2. Jika tidak, maka pembelian dibatalkan.\n");
            printf("Jawaban: ");
            char jawab;
            scanf(" %c", &jawab);

            if (jawab == 'Y' || jawab == 'y') {
                jumlahTiket[totalCustomer] = stok;
                printf("Pembelian berhasil sebanyak %d tiket.\n", stok);
                totalTerjual += stok;
                totalPenjualan += stok * hargaTiket;
                stok = 0;
                totalCustomer++;
                printf("\nMaaf, tiket sudah habis.\n");
                break;
            } else {
                printf("Pembelian dibatalkan.\n\n");
            }
        }
    }

    // Setelah tiket habis
    printf("\nRekapan Penjualan:\n");
    printf("Sisa tiket : %d\n", stok);
    printf("Jumlah customer : %d\n", totalCustomer);
    printf("Tiket terjual : %d\n", totalTerjual);
    printf("Total penjualan : Rp%d\n\n", totalPenjualan);

    printf("Rincian Penjualan:\n");
    for (int i = 0; i < totalCustomer; i++) {
        printf("%d. %s = %d tiket (Rp%d)\n", i + 1, nama[i], jumlahTiket[i], jumlahTiket[i] * hargaTiket);
    }
    printf("\n");
    printf("-------------------------------");

    return 0;
}
