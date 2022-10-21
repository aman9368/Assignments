#include<stdio.h>
int main(){
    int m,sum=0, n;
    printf("Enter a three digit number");
    scanf("%d",&n);
    while(n>0)
    {
        m = n%10;
        sum += m;
        n = n/10;
    }
    printf("Sum of digit that is entered by the user is %d",sum);
    return 0;
}
