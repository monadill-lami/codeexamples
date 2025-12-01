#include <stdio.h>

int fib(const int n){
    if (n == 1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int a = 0, b = 1, sum = 0;
    for(int i=0; i<(n-2); i++){
        sum = a+b;
        a =b;
        b=sum;
    } 
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("%d ", fib(i+1));

    }
    
}