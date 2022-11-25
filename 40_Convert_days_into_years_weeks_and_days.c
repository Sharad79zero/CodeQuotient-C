#include <stdio.h>

int main()
{
    int days, years, weeks;

    /* Input total number of days from user */
    // printf("Enter days: ");
    scanf("%d", &days);

    /* Conversion */
    years = (days / 365); // Ignoring leap year
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;

    printf("%d %d %d", years, weeks, days);

    return 0;
}
