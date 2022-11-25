#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    for (int count = x; count <= y; count++)
    {
        if (count % 5 == 0 && count % 3 == 0)
        {
            printf("CodeQuotient\n");
        }
        else if (count % 3 == 0)
        {
            printf("Code\n");
        }

        else if (count % 5 == 0)
        {
            printf("Quotient\n");
        }

        else
        {
            printf("%d\n", count);
        }
    }
}