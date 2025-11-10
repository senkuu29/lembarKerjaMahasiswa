#include <stdio.h>

int main() {
    int jumlah, sisa;
    int kuota = 50;

    printf("Masukkan jumlah mahasiswa yang mengontrak Mata Kuliah Animasi: ");
    scanf("%d", &jumlah);

    sisa = kuota - jumlah;

    if (jumlah <= 30) {
        printf("Kuota kelas masih tersedia untuk %d orang\n", sisa);
    } else if (jumlah <= 49) {
        printf("Kuota kelas hampir penuh.\n");
        printf("Tersedia untuk %d orang lagi.\n", sisa);
    } else {
        printf("Kuota kelas sudah penuh.\n");
    }

    return 0;
}
