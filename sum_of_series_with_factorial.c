#include <stdio.h>
#include <math.h>
#include <ctype.h>

int factorial(const int n){
    if(n<2){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}
void main(){
    float x = 2, sum = 0;
    int n =2;
    
    for( int i = 0; i<n; i++){
        
        sum += pow(-1, i)*(pow(x,i*2)/factorial(2*i));



    }
    printf("\n%f", sum);
}