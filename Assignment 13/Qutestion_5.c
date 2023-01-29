/*Write a recursive function to calculate sum of digits of a given number*/

#include<stdio.h>
int sumOfDigits(int n)
{
    int static sum,counter;
    int reminder=0;
    reminder = n % 10;
    sum += reminder;
    n = n / 10;
    if(n == 0)
        return sum;
    sumOfDigits(n);
}
int main()
{
    int n,response;
    printf("Enter a Number :");
    scanf("%d",&n);
    response = sumOfDigits(n);
    printf("Sum of Digits of Given Number is : %d",response);
    return 0;
}
