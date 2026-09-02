//Write a C program to create a variable fahrenheit = 98.6 and convert it into Celsius.
#include <stdio.h>
int main()
{
    float fahrenheit = 98.6;  // Predefined value
    float celsius = (fahrenheit - 32) * 5/9;  // Convert Fahrenheit to Celsius
    printf("%.1f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
    return 0;
}