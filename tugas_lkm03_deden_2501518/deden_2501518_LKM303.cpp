#include <stdio.h>

main() {
  int lamaParkir, x;
  int biayaAwalParkir = 5000;

  printf("Masukan lama parkir (jam): ");
  scanf("%d",&lamaParkir);

  if (lamaParkir < 1)
  {
    printf("Biaya parkir adalah Rp 5000");
  }else if (lamaParkir <= 5)
  {
    int totalBayar = biayaAwalParkir + 3000 * (lamaParkir - 1);
     printf("Biaya parkir adalah Rp %d", totalBayar );
  }else{
    printf("Biaya parkir adalah Rp 25000");
  }
  
  return 0;
}