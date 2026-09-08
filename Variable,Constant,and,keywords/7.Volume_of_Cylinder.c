#include <stdio.h>
#define PI 3.14159
#include <math.h>
int main()
{
    float radius, height, Volume;
    printf("Enter the value of radius: ", radius);
    scanf("%f", &radius);
    printf("Enter the value of height: ", height);
    scanf("%f", &height);
    Volume = PI * pow(radius, 2) * height;
    printf("Volume of the cylinder is %f cubic units", Volume);
    return 0;
}