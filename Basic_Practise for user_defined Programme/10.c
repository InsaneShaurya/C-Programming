//Write a C program to create a variable meters = 10 and convert it into centimeters.
#include <stdio.h>
int main()
{
    int meters = 10;  // Predefined value
    int centimeters = meters * 100;  // Convert meters to centimeters
    printf("%d meters is equal to %d centimeters.\n", meters, centimeters);
    return 0;
}