// EXERCISE-1 SOLUTION USING FOR LOOP
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a num: \n");
    scanf("%d", &num);
    printf("The multiplication table of %d is as follow: \n", num);

    for (int i = 1; i < 11; i++){
        printf("%d * %d = %d\n",num,i, num*i);
    }
    
    return 0;
}
