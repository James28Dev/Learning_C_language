#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("------------------------------------------------\n");
	printf("  Welcome to the High-Low number guessing game\n");
	printf("------------------------------------------------\n");
    int playAgain;
    do {
        int number = rand() % 100 + 1, guess, attempts = 0;
        printf("Your answer (1-100): ");

        do {
            scanf(" %d", &guess);
            attempts++;

            if (guess == number) {
                printf("\nCorrect!!");
                printf("You guessed it in %d attempts.\n", attempts);
            } else if (guess < number) {
                printf("Too low.\n\nYour answer : ");
            } else {
                printf("Too high.\n\nYour answer : ");
            }
        } while (guess != number);
        
        printf("Do you want to play again? (1: Play again, 2: Quit): ");
        scanf(" %d", &playAgain);
    } while (playAgain == 1);

    printf("Thank you for playing the game!\n");

    return 0;
}
