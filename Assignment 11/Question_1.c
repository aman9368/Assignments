/*Write a function to calculate LCM of two numbers. (TSRS)*/

#include <stdio.h>

int Lcm(int firstNumber, int secondNumber){
int max,i;
 max = (firstNumber > secondNumber) ? firstNumber : secondNumber;

  if(max%firstNumber == 0 && max % secondNumber == 0)
		return max;
  else
   {

    for(i = max+1;i>=max;i++)
    {
    	if(i%firstNumber == 0 && i%secondNumber == 0)
        {
        	return i;
        }
    }
   }
}

int main() {
  int firstNumber,secondNumber,lcm;
  printf("Enter Two Numbers : ");
  scanf("%d %d",&firstNumber,&secondNumber);
  lcm = Lcm(firstNumber,secondNumber);
  printf("L.C.M of %d and %d is : %d",firstNumber,secondNumber,lcm);
  return 0;
}
