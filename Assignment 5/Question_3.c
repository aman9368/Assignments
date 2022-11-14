/*Write a program to print the first n natural numbers in reverse order*/


#include <stdio.h>
int main() {
	int i,n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=n;i>=1;i-=1)
    {
    	printf("%d\n",i);
    }
    return 0;
}
