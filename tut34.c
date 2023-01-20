#include<stdio.h>

void printStr(char str[]){
    int i = 0;
    while (str[i]!=0)
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'k', 'r', 'u', 's', 'h', 'n', 'a', '\0'};
    // char str[20] = "krushna";
    char name[20];

    printf("Enter your name: \n");
    gets(name);
    // printStr(name); // method 1 to print string using function
    // printf("%s", name); //method 2 to print string using printf
    puts(name); // method 3 to print string using puts
    
    return 0;
}