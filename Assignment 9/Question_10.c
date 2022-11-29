#include<stdio.h>
int main(){
int a,b,c,d;
float x,y;
printf("Enter coefficient of x^2, x and constant term : ");
scanf("%d%d%d", &a,&b,&c);

d = b*b-4*a*c;

if(d < 0)
    printf("Both Roots are Imaginary. ");
if(d == 0)
{
    printf("Both Roots are equal ");
    x = -b/(2.0*a);
    printf("Roots is : %.1f ",x);
}

if(d > 0){
    printf("Both Roots are Real and Distinct.");
    x = (-b+sqrt(d))/(2*a);
    y = (-b-sqrt(d))/(2*a);
    printf("\nBoth Roots are : %.1f %.1f",x,y);
}

return 0;

}
