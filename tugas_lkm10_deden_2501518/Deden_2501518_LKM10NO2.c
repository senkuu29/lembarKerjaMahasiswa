#include <stdio.h>
#include <string.h>

#define MAKS 20

typedef struct {
    char nama[20];
    int id;
}Barang;

int cariBerdasarkanNama(Barang barang[], int n, char target[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(barang[i].nama, target) == 0) {
            return i;
        }
    }
    return -1;
}

int cariBerdasarkanKode(Barang barang[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (barang[i].id == target) {
            return i;
        }
    }
    return -1;
}

int main() {
  int n;
  int MetodePemilihan;
  int kodeCari;
  int hasil;
  char namaCari[50];

  Barang data[MAKS];

    printf("\nMasukkan Jumlah Barang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nBarang ke-%d\n", i + 1);

        printf("Nama: ");
        scanf("%s", data[i].nama);

        printf("Kode: ");
        scanf("%d", &data[i].id);
    }

    printf("\n");
    printf("Pilih Metode Pencarian:\n");
    printf("1. Berdasarkan Nama\n");
    printf("2. Berdasarkan Kode\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &MetodePemilihan);
    
    switch(MetodePemilihan) {
        case 1:
            printf("Masukkan Nama yang Ingin Dicari: ");
            scanf("%s", namaCari);
            hasil = cariBerdasarkanNama(data, n, namaCari);
            break;
            
        case 2:
            printf("Masukkan Kode yang Ingin Dicari: ");
            scanf("%d", &kodeCari);
            hasil = cariBerdasarkanKode(data, n, kodeCari);
            break;
            
        default:
            printf("Pilihan tidak valid!\n");
            return 1;
    }

     if (hasil != -1) {
        printf("Barang ditemukan:\n");
        printf("Nama: %s\n", data[hasil].nama);
        printf("Kode: %d\n", data[hasil].id);
    } else {
        printf("Barang tidak ditemukan\n");
    }
    return 0;
}