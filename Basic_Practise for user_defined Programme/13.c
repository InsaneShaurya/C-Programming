//Write a C program to create predefined marks for 5 subjects, such as 80, 75, 90, 85, 70, and calculate the total marks.
#include <stdio.h>
int main() 
{
    
    int marks[5] = {80, 75, 90, 85, 70};  // Predefined marks for 5 subjects
    int total_marks = 0;  // Variable to store total marks

    // Calculate total marks
    for(int i = 0; i < 5; i++) {
        total_marks += marks[i];
    }

    printf("The total marks for the 5 subjects is: %d\n", total_marks);
    return 0;
}