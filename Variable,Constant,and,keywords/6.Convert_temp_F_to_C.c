#include <stdio.h>
int main()
{

    float celsius, farenhite;
    printf("Enter temperature in farenhite:");
    scanf("%f", &farenhite);
    celsius = (farenhite - 32) * 5 / 9;
    printf("Temperature in celsius is %f", celsius);
    return 0;
}