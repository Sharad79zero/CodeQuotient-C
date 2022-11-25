#include <stdio.h>

int main()
{
    // Input Month
    int N;
    scanf("%d", &N);

    // Check for 31 Days: January, March, May ,July, August, October, December
    if (N == 1 || N == 3 || N == 5 || N == 7 || N == 8 || N == 10 || N == 12)
    {
        printf("31");
    }

    // Check for 30 Days: April, June, September, November
    else if (N == 4 || N == 6 || N == 9 || N == 11)
    {
        printf("30");
    }

    // Check for 28/29 Days: February we are ignoring Leap Years
    else if (N == 2)
    {
        printf("28");
    }

    // Else Invalid Input
    else
    {
        printf("Invalid Month.");
    }
    return 0;
}
