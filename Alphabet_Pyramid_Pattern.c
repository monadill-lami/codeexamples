#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    int n,c;
    scanf("%d", &n);
    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<=(n-i-1); j++){
            printf(" ");
        }
        for(int l = 0; l<((i*2-1)/2)+1; l++){
            printf("%c ", l+65);
            c = l+65;

        }
        for(int l = 1; l<=((i*2-1)/2); l++){
            printf("%c ", c-l);
        }
        printf("\n");
    }
    
}