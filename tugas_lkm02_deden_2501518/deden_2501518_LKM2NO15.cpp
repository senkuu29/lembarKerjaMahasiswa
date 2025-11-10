#include <stdio.h>

int main() {
    int kode;

    printf("Status Pengerjaan\n");
    printf("(1) Tugas belum dikerjakan\n");
    printf("(2) Sudah dikerjakan\n");
    printf("(3) Terlewat atau tidak dikerjakan\n");

    printf("Masukkan kode status pengerjaan: ");
    scanf("%d", &kode);

    switch (kode) {
        case 1:
            printf("Tugas belum dikerjakan\n");
            break;
        case 2:
            printf("Sudah dikerjakan\n");
            break;
        case 3:
            printf("Terlewat atau tidak dikerjakan\n");
            break;
        default:
            printf("Kode tidak valid!\n");
            break;
    }

    return 0;
}
