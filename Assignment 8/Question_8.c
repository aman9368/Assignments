/* Write a program to draw the following patterns:
        1
       121
      12321
     1234321
    123454321

*/

#include <stdio.h>

int main() {
	 int i,j,k;
 for(i=1;i<=5;i++)
 {
	k=1;
 	for(j=1;j<=9;j++)
    {
    	if(j>=6-i && j<=4+i)
        {
        	printf("%d",k);
            if( j < 5)
            	k ++;
            else
           	 k --;

        }
        else
        {
        	printf(" ");

        }
    }
 	printf("\n");
 }
 return 0;
}
