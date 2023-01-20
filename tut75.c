#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0;
    int* i2;
    while (i<4555)
    {
        printf("Welcome to c programming krushna...!");
        i2 = malloc(2342*sizeof(int));
        if(i%100){
            getchar();
        }
        i++;
        free(i2);
    }
    
    return 0;
}