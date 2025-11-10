#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int berat;
    int sistole, diastole; // sistole = tekanan atas, diastole = tekanan bawah

    printf("Masukkan berat badan siswa (kg): ");
    scanf("%d", &berat);

    if (berat < 50) {
        printf("Siswa tidak boleh mengikuti pemeriksaan darah karena berat badan kurang dari 50 kg.\n");
    } else {
        printf("Masukkan tekanan darah sistole (atas): ");
        scanf("%d", &sistole);

        printf("Masukkan tekanan darah diastole (bawah): ");
        scanf("%d", &diastole);

        if (sistole < 90 || diastole < 60) {
            printf("Siswa dirujuk ke rumah sakit/puskesmas karena tekanan darah terlalu rendah.\n");
        } else if (sistole > 140 || diastole > 90) {
            printf("Siswa dirujuk ke rumah sakit/puskesmas karena tekanan darah terlalu tinggi.\n");
        } else if (sistole >= 90 && sistole <= 120 && diastole >= 60 && diastole <= 80) {
            printf("Siswa cukup sehat untuk mengikuti pemeriksaan darah.\n");
        } else {
            printf("Tekanan darah tidak dalam rentang sehat, harap periksa lebih lanjut.\n");
        }
    }

    return 0;
}
