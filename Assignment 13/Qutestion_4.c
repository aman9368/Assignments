/*Write a recursive function to print sum of squares of first N natural numbers*/

#include<stdio.h>
void squareNum(int n,int i)
{
    int static sum,count=0;
    if(n == 0)
        return;
    squareNum(n-1,i);
    sum += n*n;
    if(n == i)
    printf("Sum of Square of First %d Numbers is :%d ",i,sum);


}
int main()
{
    int n,i;
    printf("Enter a Number :");
    scanf("%d",&n);
    i = n;
    squareNum(n,i);
    return 0;
}
