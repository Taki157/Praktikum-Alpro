//Nama File         : Sequential Search dengan Sentinel
//Deskripsi         : Algoritma Sequential Search dengan Sentinel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 14 Mei 2024
#include <stdio.h>
void SeqScrDesc(int TABMK[101],int NMK, int MKX){
    // Kamus Lokal
    int i;
    int TABMK2[NMK+1];
    int TABOut[101];
    // Algoritma
    // Menambahkan TABMK dengan elemen terakhir MKX di TABMK2
    for (i = 0; i < NMK+1; i++){
        if (i < NMK){
            TABMK2[i] = TABMK[i];
        } else {
            TABMK2[i] = MKX;
        }
    }

    // Mencari Nilai MKX di TABMK2
    i = 0;
    while (TABMK2[i] != MKX) {
        i++;
    }
    
    // Output
    if (i < NMK){
        for (i = 0; i < NMK; i++){
            printf("%d ", TABMK[i]);
        }
    } else{
        for (i = 0; i < NMK+1; i++){
            printf("%d ", TABMK2[i]);
        }
    }
}

int main(){
    /*Kamus Lokal*/
    int TABMK[6] = {2, 3, 6, 7, 9, 10};
    int NMK = 6;
    int MKX = 1;
    
    // Algoritma
    SeqScrDesc(TABMK,NMK,MKX);

    return 0;
}