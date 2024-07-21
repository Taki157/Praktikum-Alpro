#include <iostream>
#include <cstring>

using namespace std;

int n = 20;

void pilihan_1a(string x);
void pilihan_2a(int x);
void pilihan_3a(string x, string y);
void pilihan_4a(string x);
void pilihan_5a(string y, string x);
void pilihan_6a(string x, string y);
void pilihan_7a(string x, string y);
void pilihan_8a(string x, string y);
void pilihan_9a(string y, string x);
void pilihan_10a(string x, string y);


struct Kereta_Api
{
    int no;
    string asal;
    string tujuan;
    int jamBer;
    int JamKed;
    int tarif;
}; 

struct Kereta_Api INFO_KA[10001] = {{8266, "Ciamepel", "Durian", 4, 6, 136630},{1194, "Konoha", "Durian", 2, 21, 2207},{8838, "Spade", "Cibubur", 22, 3, 104045},{4607, "Citempe", "Kudus", 23, 24, 153278},{321, "Pati", "Semarang", 6, 16, 104185},{2852, "Mars", "Durian", 16, 11, 143810},{6557, "Jakarta", "Jakarta", 13, 23, 35765},{9374, "Isekai", "Citempe", 6, 2, 167782},{5953, "Isekai", "Citempe", 20, 20, 107127},{5933, "Spade", "Depok", 8, 17, 65904},{965, "Jakarta", "Karawang", 15, 23, 137816},{417, "Durian", "Citempe", 9, 20, 127688},{8709, "Konoha", "Palembang", 8, 2, 98175},{198, "Konoha", "Karawang", 7, 13, 21446},{4022, "Konoha", "Cikampek", 6, 12, 35901},{8080, "Cibubur", "Semarang", 14, 7, 55597},{922, "Sunagakure", "Konoha", 3, 7, 49044},{4604, "Konoha", "Mars", 13, 14, 102807},{6893, "Semarang", "Iwagakure", 7, 19, 9454},{8393, "Depok", "Semarang", 21, 23, 50218}};

int main(){
    string ope = "1" ;
    string asal, tujuan;
    int jamBer;
    while (ope != "Q")
    {
        cin >> ope;
        if (ope == "1"){
            cout << "Masukan Tujuan Kereta Api: ";
            cin >> tujuan;
            pilihan_1a(tujuan);
        }
        else if (ope == "2"){
            cout << "Masukan keberangkatan kereta api sebelum jam: ";
            cin >> jamBer;
            pilihan_2a(jamBer);
        }
        else if (ope == "3"){
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            cout << "Masukan kota tujuan kereta: ";
            cin >> tujuan;
            pilihan_3a(asal, tujuan);
        }
        else if (ope == "4"){
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            pilihan_4a(asal);
        }
        
        else if (ope == "5"){
            cout << "Masukan kota tujuan kereta: ";
            cin >> tujuan;
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            pilihan_5a(tujuan, asal);
        }
        else if (ope == "6"){
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            cout << "Masukan kota tujuan kereta: ";
            cin >> tujuan;
            pilihan_6a(asal, tujuan);
        }
        else if (ope == "7"){
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            cout << "Masukan kota tujuan kereta: ";
            cin >> tujuan;
            pilihan_7a(asal, tujuan);
        }
        else if (ope == "8"){
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            cout << "Masukan kota tujuan kereta: ";
            cin >> tujuan;
            pilihan_8a(asal, tujuan);
        }
        else if (ope == "9"){
            cout << "Masukan kota tujuan kereta: ";
            cin >> tujuan;
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            pilihan_9a(tujuan, asal);
        }
        else if (ope == "10"){
            cout << "Masukan kota asal kereta: ";
            cin >> asal;
            cout << "Masukan kota tujuan kereta: ";
            cin >> tujuan;
            pilihan_10a(asal, tujuan);
        }
        else if (ope == "Q") cout << "Program berhenti ";
        else cout << "Masukan input yang benar";
        cout << endl;
    }
    
}

void pilihan_1a(string x){
    int ada = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == INFO_KA[i].tujuan){
            cout << INFO_KA[i].no << ". " << INFO_KA[i].tujuan << " dengan tarif " << INFO_KA[i].tarif;
            ada = 1;
        }
    }
    if (ada == 0) cout << "Tidak ada";
}

