# CONTROL STATEMENTS

## 'if', Statement

1. It is used to carry out logical steps only when the condition inside it is true, otherwise the statements under the 'if' condition does not get evaluated.

2. The statements inside the if condition is evaluated either to '0' or '1', and the condition is true whenever the logic is '1'.

```diff
if(condition){
    //executes if the condition is true.
}
```

## 'if-else' , Statement

1. It provides condition for both true and false statements, but the condition of 'if' must negate the condition of 'else'.

2. The condition is first checked for 'if' statement if it is true(1) then the 'if' block gets executed otherwise the 'else' block is executed.

```diff
if(condition){
    //true block
}

else{
    //false block
}
```

Example:

```c
int max=0;
if(i>j){  //if it evluates to 1 then
    max = i;  //it means i is largest among two numbers.
}
else{  //if the condition inside 'if' evaluates to 0 then
    max=j;  //j > i hence j is greater out of two.
}
```

### 'if-else-if' Ladder

1. When the condition is broken down to multiple condition, then each condition can be checked using multi-level 'if-else-if'.

2. Care needs to be taken when dealing with these situations cause, the whole 'if-else-if' ladder gets executed single time , so whenever a condition is met, the statements under those conditions are exectuted.

```diff
if (cond1) {
    // ...
} else if (cond2) {
    // ...
} else if (cond3) {
    // ...
} else {
    // default
}
```

**Example of Nested 'if':**\
To find out the maximum out of three numbers using if-else-if

```c
if (i > j) {
    if (i > k)
        max = i;
    else
        max = k;
    }
else{
    if(j > k)
        max = j;
    else
        max = k;
}
```

## 'While' Statement

1. Used to carry out looping opration.

2. The condition is evaluated before each iteration.

3. Loop runs till the condition inside the while is 1, It stops when the condition evluated comes out to be 0.

```diff
while(condition){
    //statements
}
```

Example:

```c
i = 1;
while(i <= 5){ /* Controlling expression */
    printf("Hello\n"); /* Loop body */
    i++; //evaluation.
}
```

**Output**

```diff
Hello
Hello
Hello
Hello
Hello
```

Example:

```c
i = 1;
while(2){ /* Controlling expression */
    printf("Hello\n"); /* Loop body */
    i++;
}
```

```diff
!runtime error
```

Here the loop never terminates because the condition is a non-zero constant which never turns 0.

## 'do-while' Statements

1. This is almost analogous to while control statements , the only difference is that the condition is checked or evaluated at the end of the loop, after it gets executed.

```diff
do{
    //statements
}
while(condition);
```

Examples:

```c
do {
    n = n / 10;
    digits++;
}
while (n > 0); //The condition.
```

## 'for' Loop

1. It is very closely related to while control statement.

2. It requires 3 expressions to work, if any one of them is not defined then loop will not execute.

```diff
for(statement 1; statement 2; statement 3){
    //statements
}
```

The statement 1 is actually the initialization of loop, statement 2 is the actual conditionl, and statement 3 is the evaluation of the current stage of iteration.\

Each 'for' loop contains exactly two semicolons(;), if one of it misses, it will lead to error. Keeping the semicolons, if we remove the expressions then the loop will executes as long as the other statements are mentioned somewhere else.

Example:

```c
for(int i = 0 ; i < 10; i ++){
    //statements
}
```

```c
int i = 0 ;
for(; i < 10 ; i++){
    //statements
}
```

```c
int i = 0 ;
for( ; i < 10; ){
    //statements
    i++;
}
```

### Multiple variables inside for loop

We can use mulitple variables inside the condition for a for loop where each variable must be seperated with comma.

```c
int i , j;
for(i = 0, j = 0 ; i != j ; i++,j--){
    //statments
}
```

## Exiting From A Loop

1. The loop can be exited even before finishing the current iteration by the help of two statements:- _break_ , _continue_.

### Break statements

1. It can be used to jump out of the current loop.

2. It transfers the control out of the innermost loops of - while, for and switch.

```c
for (d = 2; d < n; d++){
    if (n % d == 0)
    break;
    }
    if (d < n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);
```

In the above code whenever a number divisible by d is found , it breaks out of the 'for' loop and prints the output.

## Continue Statements

1. Unlike break, which transfers the control out of the loop, a continue statement is used to bypass the remaining part of a particular iteration.

2. The loop does not terminate after a 'continue' statement. Rather the remaining loop is skipped and computation proceeds directly to the next loop.

```c
int n = 0 ;
int sum = 0;
while(n < 10){
    scanf("%d" , &i);
    if(i==0){
        continue;
    }
    sum+=i;
    n++;
}
```

## Goto Statement

1. Goto jumps to any statement unconditionally, provided that the statement has a label.

2. A label is an identifier placed at the beginning of a statement.

```diff
    goto identifer :
    identifer : statement
```

Example:

```c
for (d = 2; d < n; d++){
    if (n % d == 0)
    goto done:
}
    done: if (d < n)
    printf("%d is divisible by %d\n", n, d);
else
    printf("%d is prime\n", n);
```

## Switch Statement

1. Used when we need to compare an expression against a series of values to see which one it currently matches.

2. A constant expression is much like an ordinary expression except that it can’t contain variables or function calls.

3. The constant expression must evaluate to an integer(character also acceptable).

4. Break Statement must be given after every case statements, otherwise the control will fall to the next case till any break statement is found or the case ends.

5. Having deafult case if optional.

6. Default can be placed anywhere in the cases, it will still get evaluated if no match is found.

7. Macros can also be used in place of switch constant expression.

8.

```diff
switch ( expression ) {
    case constant-expression : statements
    ...
    case constant-expression : statements
    default: statements
}
```

Example:

```c
switch(grade){
    case 4: printf("Excellent"); break;
    case 3: printf("Good"); break;
    case 2: printf("Average"); break;
    case 1: printf("poor"); break;
    case 0: printf("Failing"); break;
    default: printf("Illegal grade"); break;
}
```

### Case Ranges

1. There is a brilliant way to specify ranges for the cases inside a switch statement in C(not found in ISO standard C).

2. -pedantic option directs GCC to write a warning message if any of these features is used. Like - Be careful: write spaces around the ...

Example:

```c
main(){
int data[10] = { 5, 4, 10, 25, 60, 47, 23, 80, 14, 11}, i;
for(i = 0; i < 10; i++) {
switch (data[i]) {
    case 1 ... 10:
    printf("%d in range 1 to 10\n", data[i]);
    break;
    case 11 ... 20:
    printf("%d in range 11 to 20\n", data[i]);
    break;
    case 21 ... 30:
        printf("%d in range 21 to 30\n", data[i]);
    break;
    case 31 ... 40:
    printf("%d in range 31 to 40\n", data[i]);
    break;
    default:
    printf("%d Exceeds the range\n", data[i]);
    break;
    }
  }
}
```
