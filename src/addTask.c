#include <stdio.h>
#include <stdlib.h>
#include "../include/simpleTaskManager.h"

void addTask(var **head)
{
    var *newTask = malloc(sizeof(var));

    if (newTask == NULL)
    {
        printf("Error: Memory allocation failed\n");
        exit(1); // Exit with failure
    }

    printf("Enter Task Title: ");
    scanf("%99[^\n]%*c", newTask->taskTitle); // Consume the newline character

    printf("Enter Task Description: ");
    scanf("%99[^\n]%*c", newTask->taskDiscription); // Consume the newline character

    printf("Enter Due Date (DD/MM/YYYY): ");
    scanf("%99[^\n]%*c", newTask->taskDueDate); // Consume the newline character

    newTask->next = *head;
    *head = newTask;
}
