/*Write a program to print all Prime numbers under 100*/


#include <stdio.h>
 int main() {
 int x,i;
 for(x=1;x <= 100;x++)     // you can use i<=n/2 . it is a prime no property .
 {
 	for(i=2;i<=x;i++){
        if(x%i==0){
            break;
        }
 	}
    if(i==x)
       printf("%d ",x);
 }
  return 0;
}
