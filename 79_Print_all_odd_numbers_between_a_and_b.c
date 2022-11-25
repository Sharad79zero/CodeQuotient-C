#include <stdio.h>

int main()
{

    signed int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 1 || i % 2 == -1)
        {
            printf("%d ", i);
        }
    }
}