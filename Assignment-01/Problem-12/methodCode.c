#include <stdio.h>
#include <math.h>

int main(){
	double l, b;// length and the breadth of the rectangle
	scanf("%lf %lf", &l, &b);
	double r1, r2; // radius for the 1st and the 2nd part
	double pi= acos(-1);
	r1=sqrt(l*b/pi); //radius of the circle if the areas are equal
	r2=(l+b)/pi; //radius of the circle if the perimeters are equal
	double ratio1, ratio2;
	ratio1= (pi*r1)/(l+b); //ratio of the perimeters if the areas are equal
	ratio2= (pi*r2)/(l*b); //ratio of the areas if the perimeters are equal
	printf("r1 (equal areas): %.4lf\n", r1);
    printf("r2 (equal perimeters): %.4lf\n", r2);
    printf("Ratio of perimeters (Case 1): %.4lf\n", ratio1);
    printf("Ratio of areas (Case 2): %.4lf\n", ratio2);
	return 0;
}