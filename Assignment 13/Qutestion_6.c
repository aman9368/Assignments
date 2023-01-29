/*Write a recursive function to calculate factorial of a given Number*/

#include<stdio.h>
int fact(int n)
{
    int a;
      if(n==1)
         return 1;
      a = n*fact(n-1);
        return a;

}
int main()
{
    int n,response;
    printf("Enter a Number :");
    scanf("%d",&n);
    response = fact(n);
    printf("Factorial of %d is  : %d",n,response);
    return 0;
}
