//Rahul’s basic salary is ₹40,000. His dearness allowance (DA) is 40% of basic salary, and house rent allowance (HRA) is 20% of basic salary. Write a C program to calculate his gross salary.
#include <stdio.h>
int main() 
    {
        float basic_salary = 40000; ///Basic Salary
        float DA =0.4 * basic_salary; // Dearness Allowance
        float HRA = 0.2 * basic_salary; // House Rent Allowance
        float gross_salary = basic_salary + DA + HRA; // Gross Salary

        printf("Rahul's Gross Salary is: ₹%.2f\n", gross_salary);
        return 0;
    }