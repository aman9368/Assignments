/* Write a program to draw the following patterns:

        123454321
         1234321
          12321
           121
            1
*/


#include <stdio.h>

int main() {
	 int i,j,k;
 for(i=4;i>=1;i--)
 {
 	k=1;
 	for(j=1;j<=7;j++)
    {
    	if(j>=5-i && j<=3+i)
        {
        	printf("%d",k);
            if( j < 4)
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

