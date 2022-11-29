/*Write a program to print first N terms of Fibonacci series*/

#include <stdio.h>

int main() {
  int i,num,a=0,b=1,c;
  printf("Enter a Number : ");
  scanf("%d",&num);
  printf("%d ",a);
  printf("%d ",b);
  for(i=3;i<=num;i++){
    c = a+b;
    printf("%d ",c);
    a=b;
    b=c;
  }

  return 0;
}
