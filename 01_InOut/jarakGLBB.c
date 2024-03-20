//Nama File         : jarakGLBB
//Deskripsi         : Menghitung GLBB
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 21 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    int v0, t, a;
    float S;

    /*Algoritma*/
    printf("==========Menghitung Jarak GLBB==========\n\n");
    printf("Masukkan kecepatan awal (v0): \n");
    scanf("%d",v0);
    printf("Masukkan waktu (t): \n");
    scanf("%d",t);
    printf("Masukkan percepatan (a): \n");
    scanf("%d",a);

    S = v0 * t + 0.5 * (a*t*t);

    printf("Jarak GLBB = %f",S);
    return 0;
}
