// QUIZE1
#include<stdio.h>

int main()
{
    char math, science;
    printf("Enter y if you have passed math and science exam else n: %c \n");
    scanf("%c %c", &math, &science);

    if (math == 'y' && science == 'y'){
        printf("You have received Rs.45 as an gift..!\n");
    }
    else if (math == 'y'){
        printf("You have received Rs.10 as an gift for math exam..!\n");
    }
    else if (science == 'y'){
        printf("You have received Rs.10 as an gift for science exam..!\n");
    }
    else{
        printf("You are fail, you don't have an gift..!\n");
    }

    return 0;
}
