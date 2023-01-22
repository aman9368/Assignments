/*Write a recursive function to print first N even natural numbers in reverse order*/

#include<Stdio.h>

void even(int n)
{

    if(n == 0)
        return;

    if(n%2 == 0)
        printf("%d ",n);

     even(n-1);
}
int main(){
int i;
printf("Enter a Number :");
scanf("%d",&i);
even(2*i);
return 0;
}

