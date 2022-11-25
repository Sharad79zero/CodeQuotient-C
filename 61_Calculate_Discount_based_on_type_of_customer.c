
/*

<1000 - 0% dis
1000 to 5000 - 5 % dis
5001 - 10000 - 10% dis
>15000 - 15% dis
>30000 then - 2% dis

input kitni shopping
kitna total amount pay karega upto 2 decimal places

*/

#include <stdio.h>

int main()
{
    float s;
    int d = 0; // s = shopping price , d = discount price
    // printf("\nEnter Shopping Price: ");
    if (d == 0)
    {
        scanf("%f", &s);

        if (s < 1000)
        {
            printf("%0.2f", s);
        }

        else if (s >= 1000 && s <= 5000)
        {
            d = (5.00 * s) / 100; // 5% of selling price
            printf("%0.2f", s - d);
        }

        else if (s >= 5001 && s <= 10000)
        {
            d = (10.00 * s) / 100; // 10% of selling price
            printf("%0.2f", s - d);
        }

        else if (s > 10000 && s < 30000)
        {
            d = (15.00 * s) / 100; // 15% of selling price
            printf("%0.2f", s - d);
        }

        else if (s > 30000)
        {
            float sd;               // sd = secondary discount
            d = (2.00 * s) / 100;   // 2% of selling price
            sd = (15.00 * s) / 100; // 15 % of selling price
            d = d + sd;
            printf("%0.2f", s - d);
        }
    }
}