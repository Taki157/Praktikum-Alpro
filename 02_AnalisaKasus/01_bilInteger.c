//Nama File         : bilInteger
//Deskripsi         : Menghitung Gaya Sentripetal
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 29 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus*/
    int a;

    /*Algoritma*/
    printf("=====Potitif, Nol, atau Negatif=====");
    printf("\nMasukkan nilai : ");
    scanf("%d",&a);
    if (a > 0){
        printf("%d adalah Bilangan Bulat Positif",a);
    }
    else if (a == 0){
        printf("%d adalah Bilangan Bulat Nol",a);
    }
    else{
        printf("%d adalah Bilangan Bulat Negatif",a);
    }
    return 0;
}
