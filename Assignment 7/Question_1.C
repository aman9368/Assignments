/*Write a program to find the Nth term of the Fibonnaci series*/

#include <stdio.h>

int main() {
  int i,num,a=0,b=1,c;
  printf("Enter a Number : ");
  scanf("%d",&num);
  for(i=3;i<=num;i++){
    c = a+b;
    a = b;
    b = c;
  }
  printf("%d'th term of fibonnaci series is : %d",num,b);
  return 0;
}
