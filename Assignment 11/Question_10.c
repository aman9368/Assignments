#include <stdio.h>

double factorial(int n);
double sumOfSeries(int n);

int main() {
    int n = 5;
    double result = sumOfSeries(n);
    printf("The sum of the series 1! /1 + 2! /2 + 3! /3 + 4! /4 + 5! /5 is: %.0f\n", result);
    return 0;
}

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sumOfSeries(int n) {
    double sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += factorial(i) / i;
    }
    return sum;
}
