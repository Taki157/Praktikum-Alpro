//Nama File         : Binary Search
//Deskripsi         : Algoritma Binary Search dengan boolean
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 14 Mei 2024
#include <stdio.h>
#include <stdbool.h>

int main(){
    /*Kamus Lokal*/
    int N, atas, bawah, tengah, X, IX;
    bool found = false;

    /*Algoritma*/
    int Tabel[13] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    N = 13;
    X = 41;
    
    int i = 0;
    atas = i;
    bawah = N;

    while ((atas <= bawah) && (!found)){
        tengah = (atas + bawah) / 2;
        if (X == Tabel[tengah]){
            found = true;
        } else if (X < Tabel[tengah]){
            bawah = tengah - 1;
        } else if (X > Tabel[tengah]){
            atas = tengah + 1;
        }
    }

    if (found){
        IX = tengah;
    } else {
        IX = 0;
    }
    
    printf("%d", IX);
    return 0;
}