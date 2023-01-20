#include<stdio.h>

int main()
{
    int a = 345;
    float b = 3.4;
    void *ptr;
    ptr = &a;
    printf("The value a is : %d\n", *((int*)ptr));
    ptr = &b;
    printf("The value b is : %f\n", *((float*)ptr));

    return 0;
}