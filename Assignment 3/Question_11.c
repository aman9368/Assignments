/* Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

#include <stdio.h>
int main() {
	int Mathematics,English,Hindi,Science,GK;
    printf("Enter Obtained Marks in Mathematics : ");
    scanf("%d",&Mathematics);
    printf("\nEnter Obtained Marks in English : ");
    scanf("%d",&English);
    printf("\nEnter Obtained Marks in Hindi : ");
    scanf("%d",&Hindi);
    printf("\nEnter Obtained Marks in Science : ");
    scanf("%d",&Science);
    printf("\nEnter Obtained Marks in GK : ");
    scanf("%d",&GK);

    if((Mathematics>=33)&&(English>=33)&&(Hindi>=33)&&(Science>=33)&&(GK>=33))
    {
    	printf("You are Passed !");
    }
    else
    {
    	printf("Your are Failed !");
    }
    return 0;
}
