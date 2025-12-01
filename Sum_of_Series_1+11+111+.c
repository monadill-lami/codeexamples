#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    int n; 
    double previous_term=0, sum =0;
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        previous_term += pow(10, i);
        sum += previous_term;

    }
    int m = sum;
    printf("%d", m);
}