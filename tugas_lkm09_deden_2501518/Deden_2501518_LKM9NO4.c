#include <stdio.h>
#include <string.h>

#define MAKS 20

typedef struct {
    char id[20];
    float berat;
    char tujuan[50];
} Paket;

void selectionSort(Paket arr[], int n) {
    int i, j, minIdx;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j].berat < arr[minIdx].berat) {
                minIdx = j;
            }
        }
        Paket temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

void tampilkan(Paket arr[], int n) {
    printf("=============================================================\n");
    printf("| %-10s | %-10s | %-15s |\n", "ID Paket", "Berat (kg)", "Tujuan");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("| %-10s | %-10.1f | %-15s |\n", arr[i].id, arr[i].berat, arr[i].tujuan);
    }

    printf("=============================================================\n");
}

int main() {
    int n;
    Paket data[MAKS];

    printf("Masukkan jumlah paket: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nData paket ke-%d\n", i + 1);

        printf("ID Paket   : ");
        scanf("%s", data[i].id);

        printf("Berat (kg) : ");
        scanf("%f", &data[i].berat);

        printf("Tujuan     : ");
        getchar();
        fgets(data[i].tujuan, sizeof(data[i].tujuan), stdin);
        data[i].tujuan[strcspn(data[i].tujuan, "\n")] = 0;
    }

    printf("\n\nDaftar Paket Awal\n");
    tampilkan(data, n);

    selectionSort(data, n);

    printf("\nDaftar Paket Terurut (Teringan ke Terberat)\n");
    tampilkan(data, n);

    return 0;
}
