//Nama File         : CekBilPrima
//Deskripsi         : Mengecek apakah n bilangan prima
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 07 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int n,i,faktor;

    /*Algoritma*/
    printf("=====Cek Bilangan Prima=====\n");
    printf("Masukkan n :  ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        if(n%i == 0){
            faktor += 1;
        }
        else{
            faktor += 0;
        }
    }

    if(faktor == 2){
        printf("%d adalah Bilangan Prima",n);
    }
    else{
        printf("%d adalah bukan Bilangan Prima",n);
    }
    return 0;
}