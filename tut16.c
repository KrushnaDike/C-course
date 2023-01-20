#include<stdio.h>

int main(){
    int age;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your age: \n");
        scanf("%d", &age);
        // if (age>18){
        //     break;
        // }

        if (age>18){
            continue;
        }

        printf("Krushna is a good boy\n");
        printf("Krushna is a programmer\n");
        printf("I love code\n");
    }
    
    return 0;
}