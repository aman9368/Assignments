/*Write a program to count digits in a given number*/

#include <stdio.h>
 int main() {
 int count=0,num;
 printf("Enter a Number : ");
 scanf("%d",&num);
 do{
	num /=10;
    ++count;

 }while(num != 0);

  printf("Number of digit in given Input is : %d",count);
  return 0;
}
