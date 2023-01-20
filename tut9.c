#include<stdio.h>
#define PI = 3.14 // Preprocessing statements

int main()
{
    const int a = 40;
    // a = 55; // Can not do this since a is an constant

    // PI = 4.00; // Can not do this since a is an constant
    printf("\a %d", a);

    return 0;
}
