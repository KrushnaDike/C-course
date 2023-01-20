// FOR LOOP
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a num: \n");
    scanf("%d", &num);
    printf("The Table of: %d\n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", num * i);
    }

    return 0;
}
