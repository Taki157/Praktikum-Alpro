//Nama File         : Count Sort
//Deskripsi         : Algoritma Count Sort
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Sabtu, 25 Mei 2024

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CountSort(int T[], int N){
    /* Kamus lokal */
    int i;
    int min, max;
    int k;

    /* Algoritma */
    // Mencari nilai min dan max
    max = T[0];
    min = T[0];
    for (i = 1; i < N; i++){
        if (max < T[i]){
            max = T[i];
        }
        if (min > T[i]){
            min = T[i];
        }
    }

    int *TabCount = (int *)malloc((max - min + 1) * sizeof(int));

    // min bernilai negatif
    if (min < 0){

        // Inisialisasi TabCount
        for(i = min; i <= max; i++){
            TabCount[i - min] = 0;
        }

        // Counting
        for (i = 0; i < N; i++){
            TabCount[T[i] - min]++;
        }

        // Pengisian Kembali Tabel T
        k = 0;
        for (i = min; i <= max; i++){
            while (TabCount[i - min] != 0) {
                T[k] = i;
                k++;
                TabCount[i - min]--;
            }
        }
    }

    // min bernilai 0 atau positif
    else {
        // Inisialisasi TabCount
        for (i = min; i <= max; i++){
            TabCount[i] = 0;
        }

        // Counting
        for (i = 0; i < N; i++){
            TabCount[T[i]]++;
        }

        // Pengisian Kembali Tabel T
        k = 0;
        for (i = 0; i <= max; i++){
            while (TabCount[i] != 0){
                T[k] = i;
                k++;
                TabCount[i]--;
            }
        }
    }

for (i = 0; i < N; i++){
    printf("%d ", T[i]);
}


}

int main(){
    /* Kamus lokal */
    int T[8] = {2, 5, 3, 0, 2, 3, 0, 3};
    int N = 8;

    /* Algoritma */
    CountSort(T, N);
}