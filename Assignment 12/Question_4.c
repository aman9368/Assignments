/*Write a recursive function to print first N odd natural numbers in reverse order*/

#include<Stdio.h>

void odd(int n)
{

    if(n<0)
        return;
    if(n%2 != 0)
        printf("%d ",n);
     odd(n-1);

}
int main(){
int i;
printf("Enter a Number :");
scanf("%d",&i);
odd(2*i);
return 0;
}

