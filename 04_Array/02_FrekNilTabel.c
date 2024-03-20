//Nama File         : FrekNilTabel
//Deskripsi         : Menampilkan frekuensi suatu nilai yang lebih dai satu pada tabel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 14 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int N,i,j,frek;

    /*Algoritma*/
    printf("=====Frekuensi Nilai > 1 Pada Tabel T=====\n");
    printf("Masukkan panjang tabel T : ");
    scanf("%d",&N);
    printf("Masukkan elemen tabel T :\n");

    int T[N];
    for (i = 0; i < N; i++){
        scanf("%d",&T[i]);
    }

    printf("Nilai yang frekuensinya lebih dari satu adalah ");
    
    for (i = 0; i < N; i++){
        frek = 0;
        for(j = 0; j < N; j++){
            if((i == j) && (T[i] == T[j]) && (T[i] != 0)){
                frek += 1;
            }
            else if((T[i] == T[j]) && (T[i] != 0)){
                frek += 1;
                T[j] = 0;
            }
        }
        if (frek > 1){
            printf("%d ",T[i]);
        }
    }

    return 0;
}