void pilihan_2a(int x){
    int ada = 0;
    for (int i = 0; i < n; i++)
    {
        if (x >  INFO_KA[i].jamBer){
            cout << INFO_KA[i].no << endl;
            ada = 1;
        }
    }
    if (ada == 0) cout << "Tidak ada";
}

void pilihan_3a(string x, string y){
    int ada = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == INFO_KA[i].asal && y == (INFO_KA[i].tujuan)){
            cout << INFO_KA[i].no << " berangkat pada jam " << INFO_KA[i].jamBer;
            ada = 1;
        }
    }
    if (ada == 0) cout << "Tidak ada";
}

void pilihan_4a(string x){
    int i = 0, found = 0;
    while (i < n && found == 0)
    {
        if (INFO_KA[i].jamBer < 9 && x == INFO_KA[i].asal) found = 1;
        else i++;
    }
    (found == 1) ? cout << INFO_KA[i].no << endl : cout << "Tidak ada";
}

void pilihan_5a(string y, string x){
    int IX = -1;
    for (int i = 0; i < n; i++)
    {
        if (y == INFO_KA[i].tujuan && x == INFO_KA[i].asal) IX = i;
    } 
    (IX != -1) ? cout << INFO_KA[IX].no << endl : cout << "Tidak ada";
}

void pilihan_6a(string x, string y){
    int termahal, termurah;
    int i = 0;
    while (i < n && y != INFO_KA[i].tujuan && x != INFO_KA[i].asal)
    {
        i++;
    }
    termahal = i;
    termurah = i;
    while (i < n)
    {
        if (y == INFO_KA[i].tujuan && x == INFO_KA[i].asal)
        {
            if (INFO_KA[termahal].tarif < INFO_KA[i].tarif) termahal = i;
            if (INFO_KA[termurah].tarif > INFO_KA[i].tarif) termurah = i;
        }
        i++;
    }
    if (termahal != n){
        cout << "Termahal: " << INFO_KA[termahal].no << endl;
        cout << "Termurah: " << INFO_KA[termurah].no;
    }
    else cout << "Tidak ada";
    
}

void pilihan_7a(string x, string y){
    int tercepat;
    int i = 0;
    while (i < n && y != INFO_KA[i].tujuan && x != INFO_KA[i].asal)
    {
        i++;
    }
    tercepat = i;
    while (i < n)
    {
        if (y == INFO_KA[i].tujuan && x == INFO_KA[i].asal)
        {
            if (abs(INFO_KA[tercepat].JamKed - INFO_KA[tercepat].jamBer) > abs(INFO_KA[i].JamKed - INFO_KA[i].jamBer)) tercepat = i;
        }
        i++;
    }
    (tercepat == n) ? cout << INFO_KA [tercepat].no : cout << "Tidak ada";  
}

void pilihan_8a(string x, string y){
    int ada = 0;
    for (int i = 0; i < n; i++)
    {
        if ((y == INFO_KA[i].tujuan) && (x == INFO_KA[i].asal)){
            if (INFO_KA[i].jamBer > 7 && INFO_KA[i].jamBer < 12){
                cout << INFO_KA[i].no;
                ada = 1;
            }
        }
    }
    if (ada == 0) cout << "Tidak ada";
}

void pilihan_9a(string y, string x){
    int ada = 0;
    for (int i = 0; i < n; i++)
    {
        if (y == INFO_KA[i].tujuan && x == INFO_KA[i].asal){
            if (INFO_KA[i].JamKed < 18){
                cout << INFO_KA[i].no;
                ada = 1;
            }
        };
    }
    if (ada == 0) cout << "Tidak ada"; 
}

void pilihan_10a(string x, string y){
    int ada = 0;
    for (int i = 0; i < n; i++)
    {
        if (INFO_KA[i].asal == x){
            if (INFO_KA[i].tujuan == y){
                cout << INFO_KA[i].no;
                ada = 1;
            }
            else
            {
                for (int  j = 0; j < n; j++)
                {
                    if (INFO_KA[j].tujuan == y && INFO_KA[i].tujuan == INFO_KA[i].asal) {
                        cout << INFO_KA[i].no;
                        ada = 1;
                    };
                }   
            }
        }
    }
    if (ada == 0) cout << "Tidak ada";
}