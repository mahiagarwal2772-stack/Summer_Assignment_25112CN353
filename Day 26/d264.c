#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("===== Quiz Application =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used for C programming?\n");
    printf("1. Compiler\n2. Interpreter\n3. Programming Language\n4. Operating System\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}