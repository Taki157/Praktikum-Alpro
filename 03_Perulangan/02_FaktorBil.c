//Nama File         : FaktorBil
//Deskripsi         : Menampilkan faktor bilangan dari n
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 07 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int n,i;

    /*Algoritma*/
    printf("=====Faktor Bilangan n=====\n");
    printf("Masukkan n :  ");
    scanf("%d",&n);

    printf("Faktor bilangan %d adalah ",n);

    for(i = 1; i <= n; i++){
        if (n == i){
            printf("dan %d",i);
        }
        else if((n % i) == 0){
            printf("%d, ",i);
        }
    }

    return 0;
}

