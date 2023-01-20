#include <stdio.h>
#include <string.h>

void parser(char *str)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] == '\0';

    // remove the tralling spaces from left
    while (str[0] == ' ')
    {
        // shift the string to the left
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }
    // remove the tralling spaces from left
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>     This is a heading        </h1>";
    parser(string);
    printf("The string after parsing is ~~%s~~", string);

    return 0;
}