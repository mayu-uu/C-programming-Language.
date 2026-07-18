# SOME IMPORATNT QUESTIONS FROM POINTERS

## Question-1

What will this code print ?
#include <stdio.h>

```c
int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr; // Points to 10

    printf("%d ", *ptr++);
    printf("%d\n", *ptr);
    return 0;
}
```

**Solution**

At first the \*ptr is evaluated which points to 10 and indirects it. After that the pointer moves one position forward to next index.

So it prints 20.

## Question-2

What is the difference between these three declarations ?

```c
const int *ptr1;
int * const ptr2;
const int * const ptr3;
```

**Solution**

const int \*ptr1; $\rightarrow$ ptr1 is a pointer to a constant integer.

int \* const ptr2; $\rightarrow$ ptr2 is a constant pointer to an integer.

const int \* const ptr3; $\rightarrow$ ptr3 is a constant pointer to a constant integer.

## Question-3

If arr is an array of 5 integers, what is the difference between arr + 1 and &arr + 1 ?

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("arr + 1:  %p\n", (void*)(arr + 1));
    printf("&arr + 1: %p\n", (void*)(&arr + 1));
    return 0;
}
```

**Solution**

arr + 1 moves the pointer to the second element of the array (arr[1]). It increments the address by $1 \times \text{sizeof(int)} = 4 \text{ bytes}$.

&arr + 1 treats &arr as a pointer to the entire array of 5 integers. Adding 1 skips the entire array structure. It increments the address by $5 \times \text{sizeof(int)} = 20 \text{ bytes}$, pointing to the memory space immediately after the array ends.
