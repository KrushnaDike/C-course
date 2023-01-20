#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "pooja";
    char s2[] = "krushna";
    char s3[50];

    // puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: \n");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: \n");
    // puts(strrev(s2));

    // strcpy(s3, strcat(s1, s2));
    // puts(s3);


    // QUICK QUIZE:
    char nm1[50];
    char nm2[50];
    char str[] = "is a gf of";

    printf("Enter name1: \n");
    gets(nm1);

    printf("Enter name2: \n");
    gets(nm2);

    printf("%s %s %s", nm1, str, nm2);
    
    return 0;
}