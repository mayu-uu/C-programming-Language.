# Approach for Swapping Two Numbers

## Method01- Using Another Variable

Let's say our numbers are $A$ and $B$ stored in variable $a$ and $b$ respectively. Now take a third variable $s$. First assign the variable $s$ the value at $a$, then update $a$ to $b$ and update $b$ to $s$.

```c
//swapping logic
s=a;
a=b;
b=s;
