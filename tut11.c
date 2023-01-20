// SWITCH CASE STATEMENT
#include<stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age: \n");
    scanf("%d", &age);


    switch (age){
        case 3:
            printf("Your age is 3\n");

            printf("Enter your marks: \n");
            scanf("%d", &marks);
            
            switch (marks){
            case 45:
                printf("Your marks are 45!\n");
                break;
            
            default:
                printf("Your marks are not 45!\n");
                break;
            }
            break;

        case 13:
            printf("Your age is 13\n");
            break;

        case 23:
            printf("Your age is 23\n");
            break;

        default:
            printf("Your age is not 3, 13 or 23\n");
            break;
            
    }

    return 0;
}
