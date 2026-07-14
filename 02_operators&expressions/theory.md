# Operators and Expressions

## Arithmetic Operators

Total 5 arithmetic operators in C.

1.              +        addition
2.              -        subtraction
3.              *        multplication
4.              /        division
5.              %        modulo(remainder)

Out of the 5 operators , modulo operators works only when both the operands are integers(preferably positive). Obviously division by 0 is not possible.

Also when the division is done(on integers) , the quotient is only the integral part.

### Type Casting

Conversion of one data type into other data type is called type casting.

```c
float b = 5.5;
int a = (int)b;
```

Here the float is type casted to int, and the value returned is 5.  
It is done manually and hence is called explicit type casting.

```c
int a = 9;
float b = 8.9;
double c = a*b;
```

In this case, the value a, b is auto casted ( also called _type promotion_) to double during compilation.  
The order in which casting occurs is

```diff
char -> short int -> int -> long -> float -> double -> long double
```

### Unary Operators

The operators which operate only on one operand.  
Eg:- -(unary minus) , ++(increment by 1) , --(decrement by 1).

```c
int i = 1;
printf("%d" , i++); //increments the value to 2 after printing 1.
printf("%d" , ++i); //increments the value to 3 before printing.
```

### Sizeof() operator

This operator always preceedes its operands. It returns the number of bytes taken by the data type.

```c
int a = sizeof(int); //returns 2 or 4 based on the system.
int b = sizeof(char);  //returns 1
int c = sizeof(double); //returns 8
```

## Relational Operators

1.              <         Less than
2.              >         Greater than
3.              <=        Less than equal to
4.              >=        Greater than equal to
5.              ==        Euqal to
6.              !=        Not equal to

The operators == and != are sometimes also called Equality operators.

These 6 operators form logical operations which returns either true(1) or false(0).

## Logical Operators

There are three logical operators.

1.                ||          Logical OR
2.                &&          Logical AND
3.                 !          Logical NOT.

These operators often combine with the relational operators to form more complex logical operations.

In any case if the value of logical operation is given to be any non-zero number it is considered to be true.

## Assignment Operators

The operator (=) is called assignment operator, it assigns value to the variable of compatible data type.

Some other assignment operators which often include arithmrtic operations before assignment of the value.  
Eg:- += , -= , \*= , /= , %=

```c
int a = 9;
int b = 10;
int a+=b;
```

The value comes out to be 19, as += expands to a = a + b;

## Conditional Operators

The syntax of the conditional opertor is as follows :  
(expression 1) ? expression 2 : expression3

If expression 1 is true it evaluates to expression 2 otherwise expression 3.

```c
int a = 0;
int b = 6;
int c = (a < b) ?  a : b;  // returns the minimum of two , in this case it is 0.
```

## Operator Precedence Groups.

1.                  Unary operators       -, ++, --, !, sizeof(), (type)     R to L
2.                  Arithmetic            *, /, %                            L to R
                                 +, -                               L to R
3.                  Relational            <, >, <=, >=                       L to R
4.                  Equality              ==, !=                             L to R
5.                  Logical AND           &&                                 L to R
6.                  Logical OR            ||                                 L to R
7.                  Conditional           ? :                                R to L
8.                  Assignment            =, +=, -=, *=, /=, %=              R to L

### Some Common Mistakes

Consider this snippet:-

1.

```c
int x = 10;
int y = x++ + ++x; //causes undefined behavior in some standards.
```

Relying on multiple side effects may cause unpredictable results. We don't know how the compiler evaluates the line during it's execution.

If x++ is evaluated first then the value comes out to be 120, but if ++x is evaluated first the the value is 121.  
2.

```c
int a = 5, b = 2;
float res1 = a / b;       // Result: 2.0 (Integer division occurs first: 5/2 = 2)
float res2 = (float)a / b; // Result: 2.5 (Explicit type casting forces float division)
```

If none of the variable is fractional, then integer division occurs first.  
3.

```c
if (a = b) { /* This assigns b to a and checks if a is non-zero */ }
if (a == b) { /* This checks if a is equal to b */ }
```

4.  When comparing two numbers, casting is done to the number higher in heirarchy.

```c
unsigned int a = 10;
signed int b = -1;
if (a > b) /* This will be FALSE because b becomes a huge positive number! */
{
    /*Code goes here.*/
}
```

In this case the signed value is converted to unsigned which then starts counting from INT_MAX backwards.

## Bitwise Operator.

There are 6 bitwise operators

1.               &         Bitwise AND
2.               |         Bitwise OR
3.               ~         Bitwise NOT
4.               <<        Left Shift
5.               >>        Right Shift
6.               ^         Bitwise XOR

It is a binary operator.
We perform Bitwise operation Bit by Bit.

Example:

1. Bitwise AND\
   $0 \& 0 = 0$  
   $0 \& 1 = 0$ \
   $1 \& 0 = 0$ \
   $1 \& 1 = 1$

Now Let's perform $7 \& 4$ \
Represent the decimal in binary. \
$0111 \& 0100 = 0100$\
Which evaluates to 4.
