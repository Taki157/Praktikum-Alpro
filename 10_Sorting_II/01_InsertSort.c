//Nama File         : Insertion Sort
//Deskripsi         : Algoritma Insertion Sort
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 30 Mei 2024
#include <stdio.h>

void InsertionSort(int T[], int N){
    // Kamus Lokal
    int i;
    int pass;
    int temp;

    // Algoritma
    for (pass = 1; pass <= N; pass++){
        temp = T[pass];
        i = pass-1;

        while ((temp < T[i]) && (i > 0)){
            T[i+1] = T[i];
            i--;
        }

        if (temp >= T[i]){
            T[i+1] = temp;
        } else {
            T[i+1] = T[i];
            T[i] = temp;
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
    InsertionSort(T, N);

    return 0;
}