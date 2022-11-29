/*Write a function to print first N odd natural numbers*/

#include <stdio.h>
// Create a function
void printNumber(int num) {
   	int i;
    for(i=1;i<=num*2;i+=2){
    	printf("\n%d",i);
    }
}

int main() {
 	int num,result;
   printf("Enter a Number : ");
    scanf("%d",&num);
	printNumber(num);
  	return 0;
}
