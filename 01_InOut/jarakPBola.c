//Nama File         : jarakPBola
//Deskripsi         : Menghitung Jarak Gerak Parabola
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 21 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int v0,t;
    float g,y;
    g = 9.8;

    /*Algoritma*/
    printf("==========Menghitung Jarak Parabola==========\n");
    printf("Masukkan Kecepatan Awal (v0) : ");
    scanf("%d",&v0);
    printf("Masukkan Waktu (t) : ");
    scanf("%d",&t);
    y = v0*t - 0.5*(g*t*t);
    printf("y = %f",y);
    return 0;
}
