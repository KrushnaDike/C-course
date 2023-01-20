#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Dynamic memory alloacation
    // Use of malloc
    // int* ptr;
    // int n;
    // printf("Enter the size of array: \n");
    // scanf("%d", &n);

    // ptr = (int*)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of array %d\n", i);
    //     scanf("%d", &ptr[i]);
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of %d element is %d\n", i, ptr[i]);
    // }

    // Use of calloc
    int* ptr;
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array %d\n", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is %d\n", i, ptr[i]);
    }


    // Use of realloc
    printf("Enter the size of new array: \n");
    scanf("%d", &n);

    ptr = (int*)realloc(ptr, n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value of array %d\n", i);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("The new value of %d element is %d\n", i, ptr[i]);
    }

    // Use of free
    free(ptr);

    return 0;
}