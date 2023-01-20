#include<stdio.h>

void simplePattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }    
}

void reversePattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }   
}

int main()
{
    int num, op;
    printf("Enter which pattern you want to print: \nPress 1 for Simple Patter\nPress 2 for Reverse Pattern:\n");
    scanf("%d", &op);
    printf("Enter a num: \n");
    scanf("%d", &num);

    if (op == 1){
        simplePattern(num);
    }
    else{
        reversePattern(num);
    }
    
    return 0;
}