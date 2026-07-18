# POINTERS

## Fundamentals

1. A pointer is a varibale that points to the memory address of another variable.

2. Type of pointers define the type of variable it can point to.

3. The memory of a variable can be accessed through a unary operator "&"(ampersand) - _Unuary address of operator_.

4. The value at the particular address can be accessed by using the operator "*" - *Unary Dereferncing Operator\*

```c
int x=99;
int *p1, *p2;
p1=&x;  //points to the memory address.
p2=p1;
printf("%p, %p %d %d\n", p1, p2, *p1, *p2);  //%p - prints the memory address.
```

5. Declaring a pointer type variable only allocates space for it.

6. A pointer type variable must be initialized before used with an indirection operator.

7. The address operator can not act upon arithmetic expression.

8. A pointer can point to character variable , array , another pointer, function and it can even point to null value.

## Passing Pointers to Functions

1. Pointers can be passed to a function in the form of arguments.

2. This allows the calling portion to directly access the data and modify it.

3. This method of passing the pointers as arguments is known as - **Pass by Reference.**

```c
void swap(int *a, int *b){
    int t; t=*a; *a=*b; *b=t;
}
main(){
    ...
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
}
```

## Pointers as Return Values

1. A function can return pointer which is passed as an argument.

2. A function could also return a pointer to an external variable or to a local variable that has been declared static.

```c
int *max(int *a, int *b){
if(*a > *b)
    return a;
else
    return b;
}
int main(){
    int *p, i=2, j=5;
    p=max(&i, &j);
}
```

3. Once f() returns memory location corresponding to local variable is de-allocated; some compilers issue warning messages.

```c
int *f(void){
    int i;
    ...
    return &i;
}
```

## Pointers and One-Dimensional Arrays

1. The name of an array is a pointer to it's first elements.

2. The address of the first element of an array of integers **int x[n]** , can be written as &x[0] or (x+i).

3. Similarly , the address of i-th term of the array can be written as &x[i] or (x+i)

4. Here the expression (x+i) doesnt represent any arithmetic opertion of pointer and integer, rather it is simply representing the poisiton of i-th element.

5. The value at the i-th position of tan array can be written as x[i] or \*(x+i).

```c
int a[3] = {1, 2, 3}, *p;
p = a; p = &a[0];
printf("%p", &a[1]); // address of 2nd element
printf("%p", a+1);   // address of 2nd element
printf("%d", a[1]);  // value at index-1.
printf("%d", *(a+1)); //value at index-1.
```

```c
int *p[3]; /*array of 3 pointers to int*/
int (*q)[3]; /*pointer to array of 3 int*/
int a[3]={1, 2, 3};
int *e;

q=a;/*produces warning: assignment from incompatible
        pointer type*/

q=&a;
printf("a=%p &a=%p q=%p, *q=%p\n", a, &a, q, *q);

/*All four prints the same address*/

e=&a /*produces warning: assignment from incompatible
        pointer type*/
e=a;
printf("e=%p, *e=%d\n", e, *e);
```

6. The address operator to a element of an array is not a valid L-value.

7. A void* pointer can be assigned to any other type of pointer or any other pointer to a void* pointer

8. No explicit cast is required to convert to or from a void \* pointer

## Dynamic Memeory Allocation

1. In case the memory is allocated statically, the storage is allocated before the program is run.

2. Since an array is a pointer to the first element within the array, it is possible to define the array as pointer variable rather than a conventional array.

3. To create new storage when the program is running use **malloc** ⇒ returns a pointer to the allocated memory, or NULL if the request fails.

4. **free()** - de-allocates memory.

5. Suppose we want to create a dynamic array that can contain upto 100 integers, then

```c
int *arr = (int *)malloc(100 * sizeof(int));
```

as every integer takes 2-4 bytes for int, so it creates an array of size 200 or 400 bytes based on architechture.

But here we can have less than 100 elements and it will not allocate any value for the rest un-initialised elements.

## Operation on Pointers

The valid pointer arithmetics are:-

1. Subtracting two pointers is valid but adding two pointer variables is invalid.

2. An integer can be added to a pointer.

3. An integer can be subtracted from a pointer.

However , operations like multiplication and division of an integer to a pointer is not possible.

4. Subtracting one pointer from other pointer is valid only if both the pointer belongs to the same array.

5. Pointers can be compared using relational operators, provided that both are of same data type.

## Pointers and Multi-dimensional array

1. A 2-D array can be defined as a pointer to a group of contiguous one dimensional arrays.

```diff
<data-type> (*ptvar)[expression 2];
```

Parenthesis must be present because we are trying to get a pointer to a group rather than an array of pointers.

2. Again those one dimensional arrays can be defines using a pointer.

```diff
<data-type> **pvtar;
```

Suppose we want to declare a 2-D array consisting of 10 rows and 20 columns.

Declaring the array using a static array.

```c
int a[10][20];
```

Declaring using a dynamic array

```c
int **a = (int **)malloc(10*sizeof(int *));
for(int i = 0 ; i < 20 ; i++){
    *(a+i) = (int *)malloc(sizeof(int)*20);
}
```

At first we define the rows, we use double pointer (pointer to a pointer), because we will make an array for each successive row.

Suppose now we want to access the element at 5th row and 2nd column.

```c
//directly accessing.
int x = a[5][2];
//using positional value by pointer arithmetic.
int y = *(*(x+5)+2);
```

## Arrays of Pointers

1. A multidimensional array can be also declared using an array of pointers where each pointer points to the first element of another array, thus contiguously storing the array inside an array.

Syntax

```diff
<data-type> *array[expression 1];
```

## Passing Functions to Other Functions

1. A function can be passed to another function's arguments in the form of a pointer to a function.

2. Let us say the funtion that is to be passes - _guest function_ and the function to which it is passes - _host function_

3. Now lets define the guest function which has a data-type and some arguments

Example:

```c
int func1(int arg1 , int arg2 , float arg3, ...);
```

4. Now lets us suppose that the host function takes some arguments.

```c
int host (int (*ptf)(int , int , float , ...) , int arg1 , float arg2 , float arg3 , ...)
```

So whenever the host function is called , it takes the normal arguments as well as the argument of pointer to a guest function which essentially returns the same data type as mentioned inside the function prototype of host.

Example:

```c
int func1(int , int);
int func2(int, int);
int process(int *(pt)(int,int));

int main(){
    int i, j ;
    ....
    i = process(func1);
    j = process(func2);
}
```
