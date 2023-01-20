#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 44; // We can update the original value because it pass as an pointer
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d\n", i, *(ptr + i));
        printf("The value at %d is %d\n", i, ptr[i]);
    }
    *(ptr) = 44;
    return 0;
}

void func3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, array[i][j]);
        }
    }
}

int main()
{
    // Array as an parameter
    // int arr[] = {4, 8, 9, 12};
    // printf("The value at 0th index is, %d\n", arr[0]);
    // func1(arr);
    // printf("The value at 0th index is, %d\n", arr[0]);

    // printf("The value at 0th index is, %d\n", arr[0]);
    // func2(arr);
    // printf("The value at 0th index is, %d\n", arr[0]);

    // Passing an multidimensional array as an parameter
    int arr[2][2] = {{4, 8}, 
                    {89, 7}};
    func3(arr);

    return 0;
}