#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main(){
    int a=1, b=2,c=3, max;
    max = ((a>b)?a:b);
    max = ((c>max)?c:max);
    printf("%d", max);
}