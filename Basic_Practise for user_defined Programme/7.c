//Write a C program to create a variable radius = 7 and calculate the area of a circle. Use π = 3.14.
#include <stdio.h>
int main()
{
    int radius = 7;  // Predefined value
    float pi = 3.14;  // Predefined value
    float area = pi * radius * radius;  // Calculate area
    printf("The area of the circle with radius %d is: %.2f\n", radius, area);
    return 0;
}