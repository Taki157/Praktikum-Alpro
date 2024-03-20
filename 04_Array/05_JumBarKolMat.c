//Nama File         : JumBarKolMat
//Deskripsi         : Menjumlah semua baris dan kolom
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 14 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int baris,kolom,i,j,total;

    /*Algoritma*/
    printf("=====Menjumlah Semua Baris dan Kolom T=====\n");
    printf("Masukkan panjang baris tabel T : ");
    scanf("%d",&baris);
    printf("Masukkan panjang kolom tabel T : ");
    scanf("%d",&kolom);
    printf("Masukkan elemen tabel T :\n");

    int T[baris][kolom];
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            scanf("%d", &T[i][j]);
        }
    }
    
    for (i = 0; i < baris; i++){
        total = 0;
        for (j = 0; j < kolom; j++){
            total += T[i][j];
        }
        printf("baris - %d : %d\n", i+1, total);
    }
    for (j = 0; j < kolom; j++){
        total = 0;
        for (i = 0; i < baris; i++){
            total += T[i][j];
        }
        printf("kolom - %d : %d\n", j+1, total);
    }

    return 0;
}
