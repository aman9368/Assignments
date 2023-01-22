/*Write a recursive function to print squares of first N natural numbers*/

#include<stdio.h>
void NaturalNumber(int n)
{
    if(n == 0)
        return;
    NaturalNumber(n-1);
    printf("%d ",n*n);


}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    NaturalNumber(n);
    return 0;
}
