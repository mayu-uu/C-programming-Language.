# Approach for Finding Minimum number of Denominations

First we have to realize that if the amount is not a multiple of $10$ then we can't any note. Next we must relaize that the notes $10$, $50$, $100$ are canonical. Hence we can use greedy approach. 
First we see that how many notes we can dispence of amount $100$ then the out of the remaining notes we have to see how many $50$ rupees notes we can dispence. Then from the remaining we got to see how many $10$ rupees notes we can dispence.
First divide the amount by $10$, if the remainder is not equal to 0, then the amount is invalid, we can't dispnece notes of any type to make up the amount.
```c
if(amount%10!=0){
	printf("Invalid amount");
}
```
if the amount is divisible by $10$, then we divide the amount by $100$
```c
int s=0;
s+=amount/100;
amount=amount%100; //update amount to the remaining amount
```
We next, divide the $amount$ by $50$ and update $amount$ to $amount%50$
```c
s+=amount/50;
amount=amount%50;
```
Finally we divide the $amount$ by $10$ and as the amount is assumed to be divisible by $10$ thus the $amount$ gets updated to $0$.