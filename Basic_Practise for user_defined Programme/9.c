//Write a C program to create a variable kilometers = 5 and convert it into meters.
#include <stdio.h>
int main()
{
    int kilometers = 5;  // Predefined value
    int meters = kilometers * 1000;  // Convert kilometers to meters
    printf("%d kilometers is equal to %d meters.\n", kilometers, meters);
    return 0;
}