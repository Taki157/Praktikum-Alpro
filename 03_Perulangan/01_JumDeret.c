//Nama File         : JumDeret
//Deskripsi         : Menghitung jumlah deret bilangan n integer
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 07 Maret 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int n,i,hasil;;

    /*Algoritma*/
    printf("=====Menghitung Jumlah Deret n Integer=====\n");
    printf("Mau sampe bilangan berapa nich?  ");
    scanf("%d",&n);

    hasil = 0;
    for (i = 1; i <= n; i++){
        hasil += i;
    }

    printf("%d",hasil);
    return 0;
}
