#include<stdio.h>

int func1(int b){
    static int myvar = 98;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The address of b inside func1 is %d\n", &b);
    return b;
}

int main()
{
    int b = 344; // Local variable
    int val;

    // printf("The address of b inside main is %d\n", &b);

    val = func1(b);
    func1(b);
    func1(b);
    func1(b);
    func1(b);
    func1(b);
    int* ptr = &val;

    // printf("The value of func1 is %d\n", val);
    
    return 0;
}