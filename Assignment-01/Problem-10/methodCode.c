#include <stdio.h>

int main(){
	int amount; //variable to store the amount to be dispenced
	scanf("%d", &amount);
	if(amount%10!=0){
		printf("input amount can't be dispenced");
		return 0;
	}else{
		int s=0, s100=0, s50=0, s10=0;
		s100+=amount/100;
		printf("number of 100 rs notes to be dispenced: %d\n", s100);
		amount%=100;
		s50+=amount/50;
		printf("number of 50 rs notes to be dispenced: %d\n", s50);
		amount%=50;
		s10+=amount/10;
		printf("number of 10 rs notes to be dispenced: %d\n", s10);
		s=s100+s50+s10;
		printf("total minimum number of notes dispenced: %d\n", s);
	}
}