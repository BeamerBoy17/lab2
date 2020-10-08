#include "task1.h"
#include "task2.h"

int main(void){

    printf("Enter the task number: ");
    char task=_getch();
    printf("\n");

    if (task=='1'){
        printf("Task 1:\n");
        system("cls");
        task1();
        _getch();
    }

    if (task=='2'){
        printf("\nTask2 2:\n");
        system("cls");
        task2();
        _getch();
    }

    return 0;
}

