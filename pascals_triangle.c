#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n+1; i++){
        int c =1;
        for(int j = 0; j<=(n-i-1); j++){
            printf(" ");
        }
        for(int k =0; k<i+1; k++){
            
            printf(" %d", c);
            c=c*(i-k)/(k+1);
            
        }
        printf("\n");
    }
}