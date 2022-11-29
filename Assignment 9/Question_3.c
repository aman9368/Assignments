/*Write a program which takes the day number of a week and displays a unique
greeting message for the day.*/

#include <stdio.h>

 int main() {
 int day;

 printf("Enter Day Number.");
 scanf("%d",&day);

 switch (day)
 {
 	case 1:
    	printf("Do not let yesterday' stress ruin your today.");
        break;
 	case 2:
    	printf("We got to live only once so make great things and enjoy life. ... ");
        break;
    case 3:
    	printf("May you be loved more and more everyday... ");
        break;
    case 4:
    	printf("Never give up, hurdles do come your way, learn to overcome them and reach your goal.");
        break;
    case 5:
    	printf("Every day is a good day. There is something to learn, care and celebrate.");
        break;
    case 6:
    	printf("It’s time to start living the life you’ve imagined.");
        break;
    case 7:
    	printf("No matter how you feel, get up, dress up and show up.");
        break;

    default :
    	printf("Invalid Input");

 }

  return 0;
}
