// simpleTaskManager.c

#include <stdio.h>
#include <stdlib.h>
#include "../include/simpleTaskManager.h"

void removeTask(var **head)
{
    if (*head == NULL)
    {
        printf("No tasks to remove.\n");
        return;
    }

    char title[100];
    printf("Enter Title of the Task to Remove: ");
    scanf("%99[^\n]%*c", title);

    var *current = *head;
    var *previous = NULL;

    while (current != NULL)
    {
        if (strcmp(current->taskTitle, title) == 0)
        {
            if (previous == NULL)
            {
                // The task to remove is the first task
                *head = current->next;
            }
            else
            {
                // Remove task by updating the next pointer of the previous task
                previous->next = current->next;
            }

            free(current);
            printf("Task '%s' removed successfully.\n", title);
            return;
        }

        previous = current;
        current = current->next;
    }

    printf("Task with title '%s' not found.\n", title);
}
