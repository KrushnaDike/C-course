// OPERATORS IN C
#include<stdio.h>

int main()
{
    // 1. Arithmatic operators
    int a, b;
    a = 34;
    b = 5;

    printf("Arithmatic Operators: \n");
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("\n");

    // 2. Relational operators
    printf("Relational Operators: \n");
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("\n");

    // 3. Logical operators
    int c, d;
    c = 1; // true
    d = 0; // false

    printf("Logical Operators: \n");
    printf("a && b = %d\n", c&&d);
    printf("a || b = %d\n", c||d);
    printf("!b = %d\n", !d);
    printf("\n");

    // 4. Bitwise operators
    printf("Bitwise Operators: \n");
    printf("c & d = %d\n", c&d);
    printf("c | d = %d\n", c|d);
    printf("c ^ d = %d\n", c^d);
    printf("\n");

    // 5. Assignment operators
    int e = 4;
    printf("Assignment Operators: \n");
    printf("a += = %d\n", e+=1);
    printf("a -= = %d\n", e-=1);
    printf("a *= = %d\n", e*=2);
    printf("a /= = %d\n", e/=2);
    printf("\n");

    // 6. Miscellanious operators
    printf("Miscellanious Operators: \n");
    printf("The sizeof operator returns size: %d", sizeof(a));
    printf("\n");

    return 0;
}
