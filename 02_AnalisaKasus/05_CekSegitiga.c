//Nama File         : CekSegitiga
//Deskripsi         : Mengklasifikasi jenis Segitiga dari nilai 3 sisi
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 29 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int a;
    int b;
    int c;

    /*Algoritma*/
    printf("==========Cek Segitiga==========");
    printf("\nMasukkan panjang sisi a : ");
    scanf("%d",&a);
    printf("Masukkan panjang sisi b : ");
    scanf("%d",&b);
    printf("Masukkan panjang sisi c : ");
    scanf("%d",&c);

    if (a==b && b==c){
        printf("Segitiga Sama Sisi");
    }
    else if (a!=b && a!=c && b!=c){
        printf("Segitiga Sembarang");
    }
    else{
        printf("Segitiga Sama Kaki");
    }
    return 0;
}