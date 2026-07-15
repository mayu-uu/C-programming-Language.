# Approach for Swapping Two Numbers

## Method01- Using Another Variable

<<<<<<< HEAD
Let's say our numbers are $ A $ and $ B $ stored in variable $ a $ and $ b $ respectively. Now take a third variable $ s $. First assign the variable $s$ the value at $ a $, then update $ a $ to $ b $ and update $ b $ to $ s $.

=======
Let's say our numbers are $A$ and $B$ stored in variable $a$ and $b$ respectively. Now take a third variable $s$. First assign the variable $s$ the value at $a$, then update $a$ to $b$ and update $b$ to $s$.
>>>>>>> 72e21d7 (p)
```c
//swapping logic
s=a;
a=b;
b=s;
```
## Method02- Using Addition Operation(Without using a third variable)

<<<<<<< HEAD
Let's say our numbers are $ A $ and $ B $ stored in variable $ a $ and $ b $ respectively. Now update $ a $ to $ a+b $ and update $ b $ to $ a-b $. Then update $ a $ to $ a-b $.

```c
=======
Let's say our numbers are $A$ and $B$ stored in variable $a$ and $b$ respectively. Now update $a$ to $a+b$and update $b$ to $a-b$. Then update $a$ to $a-b$.```c
>>>>>>> 72e21d7 (p)
//swapping logic
a=a+b;
b=a-b;
a=a-b;
```
