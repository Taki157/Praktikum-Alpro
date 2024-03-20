//Nama File         : NilMax2Tabel
//Deskripsi         : Menentukan nilai terbesar kedua dari tabel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 14 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int N,i;

    /*Algoritma*/
    printf("=====Menentukan Nilai Terbesar Kedua dari Tabel T=====\n");
    printf("Masukkan panjang tabel T : ");
    scanf("%d",&N);
    printf("Masukkan elemen tabel T :\n");

    int T[N];
    for (i = 0; i < N; i++){
        scanf("%d",&T[i]);
    }

    int max1 = 0;
    int max2 = 0;
    for (i = 0; i < N; i++){
        if (T[i] > max1){
            max2 = max1;
            max1 = T[i];
        }
        else{
            if(T[i] > max2 && T[i] != max1){
                max2 = T[i];
            }
        }
    }

    printf("Elemen terbesar kedua tabel T adalah %d", max2);

    return 0;
}
