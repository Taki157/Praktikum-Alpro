//Nama File         : namaBulan
//Deskripsi         : Mengklasifikasi nama bulan berdasar angka 1-12
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 29 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int a;

    /*Algoritma*/
    printf("==========Nama Bulan==========");
    printf("\nMasukkan nomor untuk nama bulan : ");
    scanf("%d",&a);

    switch (a){
        case 1 :
            printf("Januari");
            break;
        case 2 :
            printf("Februari");
            break;
        case 3 :
            printf("Maret");
            break;
        case 4 :
            printf("April");
            break;
        case 5 :
            printf("Mei");
            break;
        case 6 :
            printf("Juni");
            break;
        case 7 :
            printf("Juli");
            break;
        case 8 :
            printf("Agustus");
            break;
        case 9 :
            printf("September");
            break;
        case 10 :
            printf("Oktober");
            break;
        case 11 :
            printf("November");
            break;
        case 12 :
            printf("Desember");
            break;
        default:
            printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}

