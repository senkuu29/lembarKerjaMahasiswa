#include <stdio.h>
#include <stdlib.h>

main() {
  int akademik, wawancara, psikotes;

  printf("Masukan nilai Tes Akademik: ");
  scanf("%d",&akademik);
  printf("Masukan nilai Tes Wawancara: ");
  scanf("%d",&wawancara);
  printf("Masukan nilai Tes Psikotes: ");
  scanf("%d",&psikotes);
  
  if(akademik >= 85 && wawancara >= 80 && psikotes >= 75) {
    printf("Status: LULUS SEMPURNA\n");
    if(akademik >= 70 && akademik <= 84 || wawancara >= 65 && wawancara <= 79 || psikotes >= 60 && psikotes <= 74) {
        printf("Status: LULUS \n");
      }
  }else {
      printf("Status: TIDAK LULUS\n");
  }
}