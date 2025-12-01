#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    int multiplication_number;
    scanf("%d", &multiplication_number);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", multiplication_number, i, multiplication_number*i);
    }
}