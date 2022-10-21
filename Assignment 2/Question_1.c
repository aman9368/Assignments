#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);
     y = x%10;
     printf("Unit Digit of %d is = %d",x,y);
     return 0;
}
