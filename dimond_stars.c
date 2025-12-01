#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<=(n-i-1); j++){
            printf(" ");
        }
        for(int l = 0; l<(i*2-1); l++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            printf(" ");
        }
        for(int l = 0; l<((n-i-1)*2-1); l++){
            printf("*");
        }
        printf("\n");
    }
    
}