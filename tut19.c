#include<stdio.h>

int sum(int, int); // Declaration of Function
void printStar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}

int takeNumber(){
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    return n;
}

void greeting(){
    printf("Good Morning, sir!");
}

int main()
{
    greeting();

    int a, b, c;
    a = 8;
    b = 54;
    c = sum(a, b); // Calling of Function
    printf("\nThe sum is: %d\n", c);

    printStar(5);
    int num = takeNumber();
    printf("The entered number is: %d\n", num);

    return 0;
}

// Defining of Function
int sum(int a, int b){
    return a+b;
}