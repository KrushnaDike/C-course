#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* ptr = NULL;
    char string[200];
    char str[50] = "Krushna is a good boy";
    ptr = fopen("sample64.txt", "a+");

    fgets(string, 200, ptr);
    fputs(str, ptr);
    printf("The content of this file is: %s\n", string);

    return 0;
}