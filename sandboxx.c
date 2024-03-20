#include <stdio.h>
#include <stdlib.h>

// Nama File : FrekNilTabel.c 
// Deskripsi : Menampilkan angka yang memiliki frekuensi lebih dari 1
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {
    //Kamus
    int N, sum, i, j;
    int *T;


    //Algoritma
    printf("Masukan nilai N: ");
    scanf("%d", &N);


    T = (int*)malloc(N*sizeof(int));

    for ( i = 1; i < N; i ++) {
        scanf("%d", &T[i]);
    }


    for (i = 1; i <= N; i++) {
        sum = 1;
        for (j = 2; j <= N; j++) {
            if ((T[i] != 0) && (T[i] != T[j])) {
                sum += 1;
                T[j] = 0;
            }
        }
        if (sum != 1) {
            printf("%d ", T[i]);
        }
    }

    return 0;
}