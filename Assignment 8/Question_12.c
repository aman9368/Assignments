/* Write a program to draw the following patterns:
    A B C D E D C
      A B C D C
        A B C
          A
*/

#include <stdio.h>

int main() {
	 int i,j,k;
 for(i=4;i>=1;i--)
 {
 	k='A';
 	for(j=1;j<=7;j++)
    {
    	if(j>=5-i && j<=3+i)
        {
        	printf("%c ",k);
            if(j < 4)
            	k++;
            else
           	 k--;

        }
        else
        {
        	printf("  ");

        }
    }
 	printf("\n");
 }
 return 0;
}

