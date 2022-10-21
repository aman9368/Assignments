#include<stdio.h>

    int main(){
    float inr,usd;
    printf("Enter amount in INR ");
    scanf("%f",&inr);
    usd = inr/76.23;
    printf("Rupees %.2f is equal to %f doller",inr,usd);
    return 0;
}
