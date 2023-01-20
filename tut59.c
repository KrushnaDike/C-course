// C PREPROCESSORS

#include<stdio.h>
#include "tut49.c" 
#define PI 3.14 
#define SQUARE(r)r*r // Macros

int main()
{
    int r = 4;
    float var = PI;

    printf("The value of PI is: %f\n", PI);
    printf("The radius of circle is: %f", PI * SQUARE(r));

    return 0;
}