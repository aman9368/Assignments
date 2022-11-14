/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include <stdio.h>
int main() {
    int i;
	char ch;
    printf("Enter any Single Character Input : ");
    scanf("%c",&ch);


    if((ch >= 97) && (ch <= 122) )
    {
    	printf("Given Charater is LowerCase");
    }
    else if((ch >= 65) && (ch <= 90) )
    {
    	printf("Given Charater is UpperCase");
    }
     else if((ch >= 48) && (ch <= 57) )
    {
    	printf("Given Charater is Digit");
    }
    else
    {
    	printf("Given Charater is Special Symbol");
    }

    return 0;
}
