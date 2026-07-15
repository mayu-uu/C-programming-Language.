#include <stdio.h>

int main(){
	printf("If unit is Fahrenheit write 0 else write 1");
	int unit; //input of the unit
	double temperature; //input of the temperature
	scanf("%d", &unit);
	scanf("%lf", &temperature);
	if(unit==0){
		//conversion of Fahrenheit to Centigrade
		temperature=((temperature-32)*5)/9;
		printf("temperature in centigrade is: %lf", temperature);
	}else if(unit==1){
		//conversion of Centigrade to Fahrenheit
		temperature=(5*temperature)/9 + 32;
		printf("temperature in Fahrenheit is: %lf", temperature);
	}
	return 0;
}