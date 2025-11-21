#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Tiket {
    char nama[50];
    int nomor;
};

void urutkanTiket(struct Tiket arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].nomor > arr[j + 1].nomor) {
                struct Tiket temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void toUpperString(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    struct Tiket vip[50];
    struct Tiket reguler[150];
    int countVIP = 0;
    int countReguler = 0;

    int n;
    printf("Masukkan jumlah tiket: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char nama[50], kategori[20];
        int nomor;

        printf("\nData ke-%d:\n", i + 1);
        printf("Nama: ");
        scanf("%s", nama);

        printf("Kategori (VIP/REGULER): ");
        scanf("%s", kategori);
        
        printf("Nomor tiket: ");
        scanf("%d", &nomor);

        toUpperString(kategori);

        if (strcmp(kategori, "VIP") == 0) {
            if (nomor >= 1 && nomor <= 50) {
                if (countVIP < 50) {
                    strcpy(vip[countVIP].nama, nama);
                    vip[countVIP].nomor = nomor;
                    countVIP++;
                } else {
                    printf("Kuota VIP sudah penuh!\n");
                }
            } else {
                printf("Nomor tiket VIP harus antara 1-50!\n");
            }
        } else if (strcmp(kategori, "REGULER") == 0) {
            if (nomor >= 51 && nomor <= 200) {
                if (countReguler < 150) {
                    strcpy(reguler[countReguler].nama, nama);
                    reguler[countReguler].nomor = nomor;
                    countReguler++;
                } else {
                    printf("Kuota Reguler sudah penuh!\n");
                }
            } else {
                printf("Nomor tiket Reguler harus antara 51-200!\n");
            }
        } else {
            printf("Kategori tidak valid!\n");
        }
    }

    urutkanTiket(vip, countVIP);
    urutkanTiket(reguler, countReguler);

    printf("\nUrutan Nomor Tiket - Kategori VIP\n");
    for (int i = 0; i < countVIP; i++) {
        printf("Tiket %d - %s\n", vip[i].nomor, vip[i].nama);
    }

    printf("\nUrutan Nomor Tiket - Kategori Reguler\n");
    for (int i = 0; i < countReguler; i++) {
        printf("Tiket %d - %s\n", reguler[i].nomor, reguler[i].nama);
    }

    return 0;
}