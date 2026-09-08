#include <stdio.h>
int main()
{
    // This program prints the user's input to the console
    char message[100];
    scanf("%s", message);
    printf("Hello, I am %s\n", message);
    return 0;
}