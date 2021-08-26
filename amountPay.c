#include <stdio.h>

int main()
{
    //Declaring some variables that I might need
    int payRate = 12;
    int weekPay, overtimePayrate, overtimePay, hoursWorked, extraHour, grossPay, taxPay, netPay, rate15, rate20, rate25;


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
       grossPay = weekPay + overtimePay;
    }
    else {
       weekPay = hoursWorked * payRate; 
       grossPay = weekPay;
    }

    //Calculate Tax Rates


    
    
    


    //Calculate  Net Pay 
    netPay = grossPay - taxPay;
}