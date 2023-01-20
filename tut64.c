#include<stdio.h>

int main()
{
    FILE* ptr = NULL;
    char string[64] = "This is c Ttutorials form code with harry.\n";

    // Reading from file
    // ptr = fopen("sample64.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file is: %s\n", string);
    // fclose(ptr);

    // Writing to the file
    ptr = fopen("sample64.txt", "a");
    fprintf(ptr, "%s", string);
    fclose(ptr);

    return 0;
}