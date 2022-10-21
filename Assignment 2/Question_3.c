#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter Value of x\n");
    scanf("%d",&x);
    printf("Enter Value of y\n");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("Value of x = %d and value of y = %d",x,y);
    return 0;
}
