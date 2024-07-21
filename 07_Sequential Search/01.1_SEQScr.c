//Nama File         : Sequential Search Versi 1.1
//Deskripsi         : Algoritma Sequential Search Versi 1 dengan Boolean
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 7 Mei 2024
# include <stdio.h>
# include <stdbool.h>

int main(){
    /*Kamus Lokal*/
    int i, N, X, IX;
    bool Found;

    /*Algoritma*/
    int T[4] = {1,2,3,4};
    N = 4;
    X = 2;
    i = 0;
    Found = false;

    while (i < N && T[i] != X){
        i++;
    }

    Found = (T[i] == X);

    printf("Found : %d", Found); // 1 : True, 0 : False

    return 0;
}
