/*Write a function to calculate HCF of two numbers. (TSRS)*/

#include <stdio.h>

int Hcf(int firstNumber, int secondNumber){
int min,i;
 min = (firstNumber < secondNumber) ? firstNumber : secondNumber;

  if(firstNumber % min == 0 && secondNumber % min == 0)
		return min;
  else
   {

    for(i = min;i<=min;i--)
    {
    	if(firstNumber%i == 0 && secondNumber%i == 0)
        {
        	return i;
        }
    }
   }
}

int main() {
  int firstNumber,secondNumber,hcf;
  printf("Enter Two Numbers : ");
  scanf("%d %d",&firstNumber,&secondNumber);
  hcf = Hcf(firstNumber,secondNumber);
  printf("%d",hcf);
  return 0;
}
