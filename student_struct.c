#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Definition of a student structure.
 * Stores basic personal and academic information.
 */
struct student {
    char name[20];
    char surname[20];
    int age;
    double gpa;
    char major[20];
};

int main(void) {
    struct student student1;
    struct student student2;
    struct student student3;

    /* Initialize student 1 */
    strcpy(student1.name, "Mario");
    strcpy(student1.surname, "Rossi");
    student1.age = 32;
    student1.gpa = 3.5;
    strcpy(student1.major, "Medicine");

    /* Initialize student 2 */
    strcpy(student2.name, "Laura");
    strcpy(student2.surname, "Bianchi");
    student2.age = 40;
    student2.gpa = 3.0;
    strcpy(student2.major, "Biology");

    /* Initialize student 3 */
    strcpy(student3.name, "Clara");
    strcpy(student3.surname, "Messina");
    student3.age = 28;
    student3.gpa = 4.0;
    strcpy(student3.major, "History");

    /* Print student information */
    printf("Student: %s %s\n", student1.name, student1.surname);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Major: %s\n", student1.major);

    return EXIT_SUCCESS;
}
