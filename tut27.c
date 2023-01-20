#include <stdio.h>

int main()
{
    // char a = '3';
    // char* ptra = &a;

    // printf("%d\n", ptra);
    // ptra++;
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+2);
    // printf("%d\n", ptra-2);

    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptrarr = arr;
    // arr++; // This line throws an error
    ptrarr++;

    printf("The value at position 3 of the array is %d\n", arr[3]);

    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);

    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr + 1);

    printf("The value at address of the first element of the array is %d\n", arr[0]);
    printf("The value at address of the first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array is %d\n", *(arr));

    printf("The value at address of the second element of the array is %d\n", arr[1]);
    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of the second element of the array is %d\n", *(arr + 1));

    return 0;
}