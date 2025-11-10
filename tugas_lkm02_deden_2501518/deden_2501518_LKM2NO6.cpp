#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int minimalUsia = 17, usia = 0;

     printf("masukan usia siswa : ");
     scanf("%d", &usia);

     if(usia >= minimalUsia){
        printf("usia sudah cukup");
     }else if(usia < minimalUsia){
        printf("usia belum cukup");
     }
}