#include <stdio.h>

int main(){
	int n; //given number to be checked
	scanf("%d", &n); //taking input of the number
	if((1&n)==0){
		printf("The number is even\n");
	}else{
		printf("The number is Odd\n");
	}
	return 0;
}