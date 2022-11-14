/*Write a program to check whether a given alphabet is in uppercase or lowercase.*/

#include <stdio.h>
int main() {
	char c;
	printf("Enter a Character : ");
	scanf("%c",&c);

    if((c >= 'a') && (c <= 'z'))
    {
    	printf("LowerCase");
    }
    else
    {
    	printf("UpperCase");
    }
    return 0;
}
