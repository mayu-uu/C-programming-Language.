#include <stdio.h>

int main(){
	int n; //3 digit number
	scanf("%d", &n); //taking input of 3 digit number
	int s=0; //variable where we store the sum
	while(n>0){
		s+=n%10; //in each iteration we add remainder of the current number when divided by 10
		n/=10; // in each iteration we divide the current number by 10 (let's say x) and update the current number to x
	}
	printf("sum of the digits is: %d\n", s); //printing the sum of digits
	return 0;
}