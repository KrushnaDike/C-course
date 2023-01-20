#include <stdio.h>

void arrayReverse(int arr[])
{
    int temp;
    for (int i = 0; i < 5 / 2; i++)
    {
        // swap arr[i] to arr[4-i]
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
}

int main()
{
    int array[] = {4, 5, 8, 9, 5};
    printf("\nBefore Reversing the Array: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("The element at %d is %d\n", i, array[i]);
    }

    arrayReverse(array);
    printf("\nAfter Reversing the Array: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("The element at %d is %d\n", i, array[i]);
    }

    return 0;
}