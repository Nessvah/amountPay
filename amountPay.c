#include <stdio.h>

int main()
{
    //Declaring some variables that I might need
    int payRate = 12;
    int weekPay, overtimePayrate, overtimePay, hoursWorked, extraHour, grossPay;


    printf("Enter number of hours worked in a week:\n");
    scanf("%i", &hoursWorked);

    //Calculate Overtime Pay Rate
    overtimePayrate = payRate * 1.5; 

    //Calculate normal week pay
    weekPay = 40 * payRate;

    //Calculate overtime
    if (hoursWorked > 40)
    {
       extraHour = hoursWorked - 40;
       overtimePay = extraHour * overtimePayrate;
    }
    else {
       weekPay = hoursWorked * payRate; 
    }

    //Calculate Gross Pay for the work week
    grossPay = weekPay + overtimePay; 
    printf("Week normal pay %i", grossPay);


}