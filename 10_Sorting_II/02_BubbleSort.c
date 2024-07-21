//Nama File         : Bubble Sort
//Deskripsi         : Algoritma Bubble Sort
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 30 Mei 2024
#include <stdio.h>

void BubbleSort(int T[], int N){
    // Kamus Lokal
    int i, k;
    int pass;
    int temp;

    // Algoritma
    for (pass = 0; pass < N-1; pass++){
        for (k = N-1; k >= pass+1; k--){
            if (T[k] < T[k-1]){
                temp = T[k];
                T[k] = T[k-1];
                T[k-1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

int main(){
    // Kamus Lokal
    int T[5] = {5, 2, 1, 0, 10};
    int N = 5;

    // Algoritma
    // Sebelum Sorting
    printf("Sebelum Sorting : ");
    for (int i = 0; i < N; i++){
        printf("%d ", T[i]);
    }

    // Sesudah Sorting
    printf("\nSesudah Sorting : ");
    BubbleSort(T, N);

    return 0;
}