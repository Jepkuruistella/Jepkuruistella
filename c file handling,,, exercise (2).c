//C program to create a file 'data.txt'
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

// Function to write a sentence to "data.txt"
void writeToFile() {
    char sentence[100];//Variable declaration 
    FILE *file;//File declaration 

    printf("Enter a sentence (up to 100 characters): ");//Prompt the user to enter a sentence with up to 100 words 
    fgets(sentence, 100, stdin);//fgets is used so that the user can have white spaces in the sentence 

    file = fopen("data.txt", "w");//Opening a file ,data.txt, for writing 
    if (file == NULL) {
        perror("Error opening file");//If the program returns null, this will enable the program to print a more appropriate output
        exit(0);
    }

    fprintf(file, "%s", sentence);
    fclose(file);//Command to close the file

    printf("Sentence written to 'data.txt'.\n");
}

// Function to read and display the content of "data.txt"
void readFromFile() {
    char sentence [100];
    FILE *file;

    file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(0);
    }

    printf("Content of 'data.txt':\n");
    while (fgets(sentence, 100, file)) {
        printf("%s", sentence);
    }

    fclose(file);
}

// Function to append a sentence to "data.txt"
void appendToFile() {
    char sentence[100];
    FILE *file;

    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, 100, stdin);

    file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        exit(0);
    }

    fprintf(file, "%s", sentence);
    fclose(file);

    printf("Sentence appended to 'data.txt'.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(EXIT_SUCCESS);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}