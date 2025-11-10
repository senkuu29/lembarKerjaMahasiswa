#include <stdio.h>

int main() {
    int pilihan;
    char input[50]; // untuk menampung nomor rekening, kode VA, atau nomor telepon

    printf("Metode Transfer\n");
    printf("(1) Via Bank\n");
    printf("(2) Via Virtual Account\n");
    printf("(3) Via E-Wallet\n");

    printf("Pilih metode transfer: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Via Bank\n");
            printf("Masukkan nomor rekening: ");
            scanf("%s", input);
            printf("Transfer berhasil.\n");
            break;

        case 2:
            printf("Via Virtual Account\n");
            printf("Masukkan kode VA: ");
            scanf("%s", input);
            printf("Transfer berhasil.\n");
            break;

        case 3:
            printf("Via E-Wallet\n");
            printf("Masukkan nomor telepon: ");
            scanf("%s", input);
            printf("Transfer berhasil.\n");
            break;

        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}
