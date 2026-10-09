#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber;
    int guess;
    int attempts = 0;

    // Random number generate karne ke liye
    srand(time(0));

    // 1 se 100 ke beech random number
    secretNumber = rand() % 100 + 1;

    printf("=================================\n");
    printf("      NUMBER GUESSING GAME\n");
    printf("=================================\n");
    printf("I have selected a number from 1 to 100.\n");
    printf("Try to guess it!\n\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber)
        {
            printf("Too high! Try a smaller number.\n\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low! Try a bigger number.\n\n");
        }
        else
        {
            printf("\nCongratulations! You guessed it!\n");
            printf("Number was: %d\n", secretNumber);
            printf("Attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}