#include<stdio.h>
int main(){
    int x,y;
    printf("Enter Value of x\n");
    scanf("%d",&x);
    printf("Enter Value of y\n");
    scanf("%d",&y);
     x = x+y;
     y = x-y;
     x = x-y;
    printf("Value of x = %d and value of y = %d",x,y);
    return 0;
}
