# FUNCTION

1. Functions are series of statements grouped together and given a name.

2. Each function is essentially a small program with its own declarations
   and statements.

3. Functions are reusable.

4. It takes some input, but that is not necessary.

## Function Definition

```diff
return-value-type function-name( parameter-list )
{
    declarations and statements
}
```

1. Declarations and statements: function body (block)\
   a. Variables can be declared inside blocks (can be nested)\
   b. Functions can not be defined inside other functions.\

2. Returning control\
    If nothing returned

   ```
   return;
   ```

   or, until reaches right brace\
    If something returned

   ```
   return expression;
   ```

3. A function can return only a single result.

4. Each function definition can have multiple return statements each of which may return different results.

## Parameter Types

1. **Formal Parameters** - Formal parameters are local variables within the function. Formal parameters are assigned values from the corresponding actual parameters when the function is called.

2. **Actual Parameters** - Expressions with which a function is called. These are the data items that are actually transferred.

```c
int myAdd(int x, int y){
    int z;
    z = x + y;
    return z;
}
int main(void){
    int a=5, b=3, c;
    c = myAdd(a, b);
    c = myAdd(a+b, b);
    c = myAdd(2+3, 6*b);
}
```

In the above snippet, _x , y_ are formal parameters whereas _a , b_ are actual parameters.\
Value of actual parameter _a_ is copied into the formal parameter _x_.

## Function Prototype

1. A function must be defined before it is called for the first time.

2. But many programmers prefer top-down approach where, main() function is at the top and the function definition preceeds the main() function.

3. In those cases, function prototype is used to declare the function, so that compiler doesn't get confused and the function definition can be written after main() function.

4. A function prototype specifies function's name, type, number of parameters, type of each parameter and return type.

```c
int myAdd(int x, int y);
int myAdd(int, int);
int myAdd(int p, int q);
```

The above given are the different forms of function prototype, anyone of which is valid.

## Passing Arguments to a Function.

1. When a single value is passed to a function via an actual argument, the value of the actual argument is copied into the function.

2. Theere the value of the corresponding formal argument can be altered within the function, but the value of the actual argument within the calling routine will not change.

3. This procedure for passing the value of an argument to a function is known as _passing by value._

```c
int main(){
    int a = 2;
    printf("Value of a before function is called :%d\n " , a);
    modify(a);
    printf("Value of a after function is called :%d\n " , a);
}

void modify(int n){
    a *= 3;
    printf("Value from the function : %d\n" , a);
    return;
}
```

**Output**

```c
Value of a before function is called :2
Value from the function : 6
Value of a after function is called :2
```

## Passing Arrays as Arguments

```c
int arrAdd(int a[], int n){
    int i, sum = 0;
    for(i=0;i<n;i++)
    sum = sum + a[i];
    return(sum);
}
int main(){
    int ar[]={1, 2, 3, 4};
    printf("%d\n", arrAdd(ar, 4));
}
```

In a similar way multi-dimensional array can also be passed.

## Recursion

1. Recursion is a process by which a function calls itself repeatedly until some specified condition is met.

2. It is used in those computations where each term in action is stated in terms of previous actions.

Two types of recursion.

a. Direct Recursion

```c
void A(void){
    ...
    A();
    ...
}
```

b. Indirect Recursion

```c
//Note that here B is called before it is defined, so better to give a function prototype of both functions.
void A(void){
    ...
    B();
    ...
}

void B(void){
    ...
    A();
    ...
}
```

## Some Common Mistakes

1.

```c
#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    printf("a = %d, b = %d\n", a, b); // Expecting: 20, 10
    return 0;
}
```

One expects to get the output as swapped, but actually due to pass by value the argument is copied and those formal arguments are swapped , practically keeping the values same.\
The method to avoid this is to pass the value by reference, where instead of passing the copy we pass the addess of the actual arguments and change them.

```c
#include <stdio.h>

// Receives memory addresses
void swap(int *x, int *y) {
    int temp = *x; // De-reference to get the value
    *x = *y;       // Put the value at address y into address x
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b); // Pass memory addresses
    printf("a = %d, b = %d\n", a, b); // Output: a = 20, b = 10
    return 0;
}
```
