#include <stdio.h>
#include <string.h>

#define MAKS 10

typedef struct {
    char id[20];
    char nama[50];
    int tahun;
} Lukisan;

void selectionSort(Lukisan arr[], int n) {
    int i, j, maxIdx;
    for (i = 0; i < n - 1; i++) {
        maxIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j].tahun > arr[maxIdx].tahun) {
                maxIdx = j;
            }
        }

        Lukisan temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

void tampilkan(Lukisan arr[], int n) {
    printf("=============================================================\n");
    printf("| %-10s | %-25s | %-12s |\n", "ID", "Nama Lukisan", "Tahun Dibuat");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("| %-10s | %-25s | %-12d |\n", arr[i].id, arr[i].nama, arr[i].tahun);
    }

    printf("=============================================================\n");
}

int main() {
    int n;
    Lukisan data[MAKS];

    printf("Masukkan jumlah lukisan (maks 10): ");
    scanf("%d", &n);

    if (n > MAKS) {
        printf("Jumlah melebihi kapasitas!\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("\nData lukisan ke-%d\n", i + 1);
        printf("ID Lukisan      : ");
        scanf("%s", data[i].id);

        printf("Nama Lukisan    : ");
        getchar(); 
        fgets(data[i].nama, sizeof(data[i].nama), stdin);
        data[i].nama[strcspn(data[i].nama, "\n")] = 0;

        printf("Tahun Dibuat    : ");
        scanf("%d", &data[i].tahun);
    }

    printf("\n=============================================================");
    printf("\nDaftar Lukisan Awal\n");
    tampilkan(data, n);
    
    selectionSort(data, n);
    
    printf("\n=============================================================");
    printf("\nDaftar Lukisan Terurut (Terbaru ke Terlama)\n");
    tampilkan(data, n);

    return 0;
}
