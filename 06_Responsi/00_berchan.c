#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int n,i;
    int sum;

    /*Algoritma*/
    printf("=====Jumlah Bilangan Ganjil n=====\n");
    printf("Masukkan n :  ");
    scanf("%d",&n);

    printf("Jumlah bilangan ganjil sampai %d adalah ",n);

    sum = 0;
    for(i = 1; i <= n; i++){
        if (i % 2 != 0){
            sum += i;
        }
    }

    printf("%d",sum);
    
    return 0;
}
