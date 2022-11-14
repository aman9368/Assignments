/* Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include <stdio.h>
int main() {
	int a,b,c;
    printf("Enter value of side a :");
    scanf("%d",&a);
    printf("Enter value of side b :");
    scanf("%d",&b);
    printf("Enter value of side c :");
    scanf("%d",&c);

   	if((a < (b+c)) && (b < (a+c)) && (c < (a+b)))
    {
    	printf("Valid Triangle");
    }
    else
    {
    	printf("Triangel is invalid");
    }

    return 0;
}
