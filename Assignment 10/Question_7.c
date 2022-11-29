/* Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>

 int fact(int num){
        int fact = 1,i;
        for(i=1;i<=num;i++){
            fact *= i;
        }
        return fact;
}

int main(){
    int n,r,combination;
    printf("Enter two Numbers : ");
    scanf("%d %d",&n,&r);
    combination = fact(n)/(fact(r)*fact(n-r));
    printf("%d",combination);
    return 0;

}
