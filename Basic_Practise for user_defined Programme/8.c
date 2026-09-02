//Write a C program to create predefined values base = 10 and height = 8, and calculate the area of a triangle
#include <stdio.h>
int main()
{
    int base = 10;  // Predefined value
    int height = 8;  // Predefined value
    float area = 0.5 * base * height;  // Calculate area
    printf("The area of the triangle with base %d and height %d is: %.2f\n", base, height, area);
    return 0;
}