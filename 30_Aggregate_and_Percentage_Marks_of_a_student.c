#include <stdio.h>

int main()
{
    int a, b, c, d, e, aggregate, percentage;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if ((a >= 0 && a <= 100) && (b >= 0 && b <= 100) && (c >= 0 && c <= 100) && (d >= 0 && d <= 100) && (e >= 0 && e <= 100))
    {
        aggregate = a + b + c + d + e;
        percentage = (aggregate * 100) / 500;
        printf("%d %d", aggregate, percentage);
    }

    /* mai eak galti kar raha tha ki mai percentage ko points tak
    bhi soch raha tha but integer hi lena tha percentage ko .*/
    return 0;
}