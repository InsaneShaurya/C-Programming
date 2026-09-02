//Write a C program with a predefined value number = 6 and calculate its square and cube.
#include <stdio.h>
int main()
{
    int number = 6;  // Predefined value
    int square = number * number;  // Calculate square
    int cube = number * number * number;  // Calculate cube

    printf("The square of %d is: %d\n", number, square);
    printf("The cube of %d is: %d\n", number, cube);
    return 0;
}