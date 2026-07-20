# Approach for Finding the Aggregate Marks and Percentage

First we take inputs of the marks one by one from the user using the __scanf()__ function. As the question says that we need to check the error input if any entered marks is greater than $100$ or not, for that we will use a ```c while()``` loop:
```c
scanf("%d", &input_marks);
while(input_marks>100){
	scanf("%d", &input_marks);
}
```
Next as we get sorted with our input marks, we take another variable $s$ which stors the aggregate marks and as we give our input marks we add the input marks to $s$ and update it to the added marks, then if we divide $s$ by $5$ then we get the percentage.
```c
int s=0;
for(int i=1; i<=5; i++){
	s+=input_marks;
}
```