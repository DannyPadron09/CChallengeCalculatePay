#include <stdio.h>
#include <stdlib.h>

// constants needed 
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40


int main ()
{
    //declare variables
    int hours = 0;
    double pay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please enter the number of hours worked this week: ");
    //get the input
    scanf("%d", &hours);

    // calculate the pay
    if (hours <= 40)
        pay = hours * PAYRATE;
    else 
    {
        pay = 40 * PAYRATE;
        double overTime = (hours - 40) * (PAYRATE * 1.5);
        pay += overTime;
    }

    // calculate taxes
    if (pay <= 300)
    {
        taxes = pay * TAXRATE_300;
    }
    else if(pay > 300 && pay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (pay - 300) * TAXRATE_150;
    }
    else if(pay > 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (pay - 450) * TAXRATE_REST;
    }
    

}