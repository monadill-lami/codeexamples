#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>


int check_prime(const int num){
    if(num<3){
        return 1;
    }
    for(int i = 2; i<num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;

}

void main(){
    int number_input = 5;

    for(int i = 2; i <= number_input; i++){
        if(check_prime(i) && check_prime(number_input-i)){
            printf("%d = %d + %d", number_input, i, (number_input-i));
            break;
        }
    }

}