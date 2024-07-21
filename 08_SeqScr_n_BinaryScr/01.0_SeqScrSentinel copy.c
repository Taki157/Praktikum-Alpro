//Nama File         : Sequential Search dengan Sentinel
//Deskripsi         : Algoritma Sequential Search dengan Sentinel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 14 Mei 2024
#include <stdio.h>

int main(){
    /*Kamus Lokal*/
    int N, X, IX;
    
    /*Algoritma*/
    int Tabel[10] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29};
    N = 10;
    X = 52;
    
    int NewTab[N+1];
    for (int i = 0; i < N+1; i++){
        if (i == N){
            NewTab[i] = X;
        } else {
            NewTab[i] = Tabel[i];
        }
    }
    
    int i = 0;
    while (NewTab[i] != X){
        i++;
    }
    
    printf("%d\n", i);
    if (i < N+1){
        IX = i;
    } else{
        IX = 0;
    }

    printf("%d", IX);
    return 0;
}