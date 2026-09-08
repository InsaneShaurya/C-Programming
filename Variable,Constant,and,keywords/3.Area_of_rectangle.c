#include <stdio.h>
int main()
{
    float length, width, area;
    printf("Enter Length of Rectangle:");
    scanf("%f", &length);
    printf("Enter width of rectangle:");
    scanf("%f", &width);

    area = length * width;

    printf("Area of rectangle is %f square units", area);
    return 0;
}