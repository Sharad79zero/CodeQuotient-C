// Thanks to Sujal

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    if (b < 0)
    {
        printf("%d", -a);
    }
    else if (b == 0)
    {
        printf("%d", a);
    }
    else if (a == 0)
    {
        printf("%d", b);
    }
    else
    {
        while (c != 0)
        {
            if (b % c == 0 && a % c == 0)
            {
                break;
            }
            c--;
        }
        printf("%d", c);
    }
    return 0;
}