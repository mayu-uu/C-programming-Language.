# IMPORTANT QUESTIONS RELATED TO CONTROL STATEMENTS

## Question 1

How many time the statement "Hello , world" will be printed ?

```c
#include <stdio.h>

int main(){
    int i = 1024;
    for(; i ; i >> 1){
        printf("Hello , world");
    }
    return 0;
}
```

**Solution**\
i = 1024 = $2^{10}$ = 10000000000 in binary.\
after 1 iteration i = $2^9$ = 1000000000 in binary.\
So after 10 iterations , i = 1.\
So in the next iteration i = 0 then the for loop does not execute hence the statement will get executed 11 times.

## Question 2

How many times "Git" will be printed ?

```c
int i = -5;
while(i <=5){
    if(i >= 0){
        break;
    }
    else{
        i++;
        continue;
    }
    printf("Git");
}
```

**Solution**\
For any increment upto 0, printf is not executed as continue statement passes the control to next loop before printing.\

When i = 0 , the if condition becomes true and is executed, but the break statement passes the control directly out of the while loop thus leaving the print statement un-executed.

Hence, "Git" is printed 0 times.

## Question 3

What is the output of the following snippet ?

```c
int main(){
    int i = 0 ;
    for(printf("one\n"); i < 3 && printf(""); i++){
        printf("Hi\n");
    }
    return 0;
}
```

**Solution**

It should be remembered that printf returns the number of characters in the string.\
Here for printf("one\n");\
The number of characters is 4.\
Then for the condition i = 0 < 3 is satisfied it returns 1 but printf(""); returns 0, and hence 1 && 0 is 0 , condition not fulfilled hence loop will never execute.\

**Output**

```
one
```

## Question 4

What is the output of the following snippet ?

```c
int main(){
    unsigned int i = 500;
    while(i++ != 0);
    printf("%d" , i)
    return 0;
}
```

**Solution**

Considering unsigned int to be 4 bytes long , it's value ranges from $0$ to $2^{32} - 1$, so the while loop gets executed till the number reaches $2^{32}-1$, after that it increments and i again returns to 0 due to range overflow.\
Then the while condition is not satisfied and hence it breaks out of the loop and the answer is printed as 0++ = 1.

**Output**

```
1
```

## Question 5

What is the output of the following snippet ?

```c
int main(){
    int x = 3;
    if(x == 2); x = 0;
    if(x == 3) x++;
    else x+=2;

    printf("x = %d" , x);
    return 0;
}
```

**Solution**

After executing x==2 block, x becomes 0 (note the semicolon), then x==3 does not execute as x = 0 ;
so x+=2 increments the value by 2.

**Output**

```
x = 2
```
