
/*Write a program to check whether a given number is positive or non positive.*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter First Number");
    scanf("%d",&num);

    if(num>0)
    {
        printf("Number is Positive");
    }
    else{
        printf("Number is Non-Positive");
    }
    return 0;
}
