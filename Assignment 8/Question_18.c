
/* Expected Output:
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *

*/
#include<stdio.h>

int main(){
    int i,j,k=0;
    for(i=1;i<=9;i++){
        i<=5?k++:k--;
        for(j=1;j<=10;j++){
            if(j>=7-k && j<=5+k)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");

    }
return 0;

}
