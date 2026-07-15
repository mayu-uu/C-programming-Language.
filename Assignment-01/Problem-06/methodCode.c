#include <stdio.h>

int main(){
	double a, b, c; //the given numbers
	scanf("%lf %lf %lf", &a, &b, &c); //taking input of the 3 numbers
    double m1, m2; //defining variable m1 and m2
    m1=a;
    m2=a; //assign a to both the variables
    if(m1>=b){
    	m1=b;
    }
    if(m1>=c){
    	m1=c;
    }
    printf("minimum number among the three numbers are: %lf\n", m1);
    if(m2<=b){
    	m2=b;
    }
    if(m2<=c){
    	m2=c;
    }
    printf("maximum number among the three numbers are: %lf\n", m2);
    return 0;
}