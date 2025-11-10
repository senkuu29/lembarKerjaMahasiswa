#include <stdio.h>
#include <stdlib.h>
int main (){ 

    float totalSiswa, totalSiswaLulus;
    float persentaseSiswaLulus;

    printf("Masukan jumlah total siswa: ");
    scanf("%f", &totalSiswa);
    printf("Masukan jumlah total siswa yang sudah lulus: ");
    scanf("%f", &totalSiswaLulus);

    persentaseSiswaLulus = (totalSiswaLulus / totalSiswa) * 100;

    printf("persentasi kelulusan : %.2f\n", persentaseSiswaLulus);

}