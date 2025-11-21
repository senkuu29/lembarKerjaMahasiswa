#include <stdio.h>
#include <string.h>

#define MAX_BUKU 100
#define PANJANG_JUDUL 100

void tukar(char *a, char *b) {
    char temp[PANJANG_JUDUL];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void urutkanJudul(char judul[][PANJANG_JUDUL], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(judul[j], judul[j + 1]) > 0) {
                tukar(judul[j], judul[j + 1]);
            }
        }
    }
}

int main() {
    char judulBuku[MAX_BUKU][PANJANG_JUDUL];
    int n;
    
    printf("Masukkan jumlah judul buku yang akan diurutkan (maks %d): ", MAX_BUKU);
    scanf("%d", &n);
    getchar();
    
    if (n > MAX_BUKU || n <= 0) {
        printf("Jumlah buku tidak valid!\n");
        return 1;
    }
    
    printf("\nMasukkan judul buku:\n");
    for (int i = 0; i < n; i++) {
        printf("Judul ke-%d: ", i + 1);
        scanf("%[^\n]", judulBuku[i]);
        getchar();
    }
    
    urutkanJudul(judulBuku, n);
    
    printf("\nDaftar Judul Setelah Diurutkan\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, judulBuku[i]);
    }
    
    return 0;
}