#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;
    srand(time(NULL)); // Seed for random number generation

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter: 1 for Rock\nEnter: 2 for Paper\nEnter: 3 for Scissors\nEnter: 0 to exit.\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &playerChoice);

        if (playerChoice >= 1 && playerChoice <= 3) {
            // Generate computer's choice
            computerChoice = rand() % 3 + 1; // Random number between 1 and 3

            printf("Computer chooses ");
            switch (computerChoice) {
                case 1:
                    printf("Rock. ");
                    break;
                case 2:
                    printf("Paper. ");
                    break;
                case 3:
                    printf("Scissors. ");
                    break;
            }

            // Determine the winner
            if (playerChoice == computerChoice) {
                printf("It's a tie!\n\n");
            } else if ((playerChoice == 1 && computerChoice == 3) ||
                       (playerChoice == 2 && computerChoice == 1) ||
                       (playerChoice == 3 && computerChoice == 2)) {
                printf("You win!\n");
                playerScore++;
            } else {
                printf("Computer wins!\n\n");
                computerScore++;
            }

            printf("Your score = %d \nComputer's score = %d\n", playerScore, computerScore);
        } else if (playerChoice != 0) {
            printf("Invalid choice. Please enter 1, 2, 3, or 0 to exit.\n");
        }

    } while (playerChoice != 0);

    printf("Thanks for playing!\n");

    return 0;
}
