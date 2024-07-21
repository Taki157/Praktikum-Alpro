//Nama File         : Sequential Search dengan Sentinel
//Deskripsi         : Algoritma Sequential Search dengan Sentinel
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Selasa, 14 Mei 2024
#include <stdio.h>
#include <stdbool.h>
struct Kode {
    int kode;
    char desk[50];
}
struct Kode TABCODE[101] = {{1,"Taki"}, {2,"Biu"}};

void TabelKode(Kode TABCODE[101],Kode A){
    // Kamus Lokal
    int i = 0;
    int NELMT = 2;
    bool found = false;
    // Algoritma
    while ((TABCODE[i].kode != 0) && (!found)){
        if (TABCODE[i].kode == TABCODE[n+1].kode){
            found = true;
        } else {
            i++;
        }
    }

    if (!found){
        TABCODE[i].kode = TABCODE[n+1].kode;
        TABCODE[i].desk = TABCODE[n+1].desk;
    }

    int j = 1;
    while (TABCODE[j].kode != 0){
        j++;
    }

    for (i = 0; i < j; i++){
        printf("%d %s ", TABCODE[i].kode, TABCODE[i].desk);
    }
}

int main(){
    /*Kamus Lokal*/
    
    
    // Algoritma
    TabelKode(TABCODE,);

    return 0;
}