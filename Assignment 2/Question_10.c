#include<stdio.h>

    int main(){
    int n,m;
    printf("Enter two Numbers");
    scanf("%d %d",&n,&m);
    n = n*10+m;
    printf("Your New value is %d",n);

   /* printf("Your New value is %d%d",n,m);*/
    return 0;
}
