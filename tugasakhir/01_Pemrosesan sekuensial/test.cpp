// Filbert Ganteng

#include <cstdio>

int main(){
    int n, median = 0, TabNilai[1001];
    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
    char TabChar[1001];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Masukan nilai tabel: "); // Tidak Ditulis
        scanf("%d", &TabNilai[i]); // Tidak ditulis
        median += TabNilai[i];
        if (TabNilai[i] >= 80){
            TabChar[i] = 'A';
            countA += 1;
        }
        else if (TabNilai[i] >= 70){
            TabChar[i]  = 'B';
            countB += 1;
        }
        else if (TabNilai[i] >= 55){
            TabChar[i] = 'C';
            countC += 1;
        }
        else if (TabNilai[i] >= 40){
            TabChar[i] = 'D';
            countD += 1;
        }
        else{
            TabChar[i] = 'E'; 
            countE += 1;
        }
    }  
    float med = (float)median/n;
    printf("\nmedian dari nilai tabel: %.2f", med);
    for (int i = 0; i < n; i++)
    {
        printf("%c ", TabChar[i]);
    }
    printf("\n%.2f %.2f %.2f %.2f %.2f", (float)countA/n, (float)countB/n, (float)countC/n, (float)countD/n, (float)countE/n );
    
    
}