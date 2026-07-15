#include <stdio.h>

int main(){
	double a, b, c; //given 3 numbers
	scanf("%lf %lf %lf", &a, &b, &c); //taking input of the given numbers
	double avg; //variable where we store the average of 3 numbers
	avg=(a+b+c)/3;
	printf("average of the three numbers is: %lf\n", avg);
	printf("numbers which are greater than or lesser than the average:\n");
    if(avg!=a){
    	printf("%lf ", a);
    	if(avg>a){
    		printf("is lesser than the average\n");
    	}else{
    		printf("is greater than the average\n");
    	}
    }	
    if(avg!=b){
    	printf("%lf ", b);
    	if(avg>b){
    		printf("is lesser than the average\n");
    	}else{
    		printf("is greater than the average\n");
    	}
    }
    if(avg!=c){
    	printf("%lf ", c);
    	if(avg>c){
    		printf("is lesser than the average\n");
    	}else{
    		printf("is greater than the average\n");
    	}
    }
}