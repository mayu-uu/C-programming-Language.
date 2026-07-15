# Approach to find out if a Number is Odd or Even

## Method-01 Using modulo 2

First take input of the number using __scanf__ and store it in a variable $n$. Now check if the $n(mod 2)$ is equal to $0$ or $1$.

$if n(mod 2)=0, that means the number is divisible by 2 i.e. even number$
$if n(mod 2)=1, that means the number is not divisible by 2 i.e. odd number$
```c
if(n%2==0){
	printf("number is even");
}else{
	printf("number is odd");
}
```

## Method-02 Using Binary Operators

In binary, every power of 2 is an even number ($2^1 = 2$, $2^2 = 4$, $2^3 = 8$, etc.), except for $2^0$, which equals 1.Because of this, the least significant bit (the rightmost bit) of every odd number is always 1, and for every even number, it is always 0.When you perform a bitwise AND with 1 (which is 00000001 in binary), if the number is odd then 1 & 0001 evaluates to 1, if the number is even 1 & 0001 evaluates to 0.
```c
if((1&n)==0){
	printf("even number");
}else{
	printf("odd number");
}