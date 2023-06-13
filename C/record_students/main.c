/*
Write a program to maintain records of students. 
The program must maintain records of 10 students 
and you should give below features to your program.

1- Display all records
2- Add new record
3- Delete a record
The program also should avoid/alert about the bellow situation
a- Duplication of a record
b- No space to add a new record
c- deleting an unkwonn record

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "functions.h"

int students_number = 10;
STUDENT_RECORD_t students[10];

int main()
{
    int option;
    option = mainMenu();

    printf("Selected option: %i", option);

    switch(option)
    {
        case 0:
            printf("Thanks for using the STUDENTS RECORD SYSTEM :)");
            break;
        case 1:
            displayAllRecords(students, students_number);
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }

    return 0;
}