#include<stdio.h>

int add(int a, int b){
    return a+b;
}

void greetHelloandExecute(int (*fptr)(int, int)){
    printf("Hello User..!\n");
    printf("The addition of 5 and 7 is: %d\n", fptr(5, 7));
}

void greetGmandExecute(int (*fptr)(int, int)){
    printf("Good Morning User..!\n");
    printf("The addition of 5 and 7 is: %d\n", fptr(5, 7));
}

int main()
{
    int (*ptr) (int, int);
    ptr = &add;
    greetGmandExecute(ptr);
    greetHelloandExecute(ptr);

    return 0;
}