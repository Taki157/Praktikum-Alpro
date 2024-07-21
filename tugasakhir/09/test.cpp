#include <iostream>

using namespace std;
int n = 5;
struct peloncat{
    int no;
    int jum_loncatan;
    int skor;
};
struct peloncat peserta[10] = {{},{1,4,0},{2,4,0},{3,4,0},{4,4,0},{5,4,0}};
void sorting(peloncat *x[10]);

int main(){
    int orang;
    while (1)
    {
        cout << "Orang mau loncat";
        cin >> orang;
        if (peserta[orang].jum_loncatan > 0){
            int x;
            cin >> x;
            if (peserta[orang].skor < x)  peserta[orang].skor = x;
            peserta[orang].jum_loncatan--;
        }
        sorting(&peserta);
        for (int i = 1; i <= n; i++)
        {
            cout << peserta[i].no << " Memiliki skor: " << peserta[i].skor << endl;
        }
        
    }
    
}

void sorting(peloncat *x[10]){
    int pass;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if (*x[i]->skor < *x[j]->skor) pass = j;
        }
        struct temp = *x[pass];
        *x[pass] = *x[i];
        *x[i] = temp;
    }
    
}