/*Write a recursive function to print Sum of first N odd natural numbers*/

#include<Stdio.h>

int sumOdd(int n, int i)
{
    int static sum;
    if(i>n)
        return;
    else
      sum += 2*i-1;
      if(i == n)
         printf("Sum Of First %d Odd Numbers is : %d",n,sum);
    sumOdd(n,i+1);
}
int main(){
int n;
printf("Enter a Number :");
scanf("%d",&n);
sumOdd(n,1);
return 0;
}

