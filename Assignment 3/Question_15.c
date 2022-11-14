/* Write a program to check whether a given number is positive, negative or zero.*/

#include <stdio.h>
int main() {
	int number;
   printf("Enter a Number : ");
    scanf("%d",&number);
    if(number > 0)
    {
    	printf("Number is Positive");
    }
    else
    {
    	if(number == 0)
        {
      	  printf("Number is Zero");
        }
        else{
        	printf("Number is Negative");
        }

    }

    return 0;
}
