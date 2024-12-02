/**
 *  Define a structure called student that would contain name, regno and marks of five subjects and percentage.
 *  Write a program to read the details of name, regno and marks of five subjects for 30 students, calculate the percentage and display the name, regno, marks of the subjects and percentage of each student.
 */
#include <stdio.h>
struct student
{
    char name[50];
    int regno;
    float marks[5];
    float percentage;
    
};
void main()
{
    int n = 30;
    struct student studentList[n];//Array of structures
    float total = 0.0f;    
    for (int i = 0; i < n; i++)
    {
        total = 0.0f;
        printf("enter id: ");
        scanf("%d", &studentList[i].regno);
        printf("enter name: ");
        scanf("%s", &studentList[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("enter marks: ");
            scanf("%f", &studentList[i].marks[j]);
            total += studentList[i].marks[j];
        }
        studentList[i].percentage = (float)total/5;
    }
    for (int i = 0; i < n; i++){
        printf("ID: %d, Name: %s, Percentage: %f", studentList[i].regno, studentList[i].name, studentList[i].percentage);
    }
}