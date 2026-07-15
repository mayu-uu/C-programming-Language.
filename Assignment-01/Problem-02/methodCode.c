#include <stdio.h>
#include <math.h>

int main(){
	double l, b, r; //length breadth radius
	scanf("%lf %lf %lf", &l, &b, &r);
	double area_of_rectangle=l*b;
	double perimeter_of_rectangle=2*(l+b);
	double area_of_circle=acos(-1)*r*r;
	double circumference_of_circle=2*acos(-1)*r;
	printf("area of rectangle is: %lf", area_of_rectangle);
	printf("perimeter of rectangle is: %lf", perimeter_of_rectangle);
	printf("area of circle is: %lf", area_of_circle);
	printf("circumference of circle is: %lf", circumference_of_circle);
}