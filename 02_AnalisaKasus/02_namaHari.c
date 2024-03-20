//Nama File         : namaHari
//Deskripsi         : Menghitung Gaya Sentripetal
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 29 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int a;

    /*Algoritma*/
    printf("==========Nama Hari==========");
    printf("\nMasukkan nomor untuk nama hari : ");
    scanf("%d",&a);

    switch (a){
        case 1 :
            printf("Minggu");
            break;
        case 2 :
            printf("Senin");
            break;
        case 3 :
            printf("Selasa");
            break;
        case 4 :
            printf("Rabu");
            break;
        case 5 :
            printf("Kamis");
            break;
        case 6 :
            printf("Jum'at");
            break;
        case 7 :
            printf("Sabtu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
