#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    int number;
    float average, sum=0;
    for(int i =0; i<10; i++){
        scanf("%d", &number);
        sum += number;

    }
    
    average = sum/10;
    printf("%f avg = %f", sum, average);

}