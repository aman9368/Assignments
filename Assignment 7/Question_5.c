
#include <stdio.h>
/*Write a program to check whether two given numbers are co-prime numbers or not*/
int main() {
  int n1,n2,min,i,flag;
  printf("Enter two Numbers : ");
  scanf("%d%d",&n1,&n2);
  min = (n1<n2)?n1:n2;

  for(i=1;i<=n1 || i<=n2;i++){
  if((n1%min==0) && (n2%min==0))
  {
  	if(min == 1)
    {
        flag = 1;
    }
    break;
  }
  	min--;
  }
  if(flag > 0)
 {
 	printf("%d and %d are Co-Prime Numbers. it's H.C.F is : 1 ",n1,n2);
 }
 else
	 {
		printf("%d and %d are not Co-Prime Numbers.it's H.C.F is : %d",n1,n2,min);
	}

  return 0;
}
