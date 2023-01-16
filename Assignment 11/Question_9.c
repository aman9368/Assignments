/*Write a program to print first N terms of Fibonacci series*/

#include <stdio.h>
int square(int num)
{
    int result;
    result = num*num;
    return result;
}
int main() {
  int num,z;
  printf("Enter a Number : ");
  scanf("%d",&num);
  z = square(num);
   printf("Square of %d is : %d ",num,z);

  return 0;
}
