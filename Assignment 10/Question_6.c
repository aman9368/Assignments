/*Write a program to calculate factorial of a number*/


#include<stdio.h>
 int fact(int num){
        int fact =1,i;
        for(i=1;i<=num;i++){
            fact *= i;
        }
        return fact;
    }

    int main()
  {
    int factorial ,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    factorial = fact(number);
    printf("Factorial of %d is: %d",number,factorial);
    return 0;
}


