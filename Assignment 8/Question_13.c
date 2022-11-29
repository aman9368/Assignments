/* Write a program to draw the following patterns:

A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A

*/
#include <stdio.h>

int main() {
	 int i,j,k;
 for(i=1;i<=7;i++)
 {
 	k = 'A';
 	for(j=1;j<=13;j++)
    {
    	if(j<=8-i || j>=6+i)
        {
        	printf("%c ",k);
            if(j < 7)
            	k++;
            else
            	k--;

        }
        else
        {
        	printf("  ");
            if(j < 7)
            	k++;
            else
            	k--;

        }
    }
 	printf("\n");
 }
 return 0;
}
