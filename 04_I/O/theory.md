# Data Input and Output

## Single Character I/O

1. single character can be entered using a C library function 'getchar()'. It returns a single character input from the input device to the computer.

**Syntax**

```diff
character variable  = getchar();
```

2. Single characters can be displayed using another C library function 'putchar()'. This function is complementary to getchar().

**Syntax**

```diff
putchar(character varibale);
```

**Example**
C program illustrating the input and output of single character.

```c
#include <stdio.h>

int main(){
    char c = getchar();
    putchar(c);
    return 0;
}
```

Let us say we type in 'G'.

**Output**

```diff
+Successfully compiled.
G
```

**Example**
C program to enter a string using single character I/O functions.

```c
#include <stdio.h>

int main(){
    char s[80];

    for(int i = 0 ; (s[i] = getchar()) != '\n' || c != 'EOF' ; i ++){
        putchar(s[i]);
    }
    return 0;
}
```

This program takes in a character array of 80 length. Now the getchar() is checked for '\n' or 'EOF'(End of File , whose value is generally -1). If the index either reaches the end of the length or flags a newline or EOF character, it stops taking the value and marks the end of string.

## scanf() and printf() function

"scanf()" - Reads the formatted Input from the keyboard or any input device(stdin).

"printf()" - Sends the formatted Input to the display screen(stdout).

To take Input or Output , the data type must be specified in the form of specifier. Incorrect Specifier may lead to a failed execution.

1.                   %d / %i	     Signed Integer
2.                      %u	         Unsigned Integer
3.                      %f	         float (decimal notation)
4.                      %lf          double (used in scanf for doubles)
5.                      %c           Single Character
6.                      %s           String (character array)
7.                      %p           Pointer (Memory Address)
8.                    %x / %X        Hexadecimal
9.                      %e           Scientific Notation Floating point
10.                 %g           Shortest of %f and %e

## More about scanf()

1. Suppose , while entering a srting we enounter a blank space or '\n', then the scanf("%s" , string); automatically stops taking input as soon as it encounters a whitespace, and a null character is automatically appeneded to the end of the string.

_Example_
Suppose we entered GitHub
The string would look like GitHub\0

2. Now , if we want to enter a string , including spaces without using single character I/O. We use a square bracket([...]).
   Any character or string entered inside the square bracket will be taken as Input.

3. While using a ^(circumflex) at the beggining will tell the scanf() to take the input till that subsequent character inside the box if found.

**Example**

Suppose we want only Capital Letters to be taken as Input, then

```c
int main(){
    char line[100];
    scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line); //notice that whitespace is included at the beggining ,so it will be a valid input.
}
```

Now Suppose we take input except '\n', then

```c
int main(){
    char line[100];
    scanf("%[^\n]" , line);
}
```

4. In case , the field and width is mentioned, if the data item contains fewer characters than mentioned, next data item will be read.

5. If before finshing the field width scanf() encounters a whitespace iit moves onto take the Input of next data from the Input.

```c
#include <stdio.h>

main(){
    int a, b, c;
    scanf("%3d %3d %3d", &a, &b , &c);
    printf("a =%d , b = %d , c = %d" ,a , b , c);
}
```

Suppose Input is given as

```diff
#1 1 2 3

#2 123 456 789

#3 1234 5678 9

#4 123456789
```

Output

```diff
#1 a = 1, b = 2, c =3.
#2 a = 123 , b= 456 , c =789
#3 a = 123 , b = 4 , c =567
#4 a=123, b=456, c=789
```

## Common Mistakes

1. Ignoring the new-line character is most common mistake. When we enter an Input and hit 'Enter' a new line character gets stored into the input buffer.\
   This will not cause problem if the next input is a number. But if it is a character, Then it will immediately read that '\n' and complete taking input.\
   \
   The way out is to read the newline character before taking character input.

```c
#include <stdio.h>

int main(){
    int a;
    char c;

    scanf("%d" , &a);
    char s = getchar();
    scanf("%c", &c); // or instead of getchar use a space before specifier scanf(" %c" , &c);
    return 0;
}
```
