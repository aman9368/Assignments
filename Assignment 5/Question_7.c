/*Write a program to print the first N even natural numbers in reverse order*/


#include <stdio.h>

int main() {
 int i,n,counter=1;
 printf("Enter a Number : ");
 scanf("%d",&n);
 for(i=1;counter<=n;i++)
 {
 	printf("%d\n",i*i);
 	counter++;
 }

  return 0;
}
