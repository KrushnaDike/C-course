#include<stdio.h>

int myfunc(int a, int b){
    static int sum;
    // sum = a+b;
    sum ++;
    printf("The sum is: %d\n", sum);
    return sum;
}

// int sum = 345;

int main2()
{
    int sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    sum = myfunc(3, 5);
    // printf("The sum is: %d", sum);

    return 0;
}