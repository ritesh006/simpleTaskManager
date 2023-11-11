#ifndef SIMPLE_TASK_MANAGER_H
#define SIMPLE_TASK_MANAGER_H

typedef struct task
{
    char taskTitle[100];
    char taskDiscription[100];
    char taskDueDate[100];
    struct task *next;
} var;

// Function prototypes
int menu();
void choiceFun(int choice, var **headptr);
void viewTask(var *ptr);
void addTask(var **head);
void removeTask(var **head);


#endif // SIMPLE_TASK_MANAGER_H
