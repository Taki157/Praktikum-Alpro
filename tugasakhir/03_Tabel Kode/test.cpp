#include <iostream>
using namespace std;

int i;
struct body
{
    int Kode; // Kode tidak boleh berniali 0
    string Desk; // Velocity
};

struct body Tab[101] = {{1,"Budi Susanto"}, {10,"Eko Rudi"}};

int main()
{
    int n = 10;
    int found = 0;
    cin >> Tab[n+1].Kode;
    cin >> Tab[n+1].Desk;
    i = 0;
    while (Tab[i].Kode != 0 && !found){
        if (Tab[i].Kode == Tab[n+1].Kode) found = 1;
        else i++;
    }
    if (!found)
    {
        Tab[i].Kode = Tab[n+1].Kode;
        Tab[i].Desk = Tab[n+1].Desk;
    }
    int size = 1;
    while (Tab[size].Kode != 0)
    {
        size++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << Tab[i].Kode << " " << Tab[i].Desk << endl;
    }
    
    
    return 0;
}