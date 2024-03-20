//Nama File         : CekBilSemp
//Deskripsi         : Mengecek apakah n bilangan sempurna
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 07 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int n,i,JmlFaktor;

    /*Algoritma*/
    printf("=====Cek Bilangan Sempurna=====\n");
    printf("Masukkan n :  ");
    scanf("%d",&n);

    JmlFaktor = 0;
    for(i = 1; i <= n; i++){
        if(i == n){
            JmlFaktor += 0;
        }
        else if(n%i == 0){
            JmlFaktor += i;
        }
        else{
            JmlFaktor += 0;
        }
    }

    if(JmlFaktor == n){
        printf("%d adalah Bilangan Sempurna",n);
    }
    else{
        printf("%d adalah bukan Bilangan Sempurna",n);
    }
    return 0;
}

