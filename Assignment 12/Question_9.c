/* Write a recursive function to print octal of a given decimal number*/

#include<stdio.h>
void DecimaltoBinary(int n)
{
        if(n >= 1)
        {
            DecimaltoBinary(n/8);
            printf("%d",n%8);
        }

}
int main()
{
    int n,result;
    printf("Enter a Number :");
    scanf("%d",&n);
    DecimaltoBinary(n);


    return 0;
}
