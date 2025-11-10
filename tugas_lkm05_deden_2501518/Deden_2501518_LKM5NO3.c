#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int total = 0;
    int harga;
    int jumlahMenu;

        printf("Masukkan jumlah menu yang akan di pesan: ");
        scanf("%d",&jumlahMenu);
        printf("\n");

    char nama[jumlahMenu][15];

    for(i = 0; i < jumlahMenu; i++){
        printf("Masukkan nama menu: ");
        scanf("%s", nama[i]);
        printf("Masukkan harga menu: ");
        scanf("%d", &harga);
        
        total += harga;
    }

    printf("\n");

    printf("Daftar menu yang dipesan: ");
    for( i = 0 ; i < jumlahMenu; i++){
        printf("%s", nama[i]);
        if(i < (jumlahMenu -1)){
            printf(", ");
        }else {
            printf(". ");
        }
    }
    printf("\n");
    printf("Total harga: %d", total);
    return 0;
}
