#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    int maxAttempts = 10;  // You can adjust this value

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the secret number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        if (attempts == maxAttempts) {
            printf("Sorry, you've run out of attempts. The correct number was %d.\n", secretNumber);
            break;
        }
    }

    return 0;
}
