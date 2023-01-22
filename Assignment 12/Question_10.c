/* Write a recursive function to print reverse of a given number*/

#include<stdio.h>
void reverseNumber(int n)
{
    int static reminder,reverse;
        if(n == 0)
            return ;
        reminder = n % 10;
        reverse = reverse*10+reminder;
        n /= 10;
        reverseNumber(n);
        if(n == 0)
        printf("%d ",reverse);
}
int main()
{
    int n,result;
    printf("Enter a Number :");
    scanf("%d",&n);
    reverseNumber(n);


    return 0;
}
