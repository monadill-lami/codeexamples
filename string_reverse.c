#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main(){
    char str[5];
    char temp;

    scanf("%s", str);
    for(int i = 0; i<4; i++){
        temp = str[i];
        str[i] = str[5-i-1];
        str[5-i] = temp;
    }
    printf("%s", str);
    printf("\n%d",length(str));

    
}