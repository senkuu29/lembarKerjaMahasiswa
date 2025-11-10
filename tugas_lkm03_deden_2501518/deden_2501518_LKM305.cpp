#include <stdio.h>

int main() {
    float totalBelanja, diskon, totalBayar;
    
    printf("Masukkan total belanja: ");
    scanf("%f", &totalBelanja);
    
    if (totalBelanja >= 500000) {
        diskon = totalBelanja * 0.20;  
    } else if (totalBelanja >= 250000) {
        diskon = totalBelanja * 0.10;  
    } else if (totalBelanja >= 100000) {
        diskon = totalBelanja * 0.05;  
    } else {
        diskon = 0;
    }
    
    totalBayar = totalBelanja - diskon;
    
    printf("\nTotal belanja : Rp%.2f\n", totalBelanja);
    printf("Diskon        : Rp%.2f\n", diskon);
    printf("Total bayar   : Rp%.2f\n", totalBayar);
    
    return 0;
}