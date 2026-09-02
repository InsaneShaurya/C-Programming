//Write a C program to create predefined values for radius = 5 and calculate the area of a circle.
#include <stdio.h>
#define PI 3.14159

int main()
{
    int radius = 5;  // Predefined value
    float area = PI * radius * radius;  // Calculate area
    printf("The area of the circle with radius %d is: %.2f\n", radius, area);
    return 0;
}