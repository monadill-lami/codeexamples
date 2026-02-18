#include <stdio.h>

// Define the structure
typedef struct {
    double real;
    double imag;
} Complex;

// Function to add two complex numbers
Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

// Function to divide two complex numbers
Complex divide(Complex c1, Complex c2) {
    Complex result;
    double denominator = c2.real * c2.real + c2.imag * c2.imag;

    if (denominator == 0) {
        printf("Error: Division by zero complex number!\n");
        result.real = result.imag = 0;
        return result;
    }

    result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    return result;
}

// Function to print a complex number
void printComplex(Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    Complex c1 = {4, 5};
    Complex c2 = {2, -3};

    printf("c1 = ");
    printComplex(c1);
    printf("c2 = ");
    printComplex(c2);

    printf("\nAddition: ");
    printComplex(add(c1, c2));

    printf("Subtraction: ");
    printComplex(subtract(c1, c2));

    printf("Multiplication: ");
    printComplex(multiply(c1, c2));

    printf("Division: ");
    printComplex(divide(c1, c2));

    return 0;
}
