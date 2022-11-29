/*Write a program to calculate HCF of two numbers*/
#include <stdio.h>

int main() {
  int n1,n2,min,i;
  printf("Enter two Numbers :");
  scanf("%d%d",&n1,&n2);
  min = (n1<n2)?n1:n2;

  for(i=1;i<=n1 || i<=n2;i++){
  if((n1%min==0) && (n2%min==0))
  {
  	printf("H.C.F of %d and %d is : %d",n1,n2,min);
    break;
  }
  	min--;
  }
  return 0;
}
