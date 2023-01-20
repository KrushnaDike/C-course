// RECURSION IN C
#include <stdio.h>

int factorial_recursive(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number * (factorial_recursive(number - 1)));
    }
}


int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("The factorial of number %d is %d\n", num, factorial_recursive(num));

    return 0;
}
