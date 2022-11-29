/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/


/* if you want to give selection in character then it is mandatory to use fflush(stdin) before and after scanf("Choice") function and also use #include<stdlib.h>*/
#include <stdio.h>

int main() {
 int firstNumber,secondNumber,choice,operation;
 printf("Enter your Choice :");
 printf("\n1: Enter Input 1 for Additon of Two Numbers");
 printf("\n2: Enter Input 2 for Subtraction of Two Numbers");
 printf("\n3: Enter Input 3 for Multiplication of Two Numbers");
 printf("\n4: Enter Input 4 for Division of Two Numbers");
 printf("\n5: Enter Input 5 for Exit");
 printf("\nEnter Choice : ");
 scanf("%d",&choice);
 switch(choice){
 	case 1:
        printf("Enter First Number : ");
        scanf("%d",&firstNumber);
        printf("\nEnter Second Number : ");
        scanf("%d",&secondNumber);
        operation = firstNumber+secondNumber;
        printf("\nAdditon of %d and %d is %d",firstNumber,secondNumber,operation);
    break;
    case 2:
        printf("Enter First Number : ");
        scanf("%d",&firstNumber);
        printf("\nEnter Second Number : ");
        scanf("%d",&secondNumber);
        operation = firstNumber-secondNumber;
        printf("\nSubtraction of %d and %d is %d",firstNumber,secondNumber,operation);
    break;
    case 3:
        printf("Enter First Number : ");
        scanf("%d",&firstNumber);
        printf("\nEnter Second Number : ");
        scanf("%d",&secondNumber);
        operation = firstNumber*secondNumber;
        printf("\nMultiplication  of %d and %d is %d",firstNumber,secondNumber,operation);
    break;
    case 4:
        printf("Enter First Number : ");
        scanf("%d",&firstNumber);
        printf("\nEnter Second Number : ");
        scanf("%d",&secondNumber);
        operation = firstNumber/secondNumber;
        printf("\nDivision  of %d and %d is %d",firstNumber,secondNumber,operation);
    break;

    case 5:
     exit(1);

    default :
    	printf("\nInvalid Input");

  }

  return 0;
}

