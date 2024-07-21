#include <iostream>
using namespace std;

int arr[1001] = {1,33,2,4,1,10,33,4,6,7};
int n = 10;

void maksimum();
void jumlah_max();
void minimum();
void jumlah_min();
void max_min();

int main(){
    int oper;
    cin >> oper;
    while(oper != 10){
        if (oper == 1) maksimum();
        else if (oper == 2) jumlah_max();
        else if (oper == 3) minimum();
        else if (oper == 4) jumlah_min();
        else if (oper == 5) max_min();
        cin >> oper;
    }
}

void maksimum(){
    int index, max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= arr[i]){
            max = arr[i];
            index = i;
        }
    }
    cout << max << " " << index << endl;
}

void jumlah_max(){
    int jum[1001] = {0}, max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= arr[i]){
            max = arr[i];
            jum[max]++;
        }
    }
    cout << max << " " << jum[max] << endl;
}

void minimum(){
    int index, min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min >= arr[i]){
            min = arr[i];
            index = i;
        }
    }
    cout << min << " " << index << endl;
}

void jumlah_min(){
    int jum[1001] = {0}, min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min >= arr[i]){
            min = arr[i];
            jum[min]++;
        }
    }
    cout << min << " " << jum[min] << endl;
}

void max_min(){
    int index, max = arr[0], min = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    cout << max << " " << min << endl;
}