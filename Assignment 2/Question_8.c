#include<stdio.h>
/*When sizeof() is used with the data types such as int, float, char… etc
it simply returns the amount oprintf("%d",sizeof(int));f memory is allocated to that data types.*/
    int main(){

    printf("Size of Integer Variable is %d\n",sizeof(int));
    printf("Size of Float Variable is %d\n",sizeof(float));
    printf("Size of Character Variable is %d\n",sizeof(char));
    printf("Size of Double Variable is %d\n",sizeof(double));


    return 0;
}
