#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    if (strcmp(operation, "add")==0)
    {
        printf("The addition is: %d\n", num1 + num2);
    }
    else if (strcmp(operation, "sub")==0)
    {
        printf("The substraction is: %d\n", num1 - num2);
    }
    else if (strcmp(operation, "mul")==0)
    {
        printf("The multiplication is: %d\n", num1 * num2);
    }
    else if (strcmp(operation, "div")==0)
    {
        printf("The division is: %d\n", num1 / num2);
    }
    else{
        printf("Invalid Choice!");
    }

    return 0;
}
