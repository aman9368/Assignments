/*Program to convert a positive number into a negative number and negative number
into a positive number using a switch statement.*/

#include <stdio.h>

int main() {
 int number;
 printf("Enter Number :");
 scanf("%d",&number);

 switch(number > 0){
 	case 1:
    		number = number - number*2;
            printf("%d",number);
    		break;
    case 0:
    		number = number - number*2;
            printf("%d",number);
    		break;
  }
  return 0;
}
