// POINTERS IN C
#include<stdio.h>

int main()
{
    int a = 75;
    int* ptra = &a;
    int** ptr = &ptra;

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("The address of a is %x\n", &a);
    printf("The address of a is %x\n", ptra);
    printf("The address of pointer to a is %x\n", &ptra);
    printf("The address of pointer to a is %x\n", ptr);
    printf("The value at pointer to a is %d\n", **ptr);

    return 0;
}