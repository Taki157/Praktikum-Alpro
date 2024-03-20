//Nama File         : kallSS
//Deskripsi         : Kalkulator super sederhana operasi 2 bilangan integer
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Jum'at, 1 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int A;
    int B;
    char operasi;
    float hasil;
    int hasildiv;

    /*Algoritma*/
    printf("==========Kalkulator Super Sederhana==========");
    printf("\nMasukkan nilai A : ");
    scanf(" %d",&A);
    printf("Masukkan nilai B : ");
    scanf(" %d",&B);
    printf("Pilih operasi a-f: ");
    scanf(" %c",&operasi);

    if (operasi == 'a'){
        hasil = A + B;
        printf("%f",hasil);
    }
    else if (operasi == 'b'){
        hasil = A - B;
        printf("%f",hasil);
    }
    else if (operasi == 'c'){
        hasil = A * B;
        printf("%f",hasil);
    }
    else if (operasi == 'd'){
        hasil = A / B;
        printf("%f",hasil);
    }
    else if (operasi == 'e'){
        hasildiv = A / B;
        printf("%d",hasildiv);
    }
    else if (operasi == 'f'){
        hasil = A % B;
        printf("%f",hasil);
    }
    else{
        printf("Bukan pilihan menu yang benar");
    }
    return 0;
}



