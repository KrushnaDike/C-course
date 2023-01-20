#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replaceWord(const char *str, const char *oldword, const char *newword)
{
    int i, count = 0;
    char *resultString;
    int newWordLength = strlen(newword);
    int oldWordLength = strlen(oldword);

    // Lets count the number of time old word occure in this string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;

            // jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making new strig to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        // Compare substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultString[i], newword);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    char string[500];
    char* newstr;

    ptr = fopen("letter66.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    fgets(string, 500, ptr);

    printf("The given bill was: %s\n", string);
    newstr = replaceWord(string, "{{name}}", "Harry");
    newstr = replaceWord(newstr, "{{item}}", "Table Fan");
    newstr = replaceWord(newstr, "{{outlet}}", "Ram Laxmi fan outlet");

    fprintf(ptr2, "%s", newstr);
    printf("The actual bill generated is: %s\n", newstr);

    fclose(ptr);
    fclose(ptr2);

    return 0;
}