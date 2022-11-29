/*Write a program to find the position of first 1 in LSB.*/
#include<stdio.h>
int main(){

    int i,n,count=1;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=1;i>0;i *=2){
        if(n&i){
          break;
        }
        count++;
    }
    printf("Position of First 1 from R.H.S is : %d",count);
return 0;

}
