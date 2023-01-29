//Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>

long power(long base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent == 1) {
        return base;
    } else {
        return base * power(base, exponent-1);
    }
}

int main() {
    long base;
    int exponent;
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, power(base, exponent));
    return 0;
}
