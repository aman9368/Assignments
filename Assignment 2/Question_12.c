#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number to reverse");
    scanf("%d",&num);
    num = (num%10)*100+(num/10);
    printf("Number after right reverse is %d",num);
    return 0;

}
