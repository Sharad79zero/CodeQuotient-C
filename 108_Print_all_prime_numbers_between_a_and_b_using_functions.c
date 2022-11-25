#include <stdio.h>

void printPrimes(int a, int b)
{
    int i, j; // initialization

    for (i = a; i <= b; i++)
    {
        int flag = 0;
        int count = 0;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
            else
                count = 1;
        }

        if (count == 0)
        {
            int minusone = -1;
            printf("%d", minusone);
        }

        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printPrimes(a, b);
    return 0;
}
