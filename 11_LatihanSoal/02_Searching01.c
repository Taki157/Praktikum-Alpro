//Nama File         : Sequential Search dengan Sentinel
//Deskripsi         : Algoritma Sequential Search dengan Sentinel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 14 Mei 2024
#include <stdio.h>
void SeqScrDesc(int T[],int N, int X){
    // Kamus Lokal
    int i;
    int IX;
    // Algoritma
    // Membuat Tabel Baru ditambah sentinel
    int NewTab[N+1];
    for (int i = 0; i < N+1; i++){
        if (i == N){
            NewTab[i] = X;
        } else {
            NewTab[i] = T[i];
        }
    }
    
    // Pencarian nilai X
    i = 0;
    while (NewTab[i] != X){
        i++;
    }
    
    if (i < N+1){
        IX = i;
    } else{
        IX = 0;
    }

    // Output
    printf("%d", IX);

}

int main(){
    /*Kamus Lokal*/
    int T[6] = {2, 3, 6, 7, 9, 10};
    int N = 6;
    int X = 3;
    
    // Algoritma
    SeqScrDesc(T,N,X);

    return 0;
}