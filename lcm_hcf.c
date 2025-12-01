#include <stdio.h>

int hcf(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1 = 12, num2 = 18;

    printf("HCF of %d and %d is %d\n", num1, num2, hcf(num1, num2));
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
