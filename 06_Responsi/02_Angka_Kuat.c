#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int faktorial(int bil){
    if (bil == 0){
        return 1;
    }else if (bil == 1){
        return 1;
    }else{
        return bil*faktorial(bil-1);
    }
}

int main() {
    int n,panjang,i,sum,mod;

    scanf("%d",&n);
    
    panjang = log10(n)+1;
    
    sum = 0;
    for (i=1;i<=panjang;i++){
        printf("i = %d\n",i);
        mod = pow(10,i);
        int digit = n % mod ;
        printf("mod = %d\n",mod);
        printf("digit = %d\n",digit);
        int fak = faktorial(digit);
        printf("faktorial = %d\n",fak);
        sum += faktorial(n % mod);
        n -= digit;
        printf("%d\n",sum);
        printf("%d\n",n);
    }

    

    return 0;
}
