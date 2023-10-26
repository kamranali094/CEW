#include <stdio.h>
#include <stdlib.h>

int main()
{
    int empID,salary_per_hour=500;
    float hrsworked;
    printf("Enter Employee ID:");
    scanf("%d/n",&empID);
    printf("Enter total hours worked in this month:");
    scanf("%f",&hrsworked);
    printf("The total salary of the Employee(ID = %d): Rs %.2f",empID,salary_per_hour * hrsworked);


}
