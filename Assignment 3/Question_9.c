/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times*/

#include <stdio.h>
int main() {
	int a=200,b=130,c=200;
	printf("Enter the value of First Number :");
	scanf("%d",&a);
	printf("\nEnter the value of Second Number :");
	scanf("%d",&b);
	printf("\nEnter the value of Third Number :");
	scanf("%d",&c);
  	if(a>b)
    {
    	if(a>c)
        {
        	printf("First Number is greater");
        }
        else
        {
        	 printf("Third Number is greater");
        }
    }
    else
    	{
        	if(b>c)
            {
             printf("Second Number is greater");
            }
            else
            {
            printf("Third Number is greater");
            }
        }

  return 0;
}
