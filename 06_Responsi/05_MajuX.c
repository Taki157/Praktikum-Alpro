#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, jarak, i, j;
    
    scanf("%d",&n);
    scanf("%d",&jarak);

    int T[n];
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    
    j = 0;
    for (i=0;i<n;i++){
        if (j==n){
            continue;
        }
        
        if (i%3 == 0){
            printf("%d ",T[i]);
            j += 1;
        }else if (i >= n){
            i = i - n;
            printf("%d ",T[i]);
            j += 1;
        }
        
    }
    


    return 0;
}