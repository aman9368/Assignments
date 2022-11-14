/*Write a program to print the first n natural numbers*/


#include <stdio.h>
int main() {
	int i,n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
    	printf("\n%d",i);
    }
    return 0;
}
