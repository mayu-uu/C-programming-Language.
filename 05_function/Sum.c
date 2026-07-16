#include <stdio.h>

int sod(int);

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("The sum of the digits is:%d\n", sod(n));
    return 0;
}

int sod(int n)
{

    if (n <= 9)
    {
        return (n);
    }
    return (n % 10 + sod(n / 10));
}