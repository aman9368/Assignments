/*Write a function to calculate simple interest.*/

#include <stdio.h>
// Create a function
float Interest(float p, float r,float t) {
	float interest;
    interest = p*r*t/100;
 	return interest;
}

int main() {
 	float p,r,t, Si;
    printf("Enter Principle Amount : ");
    scanf("%f",&p);
    printf("\nEnter Rate of Interest : ");
    scanf("%f",&r);
    printf("\nEnter Time ");
    scanf("%f",&t);
 	Si = Interest(p,r,t);
    printf("\nSimple Interest is %.2f",Si);
  	return 0;
}
