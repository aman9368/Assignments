/*Write a program to check whether a given number is a Prime number or not*/


#include <stdio.h>
 int main() {
 int n1,n2,x,i ;
 printf("Enter two Numbers : ");
 scanf("%d%d",&n1,&n2);


 for(x=n1+1;x <= n2-1;x++)     // you can use i<=n/2 . it is a prime no property .
 {
 	for(i=2;i<x;i++){

        if(x%i==0){
            break;
        }
 	}
    if(i==x)
       printf("%d ",x);


 }
  return 0;
}
