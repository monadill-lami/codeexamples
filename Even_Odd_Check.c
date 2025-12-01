#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    int a;
    scanf("%d", &a);
    if(isdigit(a)){
        if(a%2 == 0){
            printf("Even");
        }
        else{
            printf("odd");
        }
    }
    else{
        printf("enter a digit");
    }
}