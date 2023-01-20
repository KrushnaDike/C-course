#include<stdio.h>

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

int fib_recursive(int number){
    if (number == 0 ||number == 1){
        return 1;
    }
    else{
        return fib_recursive(number-1) + fib_recursive(number-2);
    }
}

int fib_iterative(int number){
    int a = 1;
    int b = 1;

    for (int i = 0; i < number; i++)
    {
        b = a+b;
        a = b-a;
    }

    return a;
    
}

int main()
{
    int num;
    printf("Enter a num: \n");
    scanf("%d", &num);

    int fib1 = fib_recursive(num);
    int fib2 = fib_iterative(num);
    printf("The using iterative fibanacci no of %d is %d\n", num, fib2);
    printf("The using recursive fibanacci no of %d is %d\n", num, fib1);

    return 0;
}