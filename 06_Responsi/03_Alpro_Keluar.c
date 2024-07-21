#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n, x, i, j, c;
    
    scanf("%d",&n);
    scanf("%d",&x);

    int T[n];
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    c = 0;
    for (i=0;i<n;i++){
        for (j=i;j<n;j++){
            if ((T[i] + T[j]) == x){
                printf("%d dan %d\n",T[i], T[j]);
                c += 1;
            }
        }
    }
    
    if (c == 0){
        printf("Tidak ada output");
    }
    return 0;
}