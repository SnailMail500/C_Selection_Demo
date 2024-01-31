#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("PROJECT 2: C LOOPS GAME\n");
    int guessed = 0;
    int guess = 0;
    int num = 8;
    while (guessed != 1){
        guessed = 0;
        printf("Enter a number:\n ");
        scanf("%d", &guess);
        if (guess == num){
            printf("Correct\n");
            guessed = 1;
        }
        else{
            printf("Incorrect\n");
        }
    }
    return 0;
}
