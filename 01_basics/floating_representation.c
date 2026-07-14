#include <stdio.h>
int main(void){
float a = 3214.65;
float b = 160000000;
printf("%f\n", a); /* prints 3214.649902*/
printf("%e\n", a); /* prints 3.214650e+03*/
printf("%g\n", a); /* prints 3214.65*/
printf("%f\n", b); /* prints 160000000.000000*/
printf("%e\n", b); /* prints 1.600000e+08*/
printf("%g\n", b); /* prints 1.6e+08*/
return(0);
}