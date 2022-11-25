#include <stdio.h>
int main()
{

    int year;

    // printf("Enter a year: ");
    scanf("%d", &year);

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        printf("Leap Year", year);
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("Not a Leap Year", year);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("Leap Year", year);
    }
    // all other years are not leap years
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}