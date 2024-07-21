//Nama File         : Sequential Search dengan Sentinel
//Deskripsi         : Algoritma Sequential Search dengan Sentinel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 14 Mei 2024
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct Kode {
    int kode;
    char Desc[];
}


void TabelKode(Kode TABCODE[101],int Nmax,Kode KodeX){
    // Kamus Lokal
    int i;
    int NELMT;
    int TABCODE2[NELMT+1];
    int TABOut[101];

    // Algoritma
    // Menghitung nilai NELMT
    
    // Jika NELMT < Nmax
    if (NELMT < Nmax){
        for (i = 0; i < NELMT; i++){
            if (KodeX == TABCODE[i]){
                TABCODE2[i] = KodeX;
            } else {
                TABCODE2[i] = TABCODE[i];
            }
        }

        // Mencari Nilai MKX di TABMK2
        i = 0;
        while (TABCODE2[i] != MKX) {
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

    // Jika NELMT >= Nmax
    else {
        printf("Tidak ada tempat kosong di TABCODE");
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