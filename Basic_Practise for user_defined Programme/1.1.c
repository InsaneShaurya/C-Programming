/*Write a C program to create variables for name, age, 
and college name with predefined values and print them.*/
#include<stdio.h>
int main()
{
    int age = 17;
    char name[]= "Shaurya";
    char college[]= "MPEC";
    printf("My name is %s.\n",name);
    printf("I am %d years old.\n", age);
    printf("I study in %s.\n",college);

    return 0;
}
