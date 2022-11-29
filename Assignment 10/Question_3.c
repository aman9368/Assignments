/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0.*/

#include <stdio.h>
// Create a function
int EvenOdd(int num) {
   	if(num%2 == 0)
    	return 1;
    else
 		return 0;
}

int main() {
 	int num,result;
    printf("Enter a Number : ");
    scanf("%d",&num);
	result = EvenOdd(num);
        printf("%d",result);
  	return 0;
}
