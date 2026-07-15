#include <stdio.h>

int main(){
	double basic_salary; //we store our basic salary in this variable
    scanf("%lf", &basic_salary); //taking input of basic salary
    double dearness_allowance=(basic_salary*6)/10;
    double house_rent_allowance=(basic_salary*15)/100;
    double gross_salary;
    gross_salary=basic_salary+dearness_allowance+house_rent_allowance;
    printf("Total salary is: %lf", gross_salary);
    return 0;
}