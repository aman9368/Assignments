/*Write a program which takes the month number as an input and display number of
days in that month.*/
#include <stdio.h>
int main() {
	int number;
    printf("Enter Month Number:");
    scanf("%d",&number);
   	if((number == 1 ) || (number == 3 ) || (number == 5 ) || (number == 7 ) || (number == 8 ) || (number == 10 ) || (number == 12 ))
    {
    	printf("Number of Days in this month is 31");
    }
    else if((number == 4 ) || (number == 6 ) || (number == 9 ) || (number == 11 ))
    {
    	printf("Number of Days in this month is 30");
    }

    else
    {
    		printf("Number of Days in this month is either 28 or 29");

    }

    return 0;
}
