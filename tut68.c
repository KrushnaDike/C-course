#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    // printf("The value of argc is: %d\n", argc);
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("The value at index %d is %s\n", i, argv[i]);
    // }

    int sum, num1, num2;
    printf("The num1 is: %s\n", (int)argv[1]);
    printf("The num2 is: %s\n", (int)argv[2]);
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    printf("The addition is: %d", num1+num2);
    
    return 0;
}
