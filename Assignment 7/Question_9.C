/*Write a program to print all Armstrong numbers under 1000*/

#include<stdio.h>

int main(){
    int n,r,x,s;
    printf("Enter a Number : ");
    scanf("%d",&x);
    for(n=x;n<=x;n++){
        s=0;
        x=n;
        while(x!=0){
            r= x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
            printf("Number is armstrong ");
        else
            printf("Number is not armstrong ");

    }


}
