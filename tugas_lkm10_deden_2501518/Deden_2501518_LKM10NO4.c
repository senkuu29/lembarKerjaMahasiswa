#include <stdio.h>

#define MAKS 100

int binarySearch(int nim[], int n, int target) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (nim[mid] == target) {
            return mid; 
        } else if (nim[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int n, nim_cari, hasil;
    int nim[MAKS];
    
    printf("=== Program Cek Absensi Ujian (Binary Search) ===\n");
    
    printf("Masukkan jumlah peserta ujian: ");
    scanf("%d", &n);

    if (n > MAKS || n <= 0) {
        printf("Jumlah peserta tidak valid! Maksimal %d\n", MAKS);
        return 1;
    }
    
    printf("\nPERHATIAN: Masukkan NIM secara TERURUT dari kecil ke besar\n");
    
    for (int i = 0; i < n; i++) {
        printf("Masukkan NIM ke-%d: ", i + 1);
        scanf("%d", &nim[i]);

        if (i > 0 && nim[i] < nim[i-1]) {
            printf("ERROR: NIM harus diinput secara terurut menaik!\n");
            printf("NIM ke-%d (%d) lebih kecil dari NIM sebelumnya (%d)\n", 
                   i + 1, nim[i], nim[i-1]);
            return 1;
        }
    }

    printf("\nMasukkan NIM yang ingin dicek kehadirannya: ");
    scanf("%d", &nim_cari);

    hasil = binarySearch(nim, n, nim_cari);

    printf("\n--- Hasil Pencarian ---\n");
    if (hasil != -1) {
        printf("Status: HADIR\n");
        printf("NIM %d ditemukan pada data indeks ke-%d.\n", nim_cari, hasil);
    } else {
        printf("Status: TIDAK HADIR\n");
        printf("NIM %d tidak ditemukan dalam data absensi.\n", nim_cari);
    }
    
    return 0;
}