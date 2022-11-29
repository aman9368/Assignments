/*Program to Convert even number into its upper nearest odd number Switch
Statement*/

#include <stdio.h>

int main() {
  int number;
  printf("Enter Number : ");
  scanf("%d",&number);

  switch(number %2 == 0)
   {
   	case 1:
    		number += 1;
            printf("Next Upper Nearest Odd Number is %d",number);
            break;
    case 0:
    		printf("Given Number is not a Even Number");
            break;

   }
  return 0;
}
