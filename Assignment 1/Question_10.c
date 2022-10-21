#include<stdio.h>
int main(){
    int date,month,year;
    printf("Enter Date in DD/MM/YYYY Format Only");
    scanf("%d/%d/%d/",&date,&month,&year);

    printf("Day is = %d, Month is = %d, and Year is =%d",date,month,year);
    return 0;
}
