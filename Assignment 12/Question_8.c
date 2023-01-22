/* Write a recursive function to print binary of a given decimal number*/

#include<stdio.h>
void DecimaltoBinary(int n)
{

        if(n == 1)
            printf("1");
        else{
            DecimaltoBinary(n/2);
            printf("%d",n%2);
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
