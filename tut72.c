#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int main()
{
    printf("The addition of 1 and 2 is: %d\n", add(1, 2)); // Testing the function
    int (*fptr) (int, int); // Declaring function pointer
    fptr = &add; 
    int d = (*fptr) (4, 6); // De-referencing fucntion pointer
    printf("The value of d is: %d\n", d);

    return 0;
}