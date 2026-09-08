#include <stdio.h>
int main()
{

    float celsius, farenhite;
    printf("Enter temperature in celsius:");
    scanf("%f", &celsius);
    farenhite = celsius * 9 / 5 + 32;
    printf("Temperature in farenhite is %f", farenhite);
    return 0;
}
