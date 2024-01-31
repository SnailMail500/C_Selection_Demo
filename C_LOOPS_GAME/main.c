#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    printf("PROJECT 2: C LOOPS GAME\n");
    bool guessed = false; //booleans are returned as integers apparently!
    int guess = 0;
    int num = 8;
    while (guessed == false){
        printf("Enter a number:\n ");
        guess = scanf("%d", &num);

        if (guess == num){
            printf("Correct.\n");
            guessed = true;
        }
        else{
            printf("Incorrect. Try again\n");
        }


    }
    return 0;
}
