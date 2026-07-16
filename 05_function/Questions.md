# SOME IMPORTANT QUESTION FROM FUNCTIONS

## Question-1

What is the difference between these two declarations ?

```c
void func1();
void func2(void);
```

**Answer**
void func2(void) strictly takes zero arguments. If you pass an argument to it (e.g., func2(5)), the compiler will immediately throw an error.

void func1() in C traditionally means the function can take any unspecified number of arguments.

Note: Under old standard C rules, func1(1, "hello", 3.5) would compile perfectly fine without warning.

## Question-2

What will this program print ?

```c
#include <stdio.h>

void print_size(int arr[]) {
    printf("Size in function: %lu\n", sizeof(arr));
}

int main() {
    int my_arr[10] = {0};
    printf("Size in main: %lu\n", sizeof(my_arr));
    print_size(my_arr);
    return 0;
}
```

**Solution**
In main(), my_arr is a true array of 10 integers. Since each int is 4 bytes, sizeof(my_arr) is $10 \times 4 = 40$ bytes.

However, arrays cannot be passed by value to functions in C. Instead, when you pass an array to a function, it "decays" into a pointer to its first element.

Therefore, inside print_size(), arr is treated as a simple int\* pointer. On a 64-bit system, all pointers are 8 bytes in size, resulting in 8.

**Output**

```diff
Size in main: 40
Size in function: 8
```

## Question-3

What is value returned by func(435) ?

```c
int func(int num){
    int count = 0;
    while(num){
        count++;
        num>>=1;
    }
    return count;
}
```

**Solution**

Binary representation of 435 = (110110011)

whenever num != 0 , the count increases, after 9 bits shifted to right, num = 0;\
Hence the loop continues for 9 iterations.

**Answer = 9**
