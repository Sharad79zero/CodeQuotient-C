#include <stdio.h>

void factorial(int n)
{
    int f=1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    printf("%d", f);
}

int main()
{
    factorial(5);
}