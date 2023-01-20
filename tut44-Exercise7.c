#include<stdio.h>
#include<string.h>

typedef struct Drivers
{
    char name[50];
    int drNo;
    char route[100];
    float kms;
}dr;

int main()
{
    dr d1, d2, d3;

    printf("Driver 1: Enter your name: \n");
    scanf("%s", &d1.name);
    printf("Driver 1: Enter your driving licence number: \n");
    scanf("%d", &d1.drNo);
    printf("Driver 1: Enter your route: \n");
    scanf("%s", &d1.route);
    printf("Driver 1: Enter your kelometer: \n");
    scanf("%f", &d1.kms);

    printf("\nDriver 2: Enter your name: \n");
    scanf("%s", &d2.name);
    printf("Driver 2: Enter your driving licence number: \n");
    scanf("%d", &d2.drNo);
    printf("Driver 2: Enter your route: \n");
    scanf("%s", &d2.route);
    printf("Driver 2: Enter your kelometer: \n");
    scanf("%f", &d2.kms);

    printf("\nDriver 3: Enter your name: \n");
    scanf("%s", &d3.name);
    printf("Driver 3: Enter your driving licence number: \n");
    scanf("%d", &d3.drNo);
    printf("Driver 3: Enter your route: \n");
    scanf("%s", &d3.route);
    printf("Driver 3: Enter your kelometer: \n");
    scanf("%f", &d3.kms);

    // Printing the data
    printf("\nDriver 1: Name: %s\n", d1.name);
    printf("Driver 1: Driving licence number: %d\n", d1.drNo);
    printf("Driver 1: Route: %s\n", d1.route);
    printf("Driver 1: Kms: %f\n", d1.kms);

    printf("\nDriver 2: Name: %s\n", d2.name);
    printf("Driver 2: Driving licence number: %d\n", d2.drNo);
    printf("Driver 2: Route: %s\n", d2.route);
    printf("Driver 2: Kms: %f\n", d2.kms);

    printf("\nDriver 3: Name: %s\n", d3.name);
    printf("Driver 3: Driving licence number: %d\n", d3.drNo);
    printf("Driver 3: Route: %s\n", d3.route);
    printf("Driver 3: Kms: %f\n", d3.kms);
    
    return 0;
}