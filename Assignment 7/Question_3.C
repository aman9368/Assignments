/*Write a program to check whether a given number is there in the Fibonacci series or not*/

#include <stdio.h>

int main() {
  int i,num=11,a=0,b=1,c,record,flag= 0;
  printf("Enter a Number : ");
  scanf("%d",&record);
  for(i=3;i<=num;i++){
    c = a+b;
    a = b;
    b = c;
    if(b == record)
    {
    	flag = 1;
        break;
    }
  }

  if(flag == 1)
  {
  	 printf("Given Number is Exist in Fibonnaci Series.");
  }
  else{
  	printf("Given Number is Not Exist in Fibonnaci Series.");
  	}


  return 0;
}
