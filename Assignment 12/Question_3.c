/*Write a recursive function to print first N odd natural numbers*/

#include<Stdio.h>

void odd(int n)
{

    if(n<0)
        return;
    odd(n-1);
    if(n%2 != 0)
        printf("%d ",n);


}
int main(){
int i;
printf("Enter a Number :");
scanf("%d",&i);
odd(2*i);
return 0;
}

