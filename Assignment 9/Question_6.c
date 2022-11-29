/*Program to check whether a year is a leap year or not. Using switch statement*/

#include <stdio.h>

int main() {
 int year;
 printf("Enter Year : ");
 scanf("%d",&year);

 switch(year%4 ==0 && year%100 != 0 || year%400 == 0){
 	case 1:
   	 	printf("%d is a Leap Year.",year);
    	break;
    case 0:
   		printf("%d is not a Leap Year :",year);
    	break;
  }
  return 0;
}
