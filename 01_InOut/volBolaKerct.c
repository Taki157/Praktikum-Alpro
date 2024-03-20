//Nama File         : volBolaKerct
//Deskripsi         : Menghitung Volume Bola dan Kerucut
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 21 Februari 2024

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Kamus Lokal*/
    float r, Vb, Vk, PHI;
    PHI = 3.1415;

    /*Algoritma*/
    printf("=====Menghitung Volume Bola Dan Kerucut =====");
    printf("\nMasukkan nilai r : ");
    scanf("%f",&r);

    Vb = (4/3)*(PHI*(r*r*r));
    Vk = 0.5*Vb;
    printf("Volume Bola = %f",Vb);
    printf("\nVolume Kerucut = %f",Vk);
    return 0;
}

