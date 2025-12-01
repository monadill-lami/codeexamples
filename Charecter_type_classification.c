#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    char a;
    scanf("%c", &a);
    if(isdigit(a)){
        printf("Digit");
    }
    else if(isalpha(a)){
        printf("Alpha");
    }
    else{
        printf("Special");
    }
}