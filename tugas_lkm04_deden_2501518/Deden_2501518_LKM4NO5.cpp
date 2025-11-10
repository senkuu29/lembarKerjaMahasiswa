#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    
    printf("Masukkan angka: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
    
    return 0;
}