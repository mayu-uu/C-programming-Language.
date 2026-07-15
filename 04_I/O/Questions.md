#IMPORATANT QUESTIONS BASED ON I/O IN C

## Question 1.

What is the output of the following snippet ?

```c
int main(){
    int x ;
    x = printf("Hello\n");
    printf("%d" , x);
    return 0;
}
```

**Solution**

printf() actually returns an integer, which is equal to the total number of characters.\
Here "Hello\n" has total 5 + 1 = 6 characters so it returns 6.\
Also the printf("Hello\n"); is executed.

**Output**

```diff
Hello
6
```

## Question 2

What will x be if the user inputs 10 and abc ?

```c
#include <stdio.h>
int main() {
    int num1, num2;
    int x = scanf("%d %d", &num1, &num2);
    printf("Returned: %d\n", x);
    return 0;
}
```

**Solution**

scanf() returns the number of successfully matched and assigned items.\
The first input 10 successfully matches %d (assigned to num1).\
The second input abc does not match %d (integer). scanf aborts.\
Since only 1 item was matched, scanf returns 1. If both were correct integers, it would return 2. If the input failed entirely or reached the End-Of-File, it would return EOF (typically -1).

**Output**

```diff
1
```

## Question 3

What will the output of this code be ?

```c
#include <stdio.h>
int main() {
    int a = 0, b = 0;
    scanf("%d %*d %d", &a, &b); // Input: 10 20 30
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
```

**Solution**

'\*' inside a specifier completely skips the assignment of the value to particular variable.

10 goes to a.

20 is matched by %\*d and thrown away.

30 goes to b.

## Question 4

What on earth does %*.*f mean in printf ?

```c
#include <stdio.h>
int main() {
    double pi = 3.14159265;
    int width = 8;
    int precision = 3;
    printf("|%*.*f|\n", width, precision, pi);
    return 0;
}
```

**Solution**
In printf, the asterisk '\*' allows us to pass the width and precision as dynamic variables inside the argument list, rather than hardcoding them into the format string.

The first '\*' is replaced by width (8).

The second '\*' is replaced by precision (3).

This behaves exactly like printf("|%8.3f|\n", pi);.
