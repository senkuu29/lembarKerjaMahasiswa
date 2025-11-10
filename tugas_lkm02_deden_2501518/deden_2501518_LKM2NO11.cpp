#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float ipMahasiswa = 3.50;
    float inputIp = 0;
    float ipRendah = 3.00;


    printf("masukan ip mahasiswa : ");
    scanf("%f", &inputIp);

    if (inputIp >= ipMahasiswa) {
        printf("Mahasiswa dapat mengontrak 24 SKS\n");
    } else if (inputIp >= ipRendah) {
        printf("Mahasiswa dapat mengontrak 23 SKS\n");
    } else {
        printf("Mahasiswa dapat mengontrak 20 SKS\n");
    }

    return 0;
}