/*Write a function to calculate the area of a circle.*/

#include <stdio.h>
// Create a function
float AreaOfCircle(float r) {
	float area;
    area = 3.14 *r*r;
 	return area;
}

int main() {
 	float r, area;
    printf("Enter Radius : ");
    scanf("%f",&r);
 	area = AreaOfCircle(r);
    printf("Area of Circle is %.2f",area);
  return 0;
}
