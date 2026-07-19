# STRUCTURE AND UNION

## Structure

1. Unlike arrays, structure stores elements of different data types, which may include all the primitve data types as well as pointers, arrays and other structures.

2. Each element of a strcuture is called a member.

3. Keyword _struct_ defines a structure.

4. Members of the structure are stored in the memory in the order in which they are defined.

5. Two member of a same structure can not have same name. But two different structures can have same member names.

6. A structure definition does not reserve space in memory, instead creates a new data type used to declare structure variables.

```diff
struct tag {
    member 1;
    member 2;
    . . . .
    member n;
} variable 1 , variable 2;

struct tag variable 3 , varibale 4;
```

Example:-

```c
struct student{
    char name[40];
    int roll;
    int age;
} s1, students[20], *p;
OR
struct student s1, students[20], *p;
```

7. The memory allocated for the structure is the total memory required by all the data types + some additoinal padding bytes required in between the individual members of the data type.

## Processing a Structure

1. Members of structure are passed on individually as seperate entities. So the member can be accessed by a period(.), that seperated the variable name and from the member name.

2. (.)is a member of the highest precedence group and associates from Left to right.

```diff
structure variable.member;
```

```c
struct student s1;
printf("%s", s1.name);
```

3. The combination of period and member name is called a designator.

4. Assignment operator s1 = s2; but arrays can not be copied using "=" operator.

5. Instead create a dummy structutre to enclose arrays that will be copied later.

6. "=" can be used only when the structure are of compatible types.

7. "==" or "!=" can not be used.

8. Arrow Operator (->) used with pointers to structure variable.

```c
struct student *p = &s1;
printf("%s", p->name);
printf("%s", (*p).name);
```

## User Defined Data Types

1. Creates synonyms (aliases) for previously defined data types.

```diff
typedef <type> <new-type>;
```

Here _type_ refers to the existing data type and _new-type_ represents the user defined data type.

Example

```c
typedef int age;

typedef struct{
    char name[40];
    int roll;
    int age;
} student;
typedef student *studentPtr;
student s1, s2;
studentPtr p1, p2;
```

## Structure and Pointers

1. The beggining address of the structure variable can be accessed in the same manner as any other addresses.

```c
data type *ptvar;
ptvar = &structure variable;
```

Example:-

```c
typedef struct {
    int acc_no;
    char acc_type;
    float balance;
}account;

account customer,*pc;

//Now we can point the pointer pc to customer.
pc = &customer.

//Accesssing members of the structure pointer.
int i = pc -> acc_no;
int j = (*pc)acc_type;
```

## Passing Structures to Functions

1. Structure can be passed as arguments to the function.

2. The inidviadual members can also be passed.

```c
void printStudent(student s){
    printf("Roll : %d\n", s.roll);
    printf("Age : %s\n", s.age);
    printf("Name : %d", s.name);
}
...
student s1 = {"abc", 1234, 20};
printStudent(s1);
...
student s1 = {"abc", 1234, 20};
printStudent(s1);
```

3. Functions may have structure as return values.

```c
student buildStudent(char *name, int roll, int age){
    student s;
    strcpy(s.name, name);
    s.roll=roll;
    s.age=age;
    return(s);
}
...
student s1 = buildStudent("abc", 1234, 20);
```

## Nested Structure

1. A structure can be passed onto another structure.

2. In this case we get a submember of a member of a structure which contains another structure.

```c
typedef struct{
    char first[20];
    char middleInitial;
    char last[20];
} personName;
typedef struct{
    personName name;
    int roll;
    int age;
} student;
student s1, s2;
strcpy(s1.name.first, "ABC");
s1.name.middleInitial='C';
strcpy(s1.name.last, "XYZ");
```

## Unions

1. Compiler allocates space for the largest of the members.

2. Assigning a new value to one member alters the values of the other members as well.

3. Union declarations ⇒ same as structures

```c
typedef union{
    int x;
    unsigned char c[4];
} Number;
Number n;
int i;
n.x=10;
for(i=0;i<4;i++)
printf("%d ", n.c[i]); /*Output 10 0 0 0*/
```

4. Only the first member of a union can be given an initial value.

5. Designated initializer can be used to initialize only one member which need not be the first one.

6. Size of a union is the size of it’s largest member. This is used to conserve memory.

Suppose we define a union as follows:-

```c
typedef union{
    int name; //requires 4 bytes
    int marks[6];  //total bytes = 6*4 = 24 bytes
    char name[20]; //total 20 bytes
}
```

The memory allocated for the union is only 24 bytes which is the highest memory of the data-type defined inside the union.
