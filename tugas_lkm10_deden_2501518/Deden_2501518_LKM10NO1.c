#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[20];
    long harga;
} Barang;

void cariBarang(Barang barang[], int n, char target[]) {
    int count = 0;
    
    printf("\nHasil pencarian:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(barang[i].nama, target) == 0) {
            printf("Ditemukan pada index %d: %s - Rp %ld\n", i, barang[i].nama, barang[i].harga);
            count++;
        }
    }
    
    if (count > 0) {
        printf("\nTotal ditemukan: %d kali.\n", count);
    } else {
        printf("Barang '%s' tidak ditemukan.\n", target);
    }
}

int main() {
    Barang barang[] = {
        {"Laptop", 7500000},
        {"Mouse", 80000},
        {"Keyboard", 320000},
        {"Laptop", 10000000},
        {"Monitor", 1000000}
    };
    
    int jumlah_barang = 5;
    char cari[20];
    
    printf("Daftar Barang Toko Elektronik:\n");
    for (int i = 0; i < jumlah_barang; i++) {
        printf("%d. %s - Rp %ld\n", i+1, barang[i].nama, barang[i].harga);
    }
    
    printf("\nMasukkan nama barang yang dicari: ");
    scanf("%s", cari);
    
    cariBarang(barang, jumlah_barang, cari);
    
    return 0;
}