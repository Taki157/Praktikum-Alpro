//Nama File         : Binary Search
//Deskripsi         : Algoritma Binary Search tanpa boolean
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Rabu, 15 Mei 2024
#include <stdio.h>

int main(){
    /*Kamus Lokal*/
    int N, atas, bawah, tengah, X, IX;

    /*Algoritma*/
    int Tabel[13] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    N = 13;
    X = 8;
    
    int i = 0;
    atas = i;
    bawah = N;
    tengah = (atas + bawah) / 2;

    IX = 0;
    while ((atas < bawah) && (Tabel[tengah] != X)){
        if (X < Tabel[tengah]){
            bawah = tengah - 1;
        } else if (X > Tabel[tengah]){
            atas = tengah + 1;
        }
        tengah = (atas + bawah) / 2;
    }

    if (X == Tabel[tengah]){
        IX = tengah;
    } else {
        IX = 0;
    }
    
    printf("%d", IX);
    return 0;
}