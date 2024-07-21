#include <iostream>
#include <string>
using namespace std;

int n, jam, pendapatan, jumlah_mobil = 0;
void inisialisasi();
void mobil_in();
void mobil_out();
void terminasi();

struct parkir
{
    int jam_mulai;
    string tempat_parkir;
};
struct parkir mobil[301];

int main(){
    int oper;
    inisialisasi();
    cin >> oper;
    while (oper != 3){
        if (oper == 1) mobil_in();
        else if (oper == 2) mobil_out();
        jam += 60*40;
        cout << "Jumlah mobil yang ada: " << jumlah_mobil << endl;
        cin >> oper;
    }
    terminasi();
}

void inisialisasi(){
    n = 300;
    pendapatan = 0;
    cout << "Mulai Pada jam : ";
    cin >> jam;
    jam = jam*3600;
}

void mobil_in(){
    int i = 0;
    while (mobil[i].jam_mulai != 0 && i < n){
        i++;
    }
    mobil[i].jam_mulai = jam;
    mobil[i].tempat_parkir = "parkir";
    jumlah_mobil++;
}

void mobil_out(){
    int jam_parkir, slip, x;
    cout << "Mobil yang keluar: ";
    cin >> x;
    jam_parkir = abs((jam - mobil[x-1].jam_mulai))/3600;
    (jam_parkir - 1 >= 0)? slip = 300 + 200*(jam_parkir - 1) : slip = 300;
    cout << "biaya parkir: " slip;
    pendapatan += slip;
    mobil[x-1].jam_mulai = 0;
    jumlah_mobil--;
} 

void terminasi(){
    cout << pendapatan;
}