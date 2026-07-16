#include <stdio.h>

long int factorial(int);

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("The factorial is :%d\n", factorial(n));
    return 0;
}

long int factorial(int n)
{
    int i;
    long int prod = 1;
    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            prod *= i;
        }
    }
    else
        return -1;
    return prod;
}