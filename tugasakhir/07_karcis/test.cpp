#include <iostream>

using namespace std;

int n = 5, m = 5; //n = jumlah gerbong ex, m = jumlah gerbong bisnis
int NEX = 5, MBI = 5; //NEX = jumlah kursi ex, MBI = jumlah kursi bisnis

struct kereta_api
{
    int no[10];
    char kode[10];
    int terisi[6][5];
};

struct kereta_api INFO_GERBONG_EX[51] = {
    {{1,2,3,4,5},{'A','B','C','D'},{{1,0,1,1},{0,1,1,1},{0,0,1,1},{1,0,1,1},{1,1,0,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{0,0,1,0},{1,1,1,1},{1,1,1,0},{0,1,1,1},{0,1,0,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{1,0,0,1},{1,1,1,1},{0,1,1,0},{1,1,0,1},{1,1,0,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{0,1,1,0},{1,0,0,0},{1,1,0,1},{0,1,1,1},{0,0,1,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{0,1,1,0},{1,0,1,0},{1,0,0,0},{1,0,1,1},{0,0,0,0}}}
};
struct kereta_api INFO_GERBONG_BISNIS[51] = {
    {{1,2,3,4,5},{'A','B','C','D'},{{1,0,1,1},{0,1,1,1},{0,0,1,1},{1,0,1,1},{1,1,0,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{0,0,1,0},{1,1,1,1},{1,1,1,0},{0,1,1,1},{0,1,0,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{1,0,0,1},{1,1,1,1},{0,1,1,0},{1,1,0,1},{1,1,0,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{0,1,1,0},{1,0,0,0},{1,1,0,1},{0,1,1,1},{0,0,1,1}}},
    {{1,2,3,4,5},{'A','B','C','D'},{{0,1,1,0},{1,0,1,0},{1,0,0,0},{1,0,1,1},{0,0,0,0}}}
};

void cari_kursi(kereta_api gerbong[51], int x, int panjang_gerbong, int jumlah_kursi);

int main(){
    int x;
    cout << "beli karcis kereta(max 4): ";
    cin >> x;
    if (x <= 4){
        int gerbong;
        cout << "Pilih gerbong yang ingin dipilih: ";
        cout << "1 = Eksekutif 2 = Bisnis\n";
        cin >> gerbong;
        if (gerbong == 1) cari_kursi(INFO_GERBONG_EX, x, n, NEX);
    }
}

void cari_kursi(kereta_api gerbong[51], int x, int panjang_gerbong, int jumlah_kursi){
    if (x == 1){
        for (int i = 0; i < panjang_gerbong; i++)
        {
            for (int j = 0; j < jumlah_kursi; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    if (gerbong[i].terisi[j][k] == 0) cout << gerbong[i].no[j] << gerbong[i].kode[k] << "";
                }
            }
        }
    }
    if (x == 2){
        for (int i = 0; i < panjang_gerbong; i++)
        {
            for (int j = 0; j < jumlah_kursi; j++)
            {
                for (int k = 0; k < 4; k += 2)
                {
                    if (gerbong[i].terisi[j][k] == 0 && gerbong[i].terisi[j][k+1] == 0){
                        cout << gerbong[i].no[j] << gerbong[i].kode[k] << "";
                        cout << gerbong[i].no[j+1] << gerbong[i].kode[k+1] << "";
                    }
                }
            }
        }
    }
    if (x == 3){
        for (int i = 0; i < panjang_gerbong; i++)
        {
            for (int j = 0; j < jumlah_kursi; j++)
            {
                for (int k = 0; k < 4; k += 3)
                {
                    if (gerbong[i].terisi[j][k] == 0 && gerbong[i].terisi[j][k+1] == 0 && gerbong[i].terisi[j][k+2] == 0){
                        cout << gerbong[i].no[j] << gerbong[i].kode[k] << "";
                        cout << gerbong[i].no[j+1] << gerbong[i].kode[k+1] << "";
                        cout << gerbong[i].no[j+1] << gerbong[i].kode[k+2] << "";
                    }
                }
            }
        }
    }
    if (x == 4){
        for (int i = 0; i < panjang_gerbong; i++)
        {
            for (int j = 0; j < jumlah_kursi; j++)
            {
                if (gerbong[i].terisi[j][0] == 0 && gerbong[i].terisi[j][1] == 0 && gerbong[i].terisi[j][2] == 0){
                    cout << gerbong[i].no[j] << gerbong[i].kode[0] << "";
                    cout << gerbong[i].no[j] << gerbong[i].kode[1] << "";
                    cout << gerbong[i].no[j] << gerbong[i].kode[2] << "";
                    cout << gerbong[i].no[j] << gerbong[i].kode[3] << "";
                }
            }
        }
    }
}