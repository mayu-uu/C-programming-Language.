#include <stdio.h>

int main(){
	int s=0; // variable that stores the aggregate marks

	for(int i=1; i<=5; i++){ // we apply this loop to take input marks of 5 subjects
		int input_marks; //variable that stores the input marks
		scanf("%d", &input_marks);// taking input of the marks
		while(input_marks>100){// this while loop checks the validity of the marks
			perror("Try again, invalid marks");// if the marks are not valid we throw this error
			scanf("%d", &input_marks);// we take input of the marks until we get valid marks
		}
		if(input_marks<=100){
			s+=input_marks;// we only add the input marks to the aggrregate marks only if the marks are valid
		}
	}

	printf("%d\n", s); //printing the aggrregate marks
	double percnetage = s/5;
	printf("%lf", percnetage);// printing the percentage
	return 0;
}