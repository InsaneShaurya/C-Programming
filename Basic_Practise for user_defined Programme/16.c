//Write a C program with predefined values length = 10 and breadth = 5, and calculate the perimeter of a rectangle.
#include <stdio.h>
int main()
{
    int length = 10;  // Predefined value
    int breadth = 5;  // Predefined value
    int perimeter = 2 * (length + breadth);  // Calculate perimeter
    printf("The perimeter of the rectangle with length %d and breadth %d is: %d\n", length, breadth, perimeter);
    return 0;
}