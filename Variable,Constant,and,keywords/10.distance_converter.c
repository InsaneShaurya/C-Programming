// Write a C program to create a variable kilometers and convert it into meters.
#include <stdio.h>
int main()
{
    int kilometers;  // Variable to store kilometers
    printf("Enter distance in kilometers: ");
    scanf("%d", &kilometers);
    int meters = kilometers * 1000;  // Convert kilometers to meters
    printf("%d kilometers is equal to %d meters.\n", kilometers, meters);
    return 0;
}