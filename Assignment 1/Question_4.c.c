#include<stdio.h>
int main()
{
    float area,radius;
    printf("Enter radius\n");
    scanf("%f",&radius);

    area = 3.14*radius*radius;

    printf("Area of Circle is %f",area);

    return 0;
}
