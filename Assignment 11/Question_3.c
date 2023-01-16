/*Write a function to check whether a given number is Prime or not. (TSRS)*/


#include <stdio.h>

 int isPrime(int n){
 int i;
 for(i=2;  i <= n-1; i++)     // you can use i<=n/2 . it is a prime no property .
 {
 	if(n%i==0){
      break;
    }

 }
 if(i==n)
 {
 	return 1;
 }else
 {
    return 0;
 }
 }


 int main() {
 int IsPrimeNumber,num;
 printf("Enter a Number : ");
 scanf("%d",&num);
 IsPrimeNumber = isPrime(num);
 if(IsPrimeNumber){
 	 printf("Given Number is Prime.");
 }else{
 	printf("Given Number is not Prime.");
 }

  return 0;
}

