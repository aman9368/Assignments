/*Write a program to check whether a given number is divisible by 3 and divisible by 2.*/

#include <stdio.h>
int main() {
	int number;
	printf("Enter a Number");
	scanf("%d",&number);
    if(number % 6 == 0)
    {
    	printf("%d is divisible by 3 and 2",number);
    }
    else
    {
    	printf("%d is not divisible by 3 and 2",number);
    }

    return 0;
}
