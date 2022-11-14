/*Write a program to check whether a given number is an even number or an odd
number.*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter First Number");
    scanf("%d",&num);

    if(num%2 ==0)
    {
        printf("%d is Even",num);
    }
    else{
        printf("%d is Odd",num);
    }
    return 0;
}
