#include<stdio.h>

    int main(){

    int n,reminder;
    printf("Enter a Number");
    scanf("%d",&n);
    reminder = n%10;
    n = n-reminder;
    printf("Your New value is %d",n);
    return 0;
}
