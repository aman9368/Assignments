/*Write a program to check whether a given number is divisible by 5 or not*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter First Number");
    scanf("%d",&num);

    if(num%5 ==0)
    {
        printf("%d is Divisible by 5",num);
    }
    else{
        printf("%d is Not Divisible by 5",num);
    }
    return 0;
}
