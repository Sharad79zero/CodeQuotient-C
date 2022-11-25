#include <stdio.h>

int main()
{

    int n, l; // n = number of late days , l = library fine
    int a;    // a = fine amount
    scanf("%d", &n);

    if (n <= 30)
    {

        if (n >= 0 && n <= 3)
        {
            a = 10;
            printf("%d", a);
        }

        if (n >= 4 && n <= 10)
        {
            a = 20;
            printf("%d", a);
        }

        if (n > 10)
        {
            a = 50;
            printf("%d", a);
        }
    }
    else
    {
        printf("Membership cancelled");
    }
}