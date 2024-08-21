#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize the random number generator
    srand(time(0));

    // Generate a random number between 0 and 99
    int random_number = rand() % 100;
    int no_of_guesses = 1;
    int guessed;
    int bound;
    printf("in how many guesses you want to end:");
    scanf("%d", &bound);

    do
    {

        printf("\n%d:guess the number:", no_of_guesses);
        scanf("\n%d", &guessed);

        if (bound == no_of_guesses && guessed != random_number)
        {
            printf("\nYou've reach the limit of guesses:%d\n", bound);
            printf("\nYou Lose!\n");
            break;
        }
        else if (bound != no_of_guesses)
        {
            if (guessed > random_number)
            {
                printf("\nLower Number Please!\n");
            }
            else if (guessed < random_number)
            {
                printf("\nHigher Number Please!\n");
            }
            else
            {
                printf("\nCongratulations!\n");
                printf("\nYou guessed the right number %d in %d guesses!\n", guessed, no_of_guesses);
            }
        }

        no_of_guesses++;

    } while (guessed != random_number);

    return 0;
}
