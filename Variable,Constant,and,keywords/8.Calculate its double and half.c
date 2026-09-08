// Program with a number and calculate its double and half
#include <stdio.h>
int main()
{
    float number, double_number, half_number;
    printf("Enter a number: ");
    scanf("%f", &number);
    double_number = number * 2;
    half_number = number / 2;
    printf("Double of the number is %f\n", double_number);
    printf("Half of the number is %f\n", half_number);
    return 0;
}