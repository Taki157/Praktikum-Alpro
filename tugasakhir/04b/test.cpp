#include <iostream>

using namespace std;
int n = 20;
int pass = 0;
struct Kereta_Api
{
    int no;
    string asal;
    string tujuan;
    int jamBer;
    int JamKed;
    int tarif;
}; 

struct Kereta_Api INFO_KA[10001];

void masukan_kereta();
void hapus_Kereta();
void cetak_kereta();
void ubah_jadwal();

int main(){
    string oper = "1";
    while (oper != "Q")
    {
        cin >> oper;
        if (oper == "1"){
            pass = 0;
            string op = "0";
            while (op != "Q"){
                masukan_kereta();
                cout << "Lanjut mengisi kereta ke-" << pass << " tekan Q jika tidak: ";
                cin >> op;
            }
        }
        if (oper == "2") masukan_kereta();
        if (oper == "3") hapus_Kereta();
        if (oper == "4") ubah_jadwal();
        // oper 4 menggunakan fungsi 04a
        if (oper == "10") cetak_kereta(); // Tidak perlu ditulis
    }
}


void masukan_kereta(){
    cout << "Masukan nomor kereta: ";
    cin >> INFO_KA[pass].no;
    cout << "Masukan asal kereta: ";
    cin >> INFO_KA[pass].asal;
    cout << "Masukan tujuan kereta: ";
    cin >> INFO_KA[pass].tujuan;
    cout << "Masukan jam keberangkatan kereta: ";
    cin >> INFO_KA[pass].jamBer;
    cout << "Masukan jam kedatangan kereta: ";
    cin >> INFO_KA[pass].JamKed;
    cout << "Masukan tarif kereta";
    cin >> INFO_KA[pass].tarif;
    pass++;
}

void hapus_Kereta(){
    int x;
    cout << "Masukan nomor kereta yang ingin dihapus: ";
    cin >> x;
    int i = 0, found = 0;
    while (i < pass && !found){
        if (INFO_KA[i].no == x) {
            found = 1;
        }
        else i++; 
    }
    if (found)
    {
        for (int j = i; j < pass; j++){
            INFO_KA[j] = INFO_KA[j+1];
        }
        pass--;
    }
    
}

void ubah_jadwal(){
    int x;
    cout << "Masukan nomor kereta yang ingin diubah: ";
    cin >> x;
    int i = 0, found = 0;
    while (i < pass && !found){
        if (INFO_KA[i].no == x) {
            found = 1;
            }
        else i++;
        }
    if (found){
        cout << "Masukan asal kereta: ";
        cin >> INFO_KA[i].asal;
        cout << "Masukan tujuan kereta: "; 
        cin >> INFO_KA[i].tujuan;
        cout << "Masukan jam keberangkatan kereta: ";
        cin >> INFO_KA[i].jamBer;
        cout << "Masukan jam kedatangan kereta: ";
        cin >> INFO_KA[i].JamKed;
    }        
}

// Tidak perlu ditulis
void cetak_kereta(){
    for (int i = 0; i < pass; i++)
    {
        cout << "Kereta no: " << INFO_KA[i].no << " asal dari " << INFO_KA[i].asal << " tujuan ke " << INFO_KA[i].tujuan << endl;
    }
    
}