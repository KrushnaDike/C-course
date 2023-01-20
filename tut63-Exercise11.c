#include<stdio.h>

int isPalindrome(int num){
    int reverse = 0, rem;
    while(num!=0)    
    {    
        rem = num%10;    
        reverse = reverse*10 + rem;    
        num = num/10;    
    } 
    
    return reverse;
}

int main()
{
    int number, rev;
    printf("Enter a number: \n");
    scanf("%d", &number);

    rev = isPalindrome(number);

    printf("The reversed number is: %d\n", rev);

    if (rev == number){
        printf("The number is a palindrome..!\n");
    }
    else{
        printf("The number is not a palindrome..!\n");
    }

    return 0;
}