#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    int year=2012;

    if(year%400 == 0 || (year%4==0 && year%100 != 0)){
        printf("Leap");
    }
    else{
        printf("Not");
    }

}