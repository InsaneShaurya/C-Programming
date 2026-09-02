//Write a C program with a predefined value number = 20 and calculate its double and half.
#include <stdio.h>
int main()
{
    int number = 20;  // Predefined value
    int double_value = number * 2;  // Calculate double
    float half_value = (float)number / 2;  // Calculate half

    printf("The double of %d is: %d\n", number, double_value);
    printf("The half of %d is: %.2f\n", number, half_value);
    return 0;
}