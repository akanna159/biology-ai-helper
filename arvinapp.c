#include <stdio.h>
#include <string.h>

void defineTerm(char term[]) {
    if (strcmp(term, "cell") == 0) {
        printf("Definition: The cell is the basic unit of life in all living organisms.\n");
    } else if (strcmp(term, "photosynthesis") == 0) {
        printf("Definition: Photosynthesis is the process by which green plants make their own food using sunlight.\n");
    } else if (strcmp(term, "mitosis") == 0) {
        printf("Definition: Mitosis is the process by which a cell divides into two identical daughter cells.\n");
    } else {
        printf("Sorry, I don't have the definition for that term yet.\n");
    }
}

void biologyQuiz() {
    char answer[50];
    int score = 0;

    printf("\nBIOLOGY QUIZ TIME!\n");

    printf("1. What is the powerhouse of the cell? ");
    scanf(" %s", answer);
    if (strcmp(answer, "mitochondria") == 0) {
        score++;
    }

    printf("2. What pigment is responsible for photosynthesis? ");
    scanf(" %s", answer);
    if (strcmp(answer, "chlorophyll") == 0) {
        score++;
    }

    printf("3. What is the human body's largest organ? ");
    scanf(" %s", answer);
    if (strcmp(answer, "skin") == 0) {
        score++;
    }

    printf("\nYou scored %d/3!\n", score);
}

void studyTips() {
    printf("\n🧠 Biology Study Tips:\n");
    printf("- Use flashcards to remember terms and definitions.\n");
    printf("- Draw diagrams to visualize structures like cells.\n");
    printf("- Teach someone else to test your understanding.\n");
    printf("- Break chapters into smaller parts and study a little each day.\n");
}

int main() {
    int choice;
    char term[50];

    printf("Welcome to the Biology AI Helper\n");

    do {
        printf("\nMenu:\n");
        printf("1. Define a biology term\n");
        printf("2. Take a quiz\n");
        printf("3. Get study tips\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a biology term (e.g., cell, photosynthesis, mitosis): ");
                scanf("%s", term);
                defineTerm(term);
                break;
            case 2:
                biologyQuiz();
                break;
            case 3:
                studyTips();
                break;
            case 4:
                printf("Goodbye! Stay curious and keep learning biology!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
