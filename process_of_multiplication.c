#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countDigits(int num) { 
    if (num == 0) return 1; 
    
    num = abs(num); 
    int count = 0; 
    while (num > 0) { 
        num /= 10; 
        count++; 
    } 
    return count;
}
int getNthDigit(int num, int n) { num = abs(num); 
    int totalDigits = countDigits(num); 
    if (n < 1 || n > totalDigits) { 
        
        return -1; } 
        
        for (int i = 0; i < totalDigits - n; i++) { 
            num /= 10; 
        } 
    return num % 10; 
}

int main(){
    int multicand=34, multiplier = 35;
    printf("-------------------------\n");
    printf("                  %d\n", multicand);
    printf("        x         %d\n", multiplier);
    printf("-------------------------\n");
    int count = countDigits(multiplier);
    for(int i = 1; i<=count; i++){
        printf("%d x %d is         %.0f\n", getNthDigit(multiplier, i), multicand, getNthDigit(multiplier, i)*multicand*pow(10.0, i-1));
    }
    printf("-------------------------\n");
    printf("Add them           %d", multiplier*multicand);



}