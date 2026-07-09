# Topic : Introductory Concepts.

## Structure of a C program:

1. **It contains one or more function, one of which must be main function, as program always begins by executing main functions.**

2. **It contains one or more header file.**

3. **It has a list of arguments and declarations.**

4. **It might contain macros.**

5. **A macro and a header file is preprocessed, so it not compiled rather it is preprocessed before compilation.**
```c 
#include <stdio.h> //stdio is a standard I/P and O/P header file.

int main(){        //The main function from which every other fuunction might be called
    printf("Hello , everyone!");
    return 0;      //This returns 0 to the OS
}
```

```diff
+Code is succesfully compiled.
```
**return 0** - it serves as an indicator for normal termination. Any non zero value will mean abnormal execution.

**exit(0)** - an alternate to return. If both return and exit() is not mentioned , it is automatically taken to be 0. 

## C Fundamentals

### Keywords and Identifiers.
Identifiers are name given to different variables, it always starts with a letter.

Whereas ,  keywords are reserved words which can not be used by user.

eg:- auto , break , return , register.

### DATA TYPES

In C programming, data types are declarations that tell the compiler what kind of data a variable will hold, how much memory to allocate for it, and how to interpret that memory.

Some of the data types are : int , float , double , short and many more.

Different data types include-
**Primary data types** - int-4 bytes , float- 4 bytes(single precision floating point), char- 1 byte, double- 8 bytes.void - represents an empty set of values.

**Derived data types** - arrays, strcutures , unions, pointers.

**Qualifiers** - primary data types can be modified using *short* , *long* , *unsigned* , *signed*.

### Constants

**Octal** - octal number is represented using %o specifier and also 0 is written at the beginning.

**Hexadecimal** - hex is represented using %x and 0x is written to identify it as an hexadecimal number.

*limits.h* - header file that contains the maximum and minimuum values of each integer type.


**THE OUTPUT OF Program limit.c is**
```diff
The maximum value of UNSIGNED CHAR = 255
The minimum value of SHORT INT = -32768
The maximum value of SHORT INT = 32767
The maximum value of UNSIGNED SHORT INT = 65535
The minimum value of INT = -2147483648
The maximum value of INT = 2147483647
The maximum value of UNSIGNED INT = 4294967295
The minimum value of CHAR = -128
The maximum value of CHAR = 127
The minimum value of LONG = -9223372036854775808
The maximum value of LONG = 9223372036854775807
The maximum value of UNSIGNED LONG = 18446744073709551615
```

**Specifiers for floating points** - *%f* for decimal floating point.  *%e* - for scientific notation.   *%g* - shortest of two previous representation.

### Character data type

1. ASCII character set is used. Value varies from 0 to 255.

2. Written within single quotes. eg:- 'A' , '0' , '\n'.

3. \n, \t, \\\ , \b are escape sequences.

4. 'A' is from 65 and 'a' is from 97.

5. formatted output is written as %m.pX where *m* is the minimum field width, *p* is the precision. *X* is is the variable.
