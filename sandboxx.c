#include <stdio.h>
#include <stdlib.h>

// Nama File : JumBarKolMat.c 
// Deskripsi : Menghitung dan menampilkan oprasi penjumlahan baris ke baris dan kolom ke kolom dll.
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main() {
    //Kamus
    int total, i, j, c, r;
    int **T;



    //Algoritma

    printf("Masukan Nilai c: ");
    scanf("%d", &r);

    printf("Masukan Nilai r: ");
    scanf("%d", &c);

    T = (int**)malloc(r*sizeof(int*));

    for (i = 0; i < r; i++) {
        T[i] = (int*)malloc(c*sizeof(int));
    }


    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    for (i = 0;i < r; i++){
            total = 0;
        for (j = 0; j < c; j++){
            total += T[i][j];
        }
            printf("Row - %d : %d\n",i,total);
        }

        for (i = 0; i < r; i++){
            total = 0;
            for (j = 0;j < c; j++){
                total += T[j][i];
            }
            printf("Column - %d : %d\n",i,total);
        }

    free(T);

    return 0;
}