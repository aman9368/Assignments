/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
   triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
   angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or no
d. Exit
 */

#include <stdio.h>

int main() {
 int base,perpendicular,hypotenuse,choice;
 printf("Enter length of Base : ");
 scanf("%d",&base);
 printf("\nEnter length of perpendicular : ");
 scanf("%d",&perpendicular);
 printf("\nEnter length of Hypotenuse : ");
 scanf("%d",&hypotenuse);

 printf("Enter your Choice :");
 printf("\n 1: Select Option 1 for Check whether a given set of three numbers are lengths of an isosceles triangle or not");
 printf("\n 2: Select Option 2 for Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
 printf("\n 3: Select Option 3 for Check whether a given set of three numbers are equilateral triangle or no");
 printf("\n 4: Select Option 4 for Exit");
 printf("\nEnter Choice : ");
 scanf("%d",&choice);
 switch(choice){
 	case 1:
        if((base == perpendicular) || (base == hypotenuse) || (perpendicular == hypotenuse))
            printf("Triangle is Isosceles");
        else
            printf("Triangle is not Isosceles");

        break;
    case 2:
        if((base*base + perpendicular*perpendicular == hypotenuse*hypotenuse))
            printf("Triangle is Right Angle ");
        else
            printf("Triangle is not Right Angle ");
    break;
    case 3:
        if((base == perpendicular && perpendicular == hypotenuse && base == hypotenuse))
            printf("Triangle is Equilateral  Angle ");
        else
            printf("Triangle is not Equilateral  Angle ");
    break;
    case 4:
    exit(1);
    default :
    	printf("\nInvalid Input");

  }

  return 0;
}

