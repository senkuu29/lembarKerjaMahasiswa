#include <stdio.h>

int main() {
    int bilangan;
    
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);
    
    // genap atau ganjil
    if (bilangan % 2 == 0) {
        printf("Bilangan %d adalah Genap ", bilangan);
    } else {
        printf("Bilangan %d adalah Ganjil ", bilangan);
    }
    
    // positif, negatif,
    if (bilangan >= 0) {
        printf("Positif");
    } else {
        printf("Negatif");
    }
    
    return 0;
}