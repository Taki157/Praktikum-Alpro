#include <iostream>
#include <string>
using namespace std;
int n = 0;
struct users {
    int User_id;
    string name;
    int prioritas;
    string password;
};
struct users user[101];
void enkripsi(string& pass);
void hapus();
void ubah_pass();
void koreksi_nama();
void prioritas();

int main(){
    string pilih = "0";
    while (pilih != "Q"){
        cin >> pilih;
        if (pilih == "1"){
            cout << "Masukan";
            cin >> user[n].User_id >> user[n].name >> user[n].prioritas >> user[n].password;
            enkripsi(user[n].password);
            cout << user[n].password << endl;
            n++;
        }
        else if (pilih == "2"){
            hapus();
        }
        else if (pilih == "3"){
            ubah_pass();
        }
        else if (pilih == "4"){
            koreksi_nama();
        }
        else if (pilih == "5"){
            prioritas();
        }
        for (int i = 0; i < n; i++)
        {
        cout << user[i].User_id << " " << user[i].name << user[i].password << endl;
        }
    }
}

void enkripsi(string& pass){
    for (int i = 0; i < 8; i++)
    {
        if (pass[i] == 'A') pass[i] = 'Z';
        else if (pass[i] == 'B') pass[i] = 'Y';
        else if (pass[i] == 'C') pass[i] = 'X';
        else if (pass[i] == 'D') pass[i] = 'W';
        else if (pass[i] == 'E') pass[i] = 'V';
        else if (pass[i] == 'F') pass[i] = 'U';
        else if (pass[i] == 'G') pass[i] = 'T';
        else if (pass[i] == '1') pass[i] = '%';
        else if (pass[i] == '2') pass[i] = '#';
        else if (pass[i] == '@') pass[i] = '$';
        else if (pass[i] == '#') pass[i] = '@';
    }
}

void hapus(){
    int x;
    cout << "Masukan nomor kereta yang ingin dihapus: ";
    cin >> x;
    int i = 0, found = 0;
    while (i < n && !found){
        if (user[i].User_id == x) {
            found = 1;
        }
        else i++; 
    }
    if (found)
    {
        for (int j = i; j < n; j++){
            user[j] = user[j+1];
        }
        n--;
    }
}

void ubah_pass(){
    int x;
    string pass;
    cin >> x;
    int i = 0, found = 0;
    while (i < n && !found){
        if (user[i].User_id == x) {
            found = 1;
        }
        else i++; 
    }
    if (found)
    {
        cin >> pass;
        enkripsi(pass);
        if (user[i].password == pass){
            cin >> pass;
            enkripsi(pass);
            if (user[i].password == pass){
                cin >> user[i].password;
                enkripsi(user[i].password);
            }
            else{
                cout << "Masukan salah: ";
            }
        }
        else cout << "Masukan salah: ";
    }
}

void koreksi_nama(){
    int x;
    string nama;
    cin >> x;
    int i = 0, found = 0;
    while (i < n && !found){
        if (user[i].User_id == x) {
            found = 1;
        }
        else i++; 
    }
    if (found){
        cin >> nama;
        (nama == user[i].name) ? cout << "benar" : cout << "Salah";
    }
}

void prioritas(){
    int x;
    cin >> x;
    int i = 0, found = 0;
    while (i < n && !found){
        if (user[i].User_id == x) {
            found = 1;
        }
        else i++; 
    }
    if (found){
        cin >> user[i].prioritas;
        (1 == user[i].prioritas) ? cout << "Aktif" : cout << "Nonaktif";
    }

}