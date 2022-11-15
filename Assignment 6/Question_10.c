/*Write a program to reverse a given number*/

#include<stdio.h>
    int main()
    {
     int i,reverse=0,number;
      printf("Enter a number: ");
      scanf("%d",&number);
      while(number!=0)

      {
      	 i = number%10;
    	 reverse = reverse*10+i;
     	 number/=10;

      }
      printf("%d",reverse);
    	return 0;
    }
