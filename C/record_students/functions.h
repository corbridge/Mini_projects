#include <stdio.h>

typedef struct
{
    int  roll_number;
    char name[50];
    char carrer[50];
    char graduation[15];
    int  semester;
}STUDENT_RECORD_t;

int mainMenu()
{
    int option;

    printf("***WELCOME TO OUR STUDENTS RECORD SYSTEM***\n");
    printf("   Choose an option:\n");
    printf("   1 - Display all records\n");
    printf("   2 - Add new record\n");
    printf("   3 - Delete a record\n");
    printf("   0 - Exit\n");
    printf("   Type option number: ");
    scanf("%i", &option);

    return option;
}

void displayAllRecords(STUDENT_RECORD_t *student, int number_students)
{
    for(int i = 1; i <= number_students; i++)
    {
        printf("\n--------------------\n");
        printf("Student %i\n", i);
        printf("Roll number: %i\n", student[i].roll_number);
        printf("Name: %c\n", student[i].name);
        printf("Carrer: %c\n", student[i].carrer);
        printf("Expected graduation: %c\n", student[i].graduation);
        printf("Current semester: %i\n", student[i].semester);
    }
}

// void addNewRecord()
// {

// }