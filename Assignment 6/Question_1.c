/*Write a program to calculate sum of first N natural numbers*/

#include <stdio.h>

int main() {
 int i,n,sum=0;
 printf("Enter a Number :");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	sum += i;
 }
 /*sum = n*(n+1)/2;*/
 printf("Sum of First %d Natural Number is : %d",n,sum);
  return 0;
}
