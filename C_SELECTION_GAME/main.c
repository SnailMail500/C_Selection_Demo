#include <stdio.h>

int main() {
    printf("Project 1: Game Creation using Selection\n");
    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;
    printf("How many goals has Cole Palmer scored for Chelsea in all competitions?\n1. 3\n2. 8\n3. 11\n");
    scanf("%d", &ans1);// i think this will work
    if (ans1 == 3){
        printf("Correct!\n");
    }
    else {
        printf("Wrong.\n");
    }


    return 0;
}
