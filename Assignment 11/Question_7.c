/*Write a program to print first N terms of Fibonacci series*/

#include <stdio.h>
int fabionicseries(int num)
{
    int i,a=0,b=1,c;
    printf("%d ",a);
    printf("%d ",b);
    for(i=3;i<=num;i++){
    c = a+b;
    printf("%d ",c);
    a=b;
    b=c;
  }
}
int main() {
  int num;
  printf("Enter a Number : ");
  scanf("%d",&num);
  fabionicseries(num);


  return 0;
}
