//Nama File         : Seleection Sort
//Deskripsi         : Algoritma Selection Sort
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Sabtu, 25 Mei 2024

#include <stdio.h>

void DescSelectionSort(int T[], int N){
    /* Kamus lokal */
    int i, j;
    int temp;
    int minIdx;

    /* Algoritma */
    for (i = 0; i < N; i++){
        minIdx = i;
        for (j = i; j < N; j++){
            if (T[minIdx] > T[j]){
                minIdx = j;
            }
        }
        temp = T[i];
        T[i] = T[minIdx];
        T[minIdx] = temp;
    }

    for (i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

int main(){
    /* Kamus lokal */
    int T[5] = {11, 12, 25, 22, 64};
    int N = 5;

    /* Algoritma */
    DescSelectionSort(T, N);
}