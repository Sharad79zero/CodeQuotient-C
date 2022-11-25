/*

C program to calculate total electricity bill
Write a program to input electricity units and calculate the total electricity bill according to the given condition:

For first 50 units Rs. 2.50/unit
For next 100 units Rs. 2.75/unit
For next 100 units Rs. 4.20/unit
For unit above 250 Rs. 4.50/unit
An additional surcharge of 10% is added to the bill.

*/

#include <stdio.h>

int main()
{

    int unit;
    float total;
    scanf("%d", &unit);

    if (unit <= 50)
    {
        total = unit * 2.5;
    }

    else if (unit <= 150)
    {
        total = (50 * 2.5) + ((unit - 50) * 2.75);
    }
    else if (unit <= 250)
    {
        total = (50 * 2.5) + (100 * 2.75) + ((unit - 250) * 4.20);
    }
    else
    {
        total = (50 * 2.5) + (100 * 2.75) + (100 * 4.20) + ((unit - 250) * 4.50);
    }
    total = total + total * 0.1;
    printf("%0.2f", total);

    return 0;
}