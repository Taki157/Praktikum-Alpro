
//Nama File         : BilSempN
//Deskripsi         : Meampilkan bilangan sempurna sampai n
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 07 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int n,i,,j,JmlFaktor;

    /*Algoritma*/
    printf("=====Bilangan Sempurna n=====\n");
    printf("Masukkan n :  ");
    scanf("%d",&n);

    printf("Bilangan Prima sampai %d adalah",n);

    for(i = 1; i <= n; i++){
        JmlFaktor = 0;
        for(j=1;j <= i;j++){
            if(j == i){
            JmlFaktor += 0;
            }
            else if(i%j == 0){
                JmlFaktor += j;
            }
            else{
                JmlFaktor += 0;
            }
        }

        if(JmlFaktor == n){
            printf("%d, ",n);
        }
        else{
            JmlFaktor += 0;
        }
    }


    return 0;
}

