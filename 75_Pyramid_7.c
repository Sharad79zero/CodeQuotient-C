// SOUMYASIS BHAIYA CSI WALE KI JAI HO!!!

#include <stdio.h>
int main()
{
    int n, i, j, a = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d", a);
            ++a;
            if (i != j)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}