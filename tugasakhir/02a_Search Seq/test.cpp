#include <cstdio>

void tabUrut(int arr[], int n);
void print(int arr[101], int n);

int main(){
    int n, X, IX, arr[101];
    // Tidak perlu ditulis
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    tabUrut(arr, n);
    // Tidak Perlu ditulis //
    scanf("%d", &X);
    arr[n + 1] = X;
    int i = 1;
    while (i < n && arr[i] > X) {
        i++;
    }
    if (arr[i] == X) IX = i;
    else IX = 0; // IX = 0 jika tidak ada
    printf("%d", IX);
}


// Tidak perlu ditulis
void tabUrut(int arr[], int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+ 1; j <= n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//Tidak perlu ditulis
void print(int arr[101], int n){
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
}