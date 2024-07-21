//Nama File         : Insertion Sort
//Deskripsi         : Algoritma Insertion Sort
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 30 Mei 2024
#include <stdio.h>

void Sekuensial(int TABNILAI[101], int N){
    // Kamus Lokal
    int i;
    int total;
    float rata2;
    char tabKonv[101];
    int tabFrek[4];
    float tabFrekRel[4];

    // Algoritma
    // Menghitung total nilai
    total = 0;
    for (i = 0; i < N; i++){
        total += TABNILAI[i];
    }

    // Menghitung nilai rata-rata
    rata2 = total / N;
    
    // Membuat konversi nilai
    for (i = 0; i < N; i++){
        if (TABNILAI[i] >= 80){
            tabKonv[i] = 'A';
        } else if (TABNILAI[i] >= 70){
            tabKonv[i] = 'B';
        } else if (TABNILAI[i] >= 55){
            tabKonv[i] = 'C';
        } else if (TABNILAI[i] >= 40){
            tabKonv[i] = 'D';
        } else if (TABNILAI[i] < 40){
            tabKonv[i] = 'E';
        } 
    }

    // Inisiasi TabFrek dengan elemen 0
    for (i = 0; i < 5; i++){
        tabFrek[i] = 0;
    }

    // Menghitung tiap nilai A, B, sampai E
    for (i = 0; i < N; i++){
        if (tabKonv[i] == 'A'){
            tabFrek[0] += 1;
        } else if (tabKonv[i] == 'B'){
            tabFrek[1] += 1;
        } else if (tabKonv[i] == 'C'){
            tabFrek[2] += 1;
        } else if (tabKonv[i] == 'D'){
            tabFrek[3] += 1;
        } else if (tabKonv[i] == 'E'){
            tabFrek[4] += 1;
        }
    }

    // Menghitung frekuensi relatif A, B, sampai E
    for (i = 0; i <= 4; i++){
        tabFrekRel[i] = tabFrek[i]*100 / N;
    }

    // Output
    printf("Tabel Nilai : ");
    for (i = 0; i < N; i++){
        printf("%d ", TABNILAI[i]);
    }

    printf("\nTabel Konversi : ");
    for (i = 0; i < N; i++){
        printf("%c ", tabKonv[i]);
    }

    printf("\nTabel Frekuensi Akumulatif : ");
    for (i = 0; i <= 4; i++){
        printf("%d ", tabFrek[i]);
    }

    printf("\nTabel Frekuensi Relatif : ");
    for (i = 0; i <= 4; i++){
        printf("%f ", tabFrekRel[i]);
    }

    printf("\nTotal Nilai : %d", total);
    printf("\nRata-rata : %f", rata2);
}

int main(){
    // Kamus Lokal
    int T[5] = {80, 90, 70, 40, 30};
    int N = 5;

    // Algoritma
    Sekuensial(T, N);

    return 0;
}