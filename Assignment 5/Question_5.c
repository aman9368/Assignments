/*Write a program to print the first N odd natural numbers in reverse order.*/


#include <stdio.h>

int main() {
 int i,n,counter=1;
  printf("Enter a Number : ");
  scanf("%d",&n);
 for(i=n*2-1;counter<=n;i-=2)
 {
 	printf("%d\n",i);
 	counter++;
 }

  return 0;
}
