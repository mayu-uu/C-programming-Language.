//Program to compare two integers and print the greater one using the conditional operator
#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    int c = (a > b) ? a : b;
    printf("The greater number is: %d\n", c);
    return 0;
}