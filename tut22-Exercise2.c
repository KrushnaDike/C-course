// DIFFERENT CALCULATOR
#include <stdio.h>

float km_to_miles(int number)
{
    return number * 0.62137119;
}

float inches_to_foot(int number)
{
    return number * 0.0833333;
}

float cms_to_inches(int number)
{
    return number * 0.393701;
}

float pound_to_kgs(int number)
{
    return number * 0.453592;
}

float inches_to_meters(int number)
{
    return number * 0.0254;
}

int main()
{
    int num, op;
    printf("\n***************** WELCOME TO KRUSHNA'S CALCULATOR *****************\n");
    while (1)
    {
        printf("\nEnter what you want: \n");
        printf("Press 1 for km_to_miles\nPress 2 for inches_to_foot\nPress 3 for cms_to_inches\nPress 4 for pound_to_kgs\nPress 5 for inches_to_meters\nPress 6 for exit:\n");
        scanf("%d", &op);

        if (op == 6)
        {
            printf("\nThanks for using Krushna's Calculator, Have a great day ahead..!\n");
            printf("\n");
            goto end;
        }

        printf("\nEnter the number: \n");
        scanf("%d", &num);

        if (op == 1)
        {
            printf("\n==> Km to Miles of number %d is %f\n", num, km_to_miles(num));
        }
        else if (op == 2)
        {
            printf("\n==> Inches to Foot of number %d is %f\n", num, inches_to_foot(num));
        }
        else if (op == 3)
        {
            printf("\n==> Cm to Inches of number %d is %f\n", num, cms_to_inches(num));
        }
        else if (op == 4)
        {
            printf("\n==> Pound to Kgs of number %d is %f\n", num, pound_to_kgs(num));
        }
        else if (op == 5)
        {
            printf("\n==> Inches to Meters of number %d is %f\n", num, inches_to_meters(num));
        }
        else
        {
            printf("Invalid Choice!\n");
            printf("\nThanks for using Krushna's Calculator, Have a great day ahead..!\n");
            printf("\n");
            goto end;
        }
    }
end:

    return 0;
}