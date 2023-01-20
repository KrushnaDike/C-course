#include<stdio.h>
#include<string.h>

typedef struct  student
{
    int id;
    char name[50];
    float marks;
}std;

int main()
{
    // struct student pooja, krushna;
    std pooja, krushna;

    pooja.id = 01;
    krushna.id = 02;

    printf("%d\n",pooja.id);
    printf("%d\n",krushna.id);

    typedef unsigned long ul;
    ul l1, l2, l3, l4;

    typedef int* intPtr;
    // int* a, b;
    intPtr a, b;
    int c = 7;
    a = &c;
    b = &c;
    
    return 0;
}