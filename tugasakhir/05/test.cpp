#include <iostream>
using namespace std;

int Nseat = 10, gol = 10;

struct pesawat {
    int no;
    char kode[11];
    int terisi[11];
};

struct pesawat kursi_pesawat[1001] = {
    {1,{'A','B','C','D','E','F','G','H','I','J'}, {0,0,1,0,1,0,1,1,0,0}},
    {2,{'A','B','C','D','E','F','G','H','I','J'}, {0,0,0,0,1,0,1,1,1,1}},
    {3,{'A','B','C','D','E','F','G','H','I','J'}, {0,0,1,1,1,1,1,1,0,0}},
    {4,{'A','B','C','D','E','F','G','H','I','J'}, {0,0,1,1,0,1,0,0,0,0}},
    {5,{'A','B','C','D','E','F','G','H','I','J'}, {0,0,1,0,1,1,0,1,1,1}},
    {6,{'A','B','C','D','E','F','G','H','I','J'}, {0,0,0,1,1,0,1,0,0,0}},
    {7,{'A','B','C','D','E','F','G','H','I','J'}, {1,0,0,1,1,0,1,0,0,1}},
    {8,{'A','B','C','D','E','F','G','H','I','J'}, {0,0,0,0,0,1,1,0,1,0}},
    {9,{'A','B','C','D','E','F','G','H','I','J'}, {1,0,0,1,0,1,1,1,0,1}},
    {10,{'A','B','C','D','E','F','G','H','I','J'}, {1,0,0,1,0,0,1,0,1,0}}
    };


int main(){
    int oper, n;
    cin >> oper;
    if (oper == 1)
    {
        for (int i = 0; i < Nseat; i++)
        {
            for (int j = 0; j < gol - 4; j++)
            {
                if (kursi_pesawat[i].terisi[j] == 0) cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j] << " ";
            }
            cout << endl;
        }
    }
    if (oper == 2)
    {
        cin >> n;
        int i = 0;
        while (i < Nseat & n > 0)
        {
            int j = 0;
            while (j < gol && n > 0)
            {
                if (kursi_pesawat[i].terisi[j] == 0){
                    cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j] << " ";
                    n--;
                }
                j++;
            }
            cout << endl;
            i++;
        }
    }
    if (oper == 3){
        cin >> n;
        for (int i = 0; i < Nseat; i++)
        {
            if (n == 2)
            {
                int j = 0;
                while (j < gol){
                    if (kursi_pesawat[i].terisi[j] == 0 && kursi_pesawat[i].terisi[j+1] == 0){ 
                        cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j] << " ";
                        cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j+1] << endl;}
                    j += 2;
                }
                while (j < gol-1){
                    if (kursi_pesawat[i].terisi[j] == 0 && kursi_pesawat[i].terisi[j+1] == 0){ 
                        cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j] << " ";
                        cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j+1] << endl;}
                    j++;
                }
            }
            else if (n == 3){
                int j = 6;
                while (j < gol-2){
                    if (kursi_pesawat[i].terisi[j] == 0 && kursi_pesawat[i].terisi[j+1] == 0 && kursi_pesawat[i].terisi[j+2] == 0){
                        cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j] << " ";
                        cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j+1] << " ";
                        cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j+2] << endl;
                    }
                    j++;
                }
            }
            else if (n == 4){
                int j = 6;
                if (kursi_pesawat[i].terisi[j] == 0 && kursi_pesawat[i].terisi[j+1] == 0 && kursi_pesawat[i].terisi[j+2] == 0 && kursi_pesawat[i].terisi[j+3] == 0){
                    cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j] << " ";
                    cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j+1] << " ";
                    cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j+2] << " ";
                    cout << kursi_pesawat[i].no << kursi_pesawat[i].kode[j+3] << endl;
                }
            }
        }
    }
}