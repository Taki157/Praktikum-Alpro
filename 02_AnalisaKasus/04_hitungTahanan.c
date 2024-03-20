//Nama File         : namaBulan
//Deskripsi         : Mengklasifikasi nama bulan berdasar angka 1-12
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 29 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int a;
    int b;
    int c;
    int total;

    /*Algoritma*/
    printf("==========Hitung Tahanan==========");
    printf("\nMasukkan angka tahanan pertama : ");
    scanf("%d",&a);
    printf("Masukkan angka tahanan kedua : ");
    scanf("%d",&b);
    printf("Masukkan angka tahanan ketiga : ");
    scanf("%d",&c);

    if (a > 0 && b > 0 && c > 0){
        total = a + b + c;
        printf("%d",total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }

    return 0;
}

