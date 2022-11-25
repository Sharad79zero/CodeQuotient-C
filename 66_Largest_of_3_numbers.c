// Largest of 3 numbers

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a != b && a != c && a >= 0) && (b != a && b != c && b >= 0) && (c != a && c != b && c >= 0))
    {
        if (a > b && a > c)
        {
            printf("%d", a);
        }
        else if (b > a && b > c)
        {
            printf("%d", b);
        }
        else if (c > a && c > b)
        {
            printf("%d", c);
        }
    }
}