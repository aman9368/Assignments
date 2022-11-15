/*Write a program to calculate sum of first N even natural numbers*/


#include <stdio.h>

int main() {
 int i,n,counter=1,sum=0;
 /*int a=2,d=2;*/
 printf("Enter a Number");
 scanf("%d",&n);
 for(i=1;counter<=n;i+=2)
 {
 	sum += i;
    counter++;
 }
/* sum = n*(2*a+(n-1)*d)/2;*/
 printf("%d",sum);
  return 0;
}
