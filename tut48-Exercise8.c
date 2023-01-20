#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char* ptr;
    int n, i=0;

    while (i<3)
    {
        printf("Employee %d: Enter the length of your id: \n", i+1);
        scanf("%d", &n);

        ptr = (char*)malloc((n+1)*sizeof(char));

        printf("Employee %d: Enter your id: \n", i+1);
        scanf("%s", ptr);

        printf("Employee %d: Your id is: %s\n", i+1, ptr);
        free(ptr);
        i++;
    }
    

    
    
    


    return 0;
}