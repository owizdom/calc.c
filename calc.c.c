#include <stdio.h>
#include <string.h>


int main() {

    printf(
    "  _____      _      ____   _____ \n"
    " / ____|    | |    / __ \\ / ____|\n"
    "| |     __ _| |___| |  | | |     \n"
    "| |    / _` | / __| |  | | |     \n"
    "| |___| (_| | \\__ \\ |__| | |____ \n"
    " \\_____\\__,_|_|___/\\____/ \\_____|\n"
    );

    printf("=====================\n");

    // this is the program description
        printf("This is a simple calculator program for basic math operations.\n");

        printf("=====================\n");

        // the user input
        char name[100];
        printf("What is your name? -> ");
        scanf("%s", name);

        // welcoming the user
        printf("\nWelcome to CALC.C, %s!\n", name);
        printf("Created by Wisdom\n\n");

        printf("=====================\n");

        // Loop forever until user chooses to exit
           while (1) {
               int num1, num2, result;
               char operation[10];

               // Display menu
               printf("+---------------------------+\n");
               printf("| ADD - Addition            |\n");
               printf("| SUB - Subtraction         |\n");
               printf("| MUL - Multiplication      |\n");
               printf("| DIV - Division            |\n");
               printf("| EXIT - Quit               |\n");
               printf("+---------------------------+\n");

               // Ask for operation
               printf("Choose the operation you wanna do -> ");
               scanf("%s", operation);

               // Check if user wants to exit
               if (strcmp(operation, "EXIT") == 0) {
                   printf("Goodbye, %s!\n", name);
                   break;
               }

               // Ask for numbers
               printf("Enter first number -> ");
               scanf("%d", &num1);

               printf("Enter second number -> ");
               scanf("%d", &num2);

               // Perform the operation
               if (strcmp(operation, "ADD") == 0) {
                   result = num1 + num2;
               } else if (strcmp(operation, "SUB") == 0) {
                   result = num1 - num2;
               } else if (strcmp(operation, "MUL") == 0) {
                   result = num1 * num2;
               } else if (strcmp(operation, "DIV") == 0) {
                   if (num2 == 0) {
                       printf("Error: Division by zero!\n\n");
                       continue; // skip to next loop
                   }
                   result = num1 / num2;
               } else {
                   printf("Invalid operation! Try again.\n\n");
                   continue; // skip to next loop
               }

               // Display result
               printf(" Your Result: %d\n\n", result);
           }

           return 0;
}
