#include <stdio.h>

void changeValue(int *add)
{
    *add = 345;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int add(int *x, int *y)
{
    return ((*x) + (*y));
}

int sub(int *x, int *y)
{
    return ((*x) - (*y));
}

int main()
{
    // int a = 34;
    // printf("The value of a is %d\n", a);
    // changeValue(&a);
    // printf("The value of a is now %d\n", a);

    // int a = 45;
    // int b = 55;

    // printf("%d and %d\n", a, b);
    // swap(&a, &b);
    // printf("%d and %d\n", a, b);


    int a1, b1;
    int a = 4;
    int b = 3;
    printf("%d and %d\n", a, b);
    a1 = add(&a, &b);
    b1 = sub(&a, &b);
    printf("%d and %d\n", a1, b1);

    return 0;
}