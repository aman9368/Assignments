/* Write a program to check whether a given number is divisible by 7 or divisible by 3.*/

#include <stdio.h>
int main() {
	int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    if(number % 7 == 0)
    {
    	if(number % 3 == 0)
        {
       		 printf("%d is divisible by 7 and 3",number);
        }
        else
        {
        	printf("%d is divisible by 7",number);
        }

    }
    else
    {
    	printf("%d is  divisible by 3",number);
    }

    return 0;
}
