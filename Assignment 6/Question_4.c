/*Write a program to calculate sum of squares of first N natural numbers*/

#include <stdio.h>

int main() {
 int i,n,counter=1,sum=0;

 printf("Enter a Number : ");
 scanf("%d",&n);
 for(i=1;counter<=n;i++)
 {

 	sum += i * i;
    counter++;
 }

/*sum = n*(n+1)*(2*n+1)/6;*/
 printf("%d",sum);
  return 0;
}
