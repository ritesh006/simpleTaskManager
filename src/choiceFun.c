#include <stdio.h>
#include <stdlib.h>
#include "../include/simpleTaskManager.h"

void choiceFun(int choice, var **headptr) {
    switch (choice) {
        case 1:
            addTask(headptr);
            break;

     case 2: viewTask(*headptr);
             break;  

     case 3: removeTask(headptr);
             break;

     case 4: exit(0);
             break;

    default: printf("\n========= Invalid input =========\n");
        break;
    }
}
