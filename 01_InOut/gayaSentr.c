//Nama File         : gayaSentr
//Deskripsi         : Menghitung Gaya Sentripetal
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 21 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int m,v,r;
    float F;

    /*Algoritma*/
    printf("=====Menghitung Gaya Sentripetal=====\n");
    printf("Masukkan nilai Massa Benda (m) : ");
    scanf("%d",&m);
    printf("Masukkan nilai Kecepatan Benda (v) : ");
    scanf("%d",&v);
    printf("Masukkan nilai Jari-jari (r) : ");
    scanf("%d",&r);

    F = m*((v*v)/r);
    printf("Gaya Sentripetal = %.2f",F);
    return 0;
}
