#include <stdio.h>
#include "../include/simpleTaskManager.h"


int choice;

int main()
{
    var *headptr = NULL;
    int choice;

    while (1)
    {
        choice = menu();
        choiceFun(choice, &headptr);
    }
    
   
        
    return 0;
}

