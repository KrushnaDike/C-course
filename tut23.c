// ARRAYS IN C
#include<stdio.h>

int main()
{
    int marks[2][4] = {{44, 45, 89, 77},
                        {3, 2, 8, 9}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value at index %d is: \n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The marks of student %d, %d is: %d\n", i,j, marks[i][j]);
        }
    }

    return 0;
}
