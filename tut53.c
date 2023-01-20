#include<stdio.h>

int main()
{
    int a = 34;
    int* ptr = NULL;
    
    if (ptr != NULL){
        printf("The address of a is: %d", *ptr);
    }
    else{
        printf("The pointer is null and cannot be dereferenced..!");
    }

    return 0;
}