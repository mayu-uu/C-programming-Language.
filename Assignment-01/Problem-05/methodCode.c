#include <stdio.h>

int main(){
	double a, b; //given number as a double data type
	scanf("%lf %lf", &a, &b); //taking input of the given numbers
	double decimal_ans; // variable for storing the number after decimal point
	double m1, m2; //m1 stores the min(a, b) and m2 stores the max(a, b)
	if(a>=b){
		m1=b;
		m2=a;
	}else{
		m1=a;
		m2=b;
	}
	decimal_ans=m2/m1; //answer with decimal point
	printf("decimal number after division is: %lf\n", decimal_ans);
	printf("fractional number after division is: %lf/%lf\n", m2, m1);
	return 0;
}