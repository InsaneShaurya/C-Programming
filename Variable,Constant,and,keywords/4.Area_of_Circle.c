#include <stdio.h>
#define PI 3.14159
#include <math.h>
int main()
{
    float radius, area;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    printf("Area of the Circle is %f square units", area);
    return 0;
}
