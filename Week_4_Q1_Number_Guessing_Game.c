/*
Name: Winnie Wairimu Mugo
Reg no: CT100/G/30690/26
Description: Number guessing game using a while loop
Date: 25/10/2026
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secretNumber, guess, attempts = 0;

    srand((unsigned int)time(NULL));
    secretNumber = rand() % 20 + 1;

    printf("NUMBER GUESSING GAME\n");
    printf("Guess a number between 1 and 20.\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a whole number.\n");
            return 1;
        }

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed the number in %d attempt(s).\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
