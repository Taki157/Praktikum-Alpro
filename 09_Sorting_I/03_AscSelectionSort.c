//Nama File         : Seleection Sort (Ascending)
//Deskripsi         : Algoritma Selection Sort (Ascending)
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Sabtu, 25 Mei 2024

#include <stdio.h>

void AscSelectionSort(int T[], int N){
    /* Kamus lokal */
    int i, j;
    int temp;
    int maxIdx;

    /* Algoritma */
    for (i = 0; i < N; i++){
        maxIdx = i;
        for (j = i; j < N; j++){
            if (T[maxIdx] < T[j]){
                maxIdx = j;
            }
        }
        temp = T[i];
        T[i] = T[maxIdx];
        T[maxIdx] = temp;
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
    AscSelectionSort(T, N);
}