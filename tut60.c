#include<stdio.h>

int main()
{
    printf("The file name is: %s\n", __FILE__);
    printf("Todays date is: %s\n", __DATE__);
    printf("Time is: %s\n", __TIME__);
    printf("ANSI: %d\n", __STDC__);
    
    return 0;
}  