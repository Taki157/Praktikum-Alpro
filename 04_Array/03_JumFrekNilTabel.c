//Nama File         : JumFrekNilTabel
//Deskripsi         : Menampilkan jumlah nilai yang frekuensinya lebih dai satu pada tabel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 14 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int N,i,j,frek,sum;

    /*Algoritma*/
    printf("=====Jumlah Nilai Frekuensi > 1 Pada Tabel T=====\n");
    printf("Masukkan panjang tabel T : ");
    scanf("%d",&N);
    printf("Masukkan elemen tabel T :\n");

    int T[N];
    for (i = 0; i < N; i++){
        scanf("%d",&T[i]);
    }

    printf("Jumlah : ");
    sum = 0;
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
            sum += T[i];
        }
    }
    printf("%d",sum);
    return 0;
}
