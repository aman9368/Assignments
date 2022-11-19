/*Write a program to check whether a given number is a Prime number or not*/


#include <stdio.h>
 int main() {
 int i,n;
 printf("Enter a Number : ");
 scanf("%d",&n);
 for(i=2;  i <= n-1; i++)     // you can use i<=n/2 . it is a prime no property .
 {
 	if(n%i==0){
        break;
    }

 }
 if(i==n)
 {
   printf("%d is a  Prime Number.",n);
 }else
 {
     printf("%d is Not a  Prime Number.",n);
 }
  return 0;
}
