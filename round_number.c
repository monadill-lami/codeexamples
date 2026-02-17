#include <stdio.h>
#include <math.h>

// Function to round a float to 'decimalPlaces'
float roundTo(float num, int decimalPlaces) {
    float factor = pow(10, decimalPlaces);
    return round(num * factor) / factor;
}

int main() {
    float num;
    int places;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("Enter number of decimal places to round: ");
    scanf("%d", &places);

    float result = roundTo(num, places);
    printf("Rounded value = %.10f\n", result);

    return 0;
}
