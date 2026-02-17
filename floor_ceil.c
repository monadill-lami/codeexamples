#include <stdio.h>

// Function to compute floor of a float
int myFloor(float num) {
    int i = (int)num;
    if (num >= 0 || num == i)
        return i;
    else
        return i - 1;
}

// Function to compute ceil of a float
int myCeil(float num) {
    int i = (int)num;
    if (num <= 0 || num == i)
        return i;
    else
        return i + 1;
}

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Floor of %.2f = %d\n", num, myFloor(num));
    printf("Ceil of %.2f = %d\n", num, myCeil(num));

    return 0;
}
