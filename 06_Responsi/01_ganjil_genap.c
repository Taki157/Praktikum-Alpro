#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;

    scanf("%d",&n);
    int T[n];
    for (i = 0; i < n; i++){
        scanf("%d",&T[i]);
    }

    for(i = 0; i < n; i++){
        if (T[i] % 2 != 0){
            printf("%d ", T[i]);
        }
    }

    for(i = 0; i < n; i++){
        if (T[i] % 2 == 0){
            printf("%d ", T[i]);
        }
    }

    return 0;
}
