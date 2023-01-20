#include <stdio.h>
#include <string.h>

union student
{
    int id;
    float marks;
    char name[50];
};
int main()
{
    union student s1;
    s1.id = 01;
    s1.marks = 55.88;
    strcpy(s1.name, "Pooja");

    printf("The name is %s\n", s1.name);
    printf("The id is %d\n", s1.id);
    printf("The marks is %f\n", s1.marks);

    return 0;
}