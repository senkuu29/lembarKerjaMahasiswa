#include <stdio.h>
#include <stdlib.h>
int main (){
    int hargaSweater=50000, hargaGamis=200000, hargaJaket=85000,Total;
    float diskon=0.10;
    int jumlahSweater, jumlahGamis, jumlahJaket, jumlahHargaSetelahTotal, totalDiskon;

    int hargaSetelahDiskon;
    

    printf("Masukan jumlah Sweater");
    scanf("%d", &jumlahSweater );
    printf("Masukan jumlah gamis");
    scanf("%d", &jumlahGamis );
    printf("Masukan jumlah jaket");
    scanf("%d", &jumlahJaket );

    jumlahHargaSetelahTotal = jumlahSweater * hargaSweater + jumlahGamis * hargaGamis + jumlahJaket * hargaJaket ;

     totalDiskon = jumlahHargaSetelahTotal*diskon;

    hargaSetelahDiskon = jumlahHargaSetelahTotal -  totalDiskon ;

    printf("jumlah keseluruhan sebelum diskon %d\n", jumlahHargaSetelahTotal);
    // printf("jumlah diskon %d\n",  totalDiskon);
    printf("jumlah keseluruhan setelah diskon %d\n", hargaSetelahDiskon);

return 0;
}