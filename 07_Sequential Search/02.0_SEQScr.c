//Nama File         : Sequential Search Versi 2.0
//Deskripsi         : Algoritma Sequential Search Versi 2
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 7 Mei 2024

#include <stdio.h>
#include <stdbool.h>

int main(){
    /*Kamus Lokal*/
    int N, i, X, IX;
    bool Found;

    /*Algoritma*/
    int T[20] = {19,1,28,5,20,15,52,13,16,29,71,65,10,18,87,5,90,35,7,11};
    N = 20;
    scanf("%d",&X);

    i = 0;
    Found = false;

    while ((i < N) && !Found){
        if (T[i] == X){
            Found = true;
        }else{
            i++;
        }
    }
    if (Found == true){
        IX = i;
    }else{
        IX = 0;
    }

    printf("%d",IX);

    return 0;
}