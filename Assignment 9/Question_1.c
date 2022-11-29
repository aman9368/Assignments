/*Write a program which takes the month number as an input and display number of
days in that month.*/

#include <stdio.h>

int main() {
 int month;
 printf("Enter Month Number : ");
 scanf("%d",&month);

 switch (month)
 {
 	case 1:
    	printf("Month has 31 Days");
        break;
 	case 2:
    	printf("Month has either 28/29  Days");
        break;
    case 3:
    	printf("Month has 31 Days");
        break;
    case 4:
    	printf("Month has 30 Days");
        break;
    case 5:
    	printf("Month has 31 Days");
        break;
    case 6:
    	printf("Month has 30 Days");
        break;
    case 7:
    	printf("Month has 31 Days");
        break;
    case 8:
    	printf("Month has 31 Days");
        break;
    case 9:
    	printf("Month has 30 Days");
        break;
	case 10:
    	printf("Month has 31 Days");
        break;
	case 11:
    	printf("Month has 30 Days");
        break;
	case 12:
    	printf("Month has 31 Days");
        break;
    default :
    	printf("Invalid Input");

 }

  return 0;
}
