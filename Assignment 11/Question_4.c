/*Write a function to find the next prime number of a given number. (TSRS)*/

int nextPrime(int n){
int i,j,count = 0;
for(i=n+1;i>0;i++)
 {
    count = 0;
 	for(j=1;j<=i;j++){
        if(i%j==0){
           count++;
        }
    }
    if(count == 2){
         return i;
    }
 }
}

#include <stdio.h>
 int main() {
 int n,result;
 printf("Enter a Number : ");
 scanf("%d",&n);
 result = nextPrime(n);
 printf("Next Prime Number is : %d",result);
 return 0;
}
