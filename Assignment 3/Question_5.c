/*Write a program to check whether a given number is a three digit number or not.*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter First Number");
    scanf("%d",&num);

    if(num>99 && num<1000)
    {
        printf("This is a three digit Number");
    }
    else{
        printf("This is not a three digit Number");
    }
    return 0;
}
