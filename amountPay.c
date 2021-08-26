#include <stdio.h>

int main()
{
    //Declaring some variables that I might need
    int overtimePay, hoursWorked, extraHour, grossPay;
    int payRate = 12; 
    int overtimePayrate = payRate * 1.5;

    double rate15, rate20, rate25, taxPay, netPay;

    printf("Enter number of hours worked in a week:\n");
    scanf("%i", &hoursWorked);

    //Calculate overtime
    if (hoursWorked > 40)
    {
       extraHour = hoursWorked - 40;
       overtimePay = extraHour * overtimePayrate;
       grossPay = (40 * payRate) + overtimePay;
    }
    else {
       grossPay = hoursWorked * payRate;
    }

    //Calculate Tax Rates
    if (grossPay > 450)
    {
        rate15 = (double)(300 * 15) / 100;
        rate20 = (double)(150 * 20) / 100;
        rate25 = (double)(grossPay - 450) * 25 / 100;

        taxPay = rate15 + rate20 + rate25;
    }
    else
    {
        if (grossPay > 300 && grossPay >= 450)
        {
            
            rate15 = (double)(300 * 15) / 100;
            rate20 = (double)(grossPay - 300) * 20 / 100;

            taxPay = rate15 + rate20;
        }
        
        else
        {
            rate15 = (double)(grossPay * 15) / 100; 

            taxPay = rate15;
        }

    }

    netPay = grossPay - taxPay; 

    printf("Your gross pay this week is %i, the taxes are %.2f and your net pay is %.2f\n", grossPay, taxPay, netPay);

    return 0;
}
    

    

    
    
    


