#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int dana = 50, pengeluaran = 0;

     printf("dana yang tersedia : %d\n", dana);
     printf("masukan jumlah pengeluaran : ");
     scanf("%d", &pengeluaran);

     if(pengeluaran <= dana){
        printf("uang cukup");
     }else if(pengeluaran > dana){
        printf("uang kurang");
     }
}