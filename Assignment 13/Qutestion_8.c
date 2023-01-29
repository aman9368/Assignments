/*Write a recursive function to print first N terms of Fibonacci series*/

#include<stdio.h>
int fibonacci(int n)
{
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1; //you can return 0 from here.
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int i,n;
    printf("Enter how many terms of fibonacci series do you want to see ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",fibonacci(i));
    return 0;
}
