// WHILE LOOP
#include<stdio.h>

int main()
{
    int num, index=1;
    printf("Enter num: \n");
    scanf("%d", &num);
    printf("The table of: %d\n",num);

    while (index<=10){
        printf("%d\n", num*index);
        index ++;
    }
    
    return 0;
}
