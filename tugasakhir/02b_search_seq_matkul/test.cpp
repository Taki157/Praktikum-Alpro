 #include <cstdio>

void tabUrut(int arr[], int length);
void print(int arr[101], int length);
void scan(int arr[],int length);
int i, j;

int main(){
    int length, X, IX, arr[101]
    int found = 0; //rubah ke tipe boolean
    scanf("%d", &length);
    // Tabel tidak perlu ditulis
    scan(arr, length);
    tabUrut(arr, length);
    // end Tabel
    scanf("%d", &X);
    arr[length + 1] = X;
    length++;
    // Tidak perlu ditulis
    printf("Tabel Awal: ");
    print(arr, length);
    printf("\n");
    // -----------
    i = 1;
    while (i < length && found == 0 && arr[i] <= X)
    {
        if (arr[i] == X) found = 1
        else i++;
    }
    if (found == 1) length--;
    else
    {
        while (i <= length)
        {
            int temp = arr[i];
            arr[i] = X;
            X = temp;
            i++;
        }
    }
    printf("Tabel akhir: ");
    for (int i = 1; i <= length; i++)
    {
        printf("%d", arr[i]);
    }
    
}




//subprogram Tidak perlu ditulis
void scan(int arr[],int length){
    for (i = 1; i <= length; i++) {
        scanf("%d", &arr[i]);
    }
}

void tabUrut(int arr[], int length){
    for (i = 1; i <= length; i++)
    {
        for (j = i+ 1; j <= length; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(int arr[101], int length){
    for (i = 1; i <= length; i++) {
        printf("%d ", arr[i]);
    }
}