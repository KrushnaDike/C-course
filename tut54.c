#include<stdio.h>
#include<stdlib.h>

int* myFunc(){
    int a, b, sum;
    sum = a + b;
    return &sum;
}

int sum = 34;
int main()
{
    // Case1: De-allocation of memmory block
    int* ptr = (int*) malloc(7*sizeof(int));
    ptr[0] = 4;
    ptr[1] = 8;
    ptr[2] = 7;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer

    // Case2: Fucnction returning local variable address
    int* dangPtr = myFunc();
    // printf("The sum is: %d", *dangPtr); // dangPtr is now a dangling pointer

    // Case3: If variable goes out of scope
    int* danglingPtr3;
    { // scope start
        int a = 45;
        danglingPtr3 = &a;
    } // scope end
    // printf("The value of a is: %d", *danglingPtr3); // danglingPtr3 is now a dangling pointer

    return 0;
}