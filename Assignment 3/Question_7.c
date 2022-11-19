#include<stdio.h>

int main(){
    int a,b,c,D;
    float x,y;
    printf("Enter Coffiecent of X square, x and constant terms");
    scanf("%d%d%d",&a,&b,&c);

    D = b*b-4*a*c;
    if(D<0){
        printf("Both Roots are Imaginary");
    }
    if(D==0){
        printf("Both Roots are Equal");
        x = -b/(2.0*a);
        printf("Roots is %f",x);
    }
    if(D>0){
        printf("Roots are real and distinct");
        x = -b+sqrt(D)/(2*a);
        y = -b-sqrt(D)/(2*a);
        printf("Roots is %.2f %.2f",x,y);
    }

    return 0;
}
