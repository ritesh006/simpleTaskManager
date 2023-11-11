#include <stdio.h>
#include <stdlib.h>
#include "../include/simpleTaskManager.h"

void viewTask(var *ptr) {
    if (ptr == NULL) {
        printf("No Record Found...\n");
    }
     printf("\n======= Task List ========\n");
     printf("\n");
    while (ptr)
    {
       
        printf("Task Title: %s\n", ptr->taskTitle);
        printf("Task Description: %s\n", ptr->taskDiscription);
        printf("Due Date: %s\n", ptr->taskDueDate);
        printf("\n");
        ptr = ptr->next;
    }
}