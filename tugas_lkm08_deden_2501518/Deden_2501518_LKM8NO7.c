#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nim[100], nama[100];
    float nilaiTgs, nilaiUts, nilaiUas;
    float nilaiTotal;
    float nilaiAkhir;
    char predikat[100];
    
};
void nilaiMahasiswa(struct Mahasiswa mhs[], int ke){
   int jmlLulus = 0, jmlTdk = 0;
   float rata;

    printf("================ LAPORAN NILAI MAHASISWA ================\n");
    printf("NIM | Nama | Tugas | UTS | UAS | Akhir | Predikat\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < ke; i++)
    {
        mhs[i].nilaiAkhir = (0.3 * mhs[i].nilaiTgs) + (0.3 * mhs[i].nilaiUts) + (0.4 * mhs[i].nilaiUas);
        if (mhs[i].nilaiAkhir >= 85)
        {
            strcpy(mhs[i].predikat, "A (Lulus Sangat Baik)");
            jmlLulus++;
        }else  if (mhs[i].nilaiAkhir >= 70)
        {
            strcpy(mhs[i].predikat, "B (Lulus Baik)");
            jmlLulus++;
        }else  if (mhs[i].nilaiAkhir >= 60)
        {
            strcpy(mhs[i].predikat, "C (Lulus Cukup)");
            jmlLulus++;
        }else  if (mhs[i].nilaiAkhir >= 50)
        {
            strcpy(mhs[i].predikat, "D (Lulus Bersyarat)");
            jmlLulus++;
        }else  if   (mhs[i].nilaiAkhir < 50)
        {
            strcpy(mhs[i].predikat, "E (Tidak Lulus)");
            jmlTdk++;
        }
        
        rata+=mhs[i].nilaiAkhir;
        rata = rata / ke;
        printf("%s | %s | %.2f | %.2f | %.2f | %.2f | %s\n", mhs[i].nim, mhs[i].nama, mhs[i].nilaiTgs, mhs[i].nilaiUts, mhs[i].nilaiUas, mhs[i].nilaiAkhir, mhs[i].predikat);
    }
    printf("------------------------------------------------------------\n");
    printf("Jumlah Mahasiswa\t: %d\n", ke);
    printf("Jumlah Lulus\t\t: %d\n", jmlLulus);
    printf("Jumlah Tidak Lulus\t: %d\n", jmlTdk);
    printf("Rata-rata Nilai Akhir\t: %.2f", rata);
    printf("\n==============================================================");
}

int main(){
    int ke;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &ke);

    struct Mahasiswa mhs[ke];
    for (int i = 0; i < ke; i++)
    {
        printf("\nData Mahasiswa ke-%d:", i+1);
        printf("\nNIM\t: ");
        scanf("%s", mhs[i].nim);
        printf("Nama\t: ");
        scanf("%s", mhs[i].nama);
        printf("Nilai Tugas\t: ");
        scanf("%f", &mhs[i].nilaiTgs);
        printf("Nilai UTS\t: ");
        scanf("%f", &mhs[i].nilaiUts);
        printf("Nilai UAS\t: ");
        scanf("%f", &mhs[i].nilaiUas);  
    }
    printf("\n");
    nilaiMahasiswa(mhs,ke);

return 0; 
}