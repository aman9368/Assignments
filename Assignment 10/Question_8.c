/*Write a function to calculate the number of arrangements one can make from n items
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
    int n,r,Permutation;
    printf("Enter two Numbers : ");
    scanf("%d %d",&n,&r);
    Permutation = fact(n)/fact(n-r);
    printf("%d",Permutation);
    return 0;

}
