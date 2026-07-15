#include <stdio.h>

int main(){
	int a=2;
	int b=3;
	printf("Initial numbers were: %d %d\n", a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapped numbers are: %d %d", a, b);
	return 0;
}