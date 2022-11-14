/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>

int main(){
    float cp,sp,percentage;
    printf("Enter Cost Price : ");
	scanf("%f",&cp);
    printf("Enter Selling Price : ");
	scanf("%f",&sp);

	percentage= (sp-cp)/cp*100;
	if(percentage > 0)
{
	printf("Your Profit Percentage is : %.0f%%",percentage);
}   else
{
	printf("Your Loss Percentage is : %.0f%%",percentage);
}


    return 0;

}
