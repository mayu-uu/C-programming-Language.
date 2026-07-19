# INPORTANT QUESTIONS FROM STRUCTURE AND UNION

## Question-1

What will this program print ?

```c
#include <stdio.h>

struct Flags {
    unsigned int status : 1;
};

int main() {
    struct Flags f;
    f.status = 1;
    printf("%u ", f.status);

    f.status = 2;
    printf("%u\n", f.status);
    return 0;
}
```

**Solution**

In the Flags structure we define a bitfield which forcefully allocates only 1 bit for an unsigned integer whereas it is generally 4 bytes or 32 bits.

Now when f.status = 1 ; we need to check the binary of the assigned value. Here it is $1$ so it successfully allocates 1 in the memory.

But when 2 is assigned, we can check that $2 = 10$ which requires 2 bits but we gave only 1 bit, so it prints the bit from Left to Right so it can take 0 as it's value so it printf 0.

**Output**

```diff
1 0
```

## Question -2

What will be the output of this code ?

```c
#include <stdio.h>

struct MemoryTrap {
    char c1;   // 1 byte
    int i;     // 4 bytes
    char c2;   // 1 byte
};

int main() {
    printf("Size of struct: %lu bytes\n", sizeof(struct MemoryTrap));
    return 0;
}
```

**Solution**
CPUs read memory in chunks (words) of 4 or 8 bytes at a time for optimal performance. If a 4-byte int is split across two memory chunks, the CPU has to make two memory reads instead of one, slowing the system down.

To prevent this, the compiler performs Structure Padding. It inserts invisible, useless "slack bytes" to ensure every member aligns perfectly with boundaries that match its size.

$\implies$ c1 takes 1 byte. The compiler inserts 3 padding bytes so the next int can start on a clean 4-byte boundary.

$\implies$ i takes 4 bytes cleanly.

$\implies$ c2 takes 1 byte.

$\implies$ The compiler appends 3 padding bytes at the end so the entire structure's size is a multiple of 4.

Total: $1 + 3\text{ (pad)} + 4 + 1 + 3\text{ (pad)} = 12\text{ bytes}$.
