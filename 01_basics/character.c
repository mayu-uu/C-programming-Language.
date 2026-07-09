#include <stdio.h>

int main(){
    char c;
    printf("Enter a single character:\n");
    scanf("%c" , &c);
    int n = c;
    printf("The ADCII value is:%d\n" , n);
    return 0;
}