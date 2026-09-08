/* Write a C program to create two variables and calculate:
    • Addition 
    • Subtraction 
    • Multiplication 
    • Division  */
#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float division = num1 / num2;

    printf("Addition: %.2f\n", addition);
    printf("Subtraction: %.2f\n", subtraction);
    printf("Multiplication: %.2f\n", multiplication);
    printf("Division: %.2f\n", division);

    return 0;
}