/*Write a program to find Next Prime numbers of given number*/


#include <stdio.h>
 int main() {
 int i,j,n,count = 0;
 printf("Enter a Number : ");
 scanf("%d",&n);
 for(i=n+1;i>0;i++)     // you can use i<=n/2 . it is a prime no property .
 {
     count = 0;
 	for(j=1;j<=i;j++){
        if(i%j==0){
           count++;
        }

    }

         if(count == 2){
             printf("Next prime Number from given Number is : %d ",i);
            break;
         }


 }
  return 0;
}
