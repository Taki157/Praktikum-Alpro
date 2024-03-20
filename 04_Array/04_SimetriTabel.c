//Nama File         : SimetriTabel
//Deskripsi         : Menentukan tabel T1 dan T2 simetri atau tidak
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 14 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int N1,N2,i,cekSimetri;

    /*Algoritma*/
    printf("=====Cek Simetri T1 dan T2=====\n");
    printf("Masukkan panjang tabel T1 : ");
    scanf("%d",&N1);
    printf("Masukkan elemen tabel T1 :\n");

    int T1[N1];
    for (i = 0; i < N1; i++){
        scanf("%d",&T1[i]);
    }

    printf("Masukkan panjang tabel T2 : ");
    scanf("%d",&N2);
    printf("Masukkan elemen tabel T2 :\n");

    int T2[N2];
    for (i = 0; i < N2; i++){
        scanf("%d",&T2[i]);
    }
    
    cekSimetri = 1;
    if (N1 == N2){
        for(i = 0; i < N1; i++){
            if(T1[i] != T2[i]){
                cekSimetri = 0;
            }
        }
        if (cekSimetri == 1){
            printf("T1 dan T2 simetri");
        }
        else{
            printf("T1 dan T2 tidak simetri");
        }
    }
    else{
        printf("T1 dan T2 tidak simetri");
    }
    return 0;
}
