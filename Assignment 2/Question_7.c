#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    if(n & 1)
    {
        printf("Number is odd");

    }else
    {
        printf("Number is even");

    }
}
