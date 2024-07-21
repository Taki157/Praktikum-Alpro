//Nama File         : Sequential Search Versi 1.0
//Deskripsi         : Algoritma Sequential Search Versi 1 tanpa Boolean
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 7 Mei 2024
# include <stdio.h>

int main(){
    /*Kamus Lokal*/
    int i, N, X, IX;

    /*Algoritma*/
    int T[20] = {19,1,28,5,20,15,52,13,16,29,71,65,10,18,87,5,90,35,7,11};
    N = 20;
    scanf("%d",&X);

    i = 0;
    while (i < N && T[i] != X){
        i++;
    }

    if (i < N){
        IX = i;
    }else{
        IX = 0;
    }

    printf("%d", IX);

    return 0;
}
