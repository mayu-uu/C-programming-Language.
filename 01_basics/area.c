#include <stdio.h>  //header.

#define PI 3.14159265 //a macro.

int main(){
    float radius , area ; 
    printf("Enter the radius.");
    scanf("%f" , &radius);

    area = PI * radius *radius;
    printf("The area of the ciecle is : %f" , area);
    return 0;
}