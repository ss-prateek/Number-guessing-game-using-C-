/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 1, max = 100;
    srand(time(0));  
    
    int num = (rand() % (max - min + 1)) + min;
    int no_of_guesses = 0;
    int guessed_number;
    
    //printf("Random number between %d and %d: %d\n", min, max, num);
    do{
        printf("Guess the number : ");
        scanf("%d",&guessed_number);
        if(guessed_number > num){
            printf("Lower number please! \n");
        }else if(guessed_number < num){
            printf("Higher number please! \n");
        }else{
            printf("Congrats!! \n");
        }
        no_of_guesses++;
    }while(guessed_number != num);
    printf("You guessed the number is %d guesses",no_of_guesses);
    return 0;
}

