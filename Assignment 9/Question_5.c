/*Convert the following if-else-if construct into 	switch case:
		if(var == 1)
		printf("good");
		else if(var == 2)
		printf("better");
		else if(var == 3)
		printf("best");
		else
		printf("invalid");
*/

#include <stdio.h>

int main() {
 int expression;
 printf("Enter a Number between 1 and 3 :");
 scanf("%d",&expression);
 switch(expression){
 	case 1:
   	 	printf("good");
    	break;
    case 2:
   		printf("better");
    	break;
    case 3:
   		 printf("best");
    	break;
    default :
    	printf("Invalid Input");

  }

  return 0;
}
