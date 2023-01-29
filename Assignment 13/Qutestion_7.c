/*Write a recursive function to calculate HCF of two numbers*/

#include<stdio.h>
int GCD(int a,int b)
{
    /*if(a==b)
        return a;
    if(a%b == 0)
        return b;
    if(b%a == 0)
        return a;
    if(a>b)
        return GCD(a%b,b);
    else
        return GCD(a,b%a);*/

    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}




int main()
{
    int num1,num2;
    printf("Enter two Number :");
    scanf("%d %d",&num1,&num2);

    printf("Greatest Common Divisor of %d and %d is : %d",num1,num2, GCD(num1,num2));
    return 0;
}
