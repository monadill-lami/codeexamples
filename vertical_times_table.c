#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        for(int j =1; j<=10; j++){
            printf("%d X %d = %d, ", i, j, i*j);
        }
    }
}