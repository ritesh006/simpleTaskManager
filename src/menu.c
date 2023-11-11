#include <stdio.h>

int menu()
{
    int choice;

   
        printf("\n========== Task Manager ==========\n");

        printf("\n1. Add Task\n");
        printf("2. View Task\n");
        printf("3. Remove Task\n");
        printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d%*c", &choice); // consume new line char
    printf("\n");
    if (choice < 1 || choice > 5)
    {
        printf("\n===== Invalid input ======\n");
        // Handle invalid input, maybe ask the user to enter again.
    }


        return choice;
    
}