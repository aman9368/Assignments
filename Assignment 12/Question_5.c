/*Write a recursive function to print first N even natural numbers*/

#include<Stdio.h>

void even(int n)
{

    if(n == 0)
        return;
    even(n-1);
    if(n%2 == 0)
        printf("%d ",n);


}
int main(){
int i;
printf("Enter a Number :");
scanf("%d",&i);
even(2*i);
return 0;
}

