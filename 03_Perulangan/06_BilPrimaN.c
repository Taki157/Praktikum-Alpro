//Nama File         : BilPrimaN
//Deskripsi         : Menampilkan bilangan prima sampai n
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 07 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int n,i,j,faktor;

    /*Algoritma*/
    printf("=====Bilangan Prima n=====\n");
    printf("Masukkan n :  ");
    scanf("%d",&n);

    printf("Bilangan prima sampai %d adalah ",n);

    for(i = 1; i <= n; i++){
        faktor = 0;
        for(j = 1; j <= i; j++){
        if(i%j == 0){
            faktor += 1;
        }
        else{
            faktor += 0;
        }
        }

        if(faktor == 2){
            printf("%d ", i);
        }
        else{
            faktor += 0;
        }
    }

    return 0;
}

