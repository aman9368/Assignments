/* Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
#include<stdio.h>

 int checkDigit(int num, int digit){
        while(num){
            if(num%10 == digit)
               return 1;
             num = num/10;
        }
        return 0;

    }

int main(){
    int num,digit;
    printf("Enter two Numbers : ");
    scanf("%d %d",&num,&digit);
    if(checkDigit(num,digit))
        printf("\"Yes, Digit Exist !");
    else
         printf("\"No, Digit Not Exist !");
    return 0;

}
