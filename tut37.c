#include<stdio.h>
#include<string.h>

struct  student
{
    int id;
    char name[50];
    float marks;
}pooja;


int main()
{
    printf("Enter your id: \n");
    scanf("%d", &pooja.id);
    printf("Enter your name: \n");
    scanf("%s", &pooja.name);
    printf("Enter your marks: \n");
    scanf("%f", &pooja.marks);

    printf("The name of student is %s, id is %d and marks is %f",pooja.name, pooja.id, pooja.marks);
    
    return 0;
}