//Nama File         : luasKelLayang
//Deskripsi         : Menghitung Luas dan Keliling Layang-layang
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 21 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int s1,s2,d1,d2;
    float Luas,Kell;

    /*Algoritma*/
    printf("=====Menghitung Luas dan Keliling Layang-Layang=====\n");
    printf("Masukkan nilai s1 : ");
    scanf("%d",&s1);
    printf("Masukkan nilai s2 : ");
    scanf("%d",&s2);
    printf("Masukkan nilai d1 : ");
    scanf("%d",&d1);
    printf("Masukkan nilai d2 : ");
    scanf("%d",&d2);

    Luas = 0.5*d1*d2;
    Kell = 2*(s1+s2);

    printf("Luas         = %f",Luas);
    printf("\nKeliling = %f",Kell);
    return 0;
}
