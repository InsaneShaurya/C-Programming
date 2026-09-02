//Using the same predefined marks of 5 subjects, calculate the average marks.
#include <stdio.h>
int main() 
{
    int marks[5] = {80, 75, 90, 85, 70};  // Predefined marks for 5 subjects
    int total_marks = 0;  // Variable to store total marks

    // Calculate total marks
    for(int i = 0; i < 5; i++) {
        total_marks += marks[i];
    }

    // Calculate average marks
    float average_marks = (float)total_marks / 5;

    printf("The average marks for the 5 subjects is: %.2f\n", average_marks);
    return 0;
}