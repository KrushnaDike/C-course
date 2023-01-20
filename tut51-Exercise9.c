// ROCK, PAPER & SCISSORS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int randNumber()
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    int i = 1;
    int compTern;
    char compChoise, yourChoise;
    char name[50];
    int compPoints = 0, yourPoints = 0;

    printf("\n****************** Welcome To Rock, Paper & Scissors Game ******************\n");
    printf("Enter your name: \n");
    scanf("%s", &name);
    getchar();

    while (1)
    {
        printf("\nComputer tern: Enter Rock(r), Paper(p) & Scissor(s): \n");
        compTern = randNumber();
        if (compTern == 0)
        {
            compChoise = 'r';
        }
        else if (compTern == 1)
        {
            compChoise = 'p';
        }
        else
        {
            compChoise = 's';
        }

        printf("%s's tern: Enter Rock(r), Paper(p) & Scissor(s): \n", name);
        scanf("%c", &yourChoise);
        getchar();

        printf("\nComputer Choice is: %c\n", compChoise);
        printf("%s's Choice is: %c\n", name, yourChoise);

        if (compChoise == yourChoise)
        {
            printf("Game is Tie!\n");
        }

        else if (compChoise == 'r' && yourChoise == 'p')
        {
            yourPoints++;
            printf("%s's Points are increased..!\n", name);
        }
        else if (compChoise == 'r' && yourChoise == 's')
        {
            compPoints++;
            printf("Computer Points are increased..!\n");
        }
        else if (compChoise == 'p' && yourChoise == 'r')
        {
            compPoints++;
            printf("Computer Points are increased..!\n");
        }
        else if (compChoise == 'p' && yourChoise == 's')
        {
            yourPoints++;
            printf("%s's Points are increased..!\n", name);
        }

        else if (compChoise == 's' && yourChoise == 'r')
        {
            yourPoints++;
            printf("%s's Points are increased..!\n", name);
        }
        else if (compChoise == 's' && yourChoise == 'p')
        {
            compPoints++;
            printf("Computer Points are increased..!\n");
        }

        if (i == 5)
        {
            goto end;
        }

        i++;
    }

end:

    printf("\n");
    printf("Computer Points are: %d\n", compPoints);
    printf("%s's Points are: %d\n", name, yourPoints);

    if (compPoints > yourPoints)
    {
        printf("Computer Win the game..!");
    }
    else if (compPoints == yourPoints)
    {
        printf("The game is tie..!");
    }
    else
    {
        printf("%s Win the game..!", name);
    }

    return 0;
}