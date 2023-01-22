/*Write a recursive function to print first N natural numbers in reverse order*/

#include<stdio.h>
void NaturalNumber(int n)
{
    if(n == 0)
        return;

    printf("%d ",n);
    NaturalNumber(n-1);

}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    NaturalNumber(n);;
    return 0;
}
