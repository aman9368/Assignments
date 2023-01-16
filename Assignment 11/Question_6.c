/* Write a function to print first N prime numbers (TSRN)*/
#include<stdio.h>

int Prime(int first,int last)
{
    int x=2,i;
   for(x=first+1;x<=last-1;x++)
    {
       for(i=2;i<x;i++)
        if(x%i== 0)
           break;
        if(i==x)
            printf("%d ",x);

   }
}
main()
{
int first,last;
printf("Enter two Numbers ");
scanf("%d %d",&first,&last);
Prime(first,last);
   return 0;
}
