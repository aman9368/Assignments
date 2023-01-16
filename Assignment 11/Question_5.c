/* Write a function to print first N prime numbers (TSRN)*/
#include<stdio.h>
main()
{
int x=2,N;
printf("Enter a Number ");
scanf("%d",&N);
while(N)
 {

   if(Prime(x))
   {
       printf("%d ",x);
       N--;
   }
   x++;
 }
    return 0;
}
int Prime(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
    {
        if(x%i== 0)
        {
            return(0);
        }
        else{
            return(1);
        }
    }
}
