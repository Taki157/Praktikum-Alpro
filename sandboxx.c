// Nama File         : Manajemen Perpustakaan
// Deskripsi         : Algoritma Sequential Search Versi 1 tanpa Boolean
// Pembuat           : Syafiq Abiyyu Taqi
// Tanggal Pembuatan : Selasa, 7 Mei 2024

#include <stdio.h>

// Definisi struct Kode
struct Kode {
    int kode;
    char deskripsi[50];
};

// Inisialisasi array TabCODE
struct Kode TabCODE[101] = {{1, "Taki"}, {2, "Biu"}};

int main(){
    /* Kamus Lokal */

    /* Algoritma */
    // Access Test
    printf("%d %s\n", TabCODE[2].kode, TabCODE[2].deskripsi);

    return 0;
}
